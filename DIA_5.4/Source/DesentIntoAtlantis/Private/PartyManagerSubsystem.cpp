// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManagerSubsystem.h"

#include "CombatEntityHub.h"
#include "EDataTableTypes.h"
#include "Health.h"
#include "InventoryEquipment.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkillHandlerData.h"
#include "PassiveSkills.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "UPartyInventory.h"


UPartyManagerSubsystem::UPartyManagerSubsystem()
{
}

void UPartyManagerSubsystem::LoadSavedPartyManagerSubsystem(FCompletePartyManagerSubsystemData aPartyManagerSubsystemData)
{
	CompletePartyManagerSubsystemData = aPartyManagerSubsystemData;
	totalExperience                   = aPartyManagerSubsystemData.totalExperience;
	partyLevel                        = aPartyManagerSubsystemData.partyLevel;

	PartyInventory->InitializePartyInventory(aPartyManagerSubsystemData.PartyInventoryCompleteData,
		persistentGameInstance->passiveFactorySubsystem,
		persistentGameInstance->skillFactorySubsystem);
	
	LoadAndCreateAllPlayerEntitys(aPartyManagerSubsystemData.playerCompleteDataSet);
	persistentGameInstance->popupSubsystem->SetPartySubsystem(this);
}

void UPartyManagerSubsystem::InitializeDataTable (UDataTable* aPlayerData, UDataTable* aClassDataTable, UDataTable* aPartyExperienceTable, UDataTable* aTestCombatInfo)
{
	FPartyExperienceTable PartyExperienceTable = *aPartyExperienceTable->FindRow<FPartyExperienceTable>(FName(FString::FromInt(0)),FString("Searching for Classes"),true) ;
	LevelExperienceTable = PartyExperienceTable.LevelExpValue;
	
	UDataTable* classDatatable = aClassDataTable;

	if(classDatatable)
	{
		for (auto Element : classDatatable->GetRowNames())
		{
			FCompleteClassData completeClassData = *classDatatable->FindRow<FCompleteClassData>(FName(Element),FString("Searching for Classes"),true) ;
			classDataTables.Add(completeClassData.classIdentifer,completeClassData);
		}
	}
	
	// Cast the game instance to your custom game instance class
	persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	skillFactory = persistentGameInstance->GetSubsystem<USkillFactorySubsystem>();
	passiveSkillFactory = persistentGameInstance->GetSubsystem<UPassiveFactorySubsystem>();
	PartyInventory = NewObject<UPartyInventory>();
	
	UDataTable* datatable = aPlayerData;
	
	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			playerEntityData.Add(*datatable->FindRow<FPlayerIdentityData>(FName(Element),FString("Searching for Players"),true));
			EPartyMembers partyMember = playerEntityData.Last().characterIdentifier;
			playerIdenityMap.Add(partyMember,playerEntityData.Last());
		}
	}

	PartyInventory->InitializePartyInventory(CompletePartyManagerSubsystemData.PartyInventoryCompleteData,
		persistentGameInstance->passiveFactorySubsystem,persistentGameInstance->skillFactorySubsystem);


	UDataTable* combatTestInfo = aTestCombatInfo;
	
	if(combatTestInfo)
	{
		for (auto Element : combatTestInfo->GetRowNames())
		{
			DefaultTestFightData.Add(*combatTestInfo->FindRow<FDefaultTestFightData>(FName(Element),FString("Searching for Players"),true));
		}
	}

	persistentGameInstance->popupSubsystem->SetPartySubsystem(this);
}

void UPartyManagerSubsystem::CreatePlayerEntitys(EPartyMembers aPlayer)
{
	UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

	FCharacterCostumeData CostumeData = persistentGameInstance->dialogueManagerSubsystem->
		GetCostumeData(playerIdenityMap[aPlayer].DialogueActorsLabel,playerIdenityMap[aPlayer].defaultCostume);
	
	PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[aPlayer],CostumeData);
	PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory,persistentGameInstance);

	EClassID initalClass = playerIdenityMap[aPlayer].initalClass;
	if(classDataTables.Contains(initalClass))
	{
		PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[initalClass]);
		PlayerCombatEntity->SetMainClass(initalClass);
		PlayerCombatEntity->LevelUp(partyLevel);
	}

	FEquipmentHandlerData equipmentHandlerData = playerIdenityMap[aPlayer].DefaultSpawnEquipmentHandlerData;

	for (int i = 0 ; i < equipmentHandlerData.equipmentPassiveData.Num();i++)
	{
		FEquipmentPassiveData EquipmentPassiveData = equipmentHandlerData.equipmentPassiveData[i];
		FEquipmentRequestInfo EquipmentRequestInfo;
		EquipmentRequestInfo.equipmentID = EquipmentPassiveData.EquipmentID;
		EquipmentRequestInfo.amount	     = 1;

		EPartyMembers PartyMembers = PlayerCombatEntity->GetPartyMember();
		PartyInventory->GetInventoryEquipment()->AddEquipmentToInventory(EquipmentRequestInfo);
		PlayerCombatEntity->combatEntityHub->equipmentHandler->EquipEquipment(PartyInventory->GetInventoryEquipment()->TakeOutEquipment(PartyMembers,EquipmentPassiveData.EquipmentID),i);
	}
	
	PlayerCombatEntity->health->InitializeHealth(50,50,PlayerCombatEntity);
	playerCombatEntity.Add(PlayerCombatEntity);
	playerCombatEntityInfo.Add(aPlayer,PlayerCombatEntity);
}

void UPartyManagerSubsystem::AddPlayerToActiveParty(EPartyMembers aPlayer)
{
	if(!playerCombatEntityInfo.Contains(aPlayer))
	{
		CreatePlayerEntitys(aPlayer);
	}
	
	if(!activePartyEntityData.Contains(playerCombatEntityInfo[aPlayer]))
	{
		persistentGameInstance->saveManagerSubsystem->SessionSaveGameObject->AddPlayerCompleteDataSet(aPlayer,playerCombatEntityInfo[aPlayer]->playerCompleteDataSet);
		activePartyEntityData.Add(playerCombatEntityInfo[aPlayer]);
	}
}

void UPartyManagerSubsystem::RemoveAllCombatTokensFromParty()
{
	for(int i = 0 ; i < activePartyEntityData.Num();i++)
	{
		activePartyEntityData[i]->combatEntityHub->combatTokenHandler->RemoveAllCombatTokens();
	}
}

void UPartyManagerSubsystem::CreateTestParty()
{
	for (int i = 0 ; i < DefaultTestFightData[0].PlayerFightData.Num();i++)
	{
		FDefaultTestPlayerFightData PlayerFightData = DefaultTestFightData[0].PlayerFightData[i];
		AddPlayerToActiveParty(PlayerFightData.characterIdentifier);
		
		activePartyEntityData[i]->classHandler->UnlockClass(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer);
		activePartyEntityData[i]->classHandler->UnlockClass(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer);

		if(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer != EClassID::None)
		{
			activePartyEntityData[i]->classHandler->SetClass(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer,EClassSlot::Main);	
		}

		if(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer != EClassID::None)
		{
			activePartyEntityData[i]->classHandler->SetClass(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer,EClassSlot::Sub);
		}
		
		activePartyEntityData[i]->SetEquipmentState(PlayerFightData.DefaultSpawnEquipmentHandlerData);

		activePartyEntityData[i]->combatEntityHub->passiveHandler->PassiveSlotHandler->SetPassiveSlotState(PlayerFightData.PassiveSlotHandlerData);
		switch (PlayerFightData.TestCharacterState)
		{
		case ETestCharacterState::None:
			break;
		case ETestCharacterState::UnlockEverything:
			activePartyEntityData[i]->classHandler->UnlockAllSkills();
			activePartyEntityData[i]->classHandler->UnlockAllMainClassPassives();
			break;
		}
	}
}

void UPartyManagerSubsystem::SavePartyManager()
{
	CompletePartyManagerSubsystemData.partyLevel       = partyLevel;
	CompletePartyManagerSubsystemData.totalExperience  = totalExperience;
	CompletePartyManagerSubsystemData.totalClassPoints = totalClassPoints;
	CompletePartyManagerSubsystemData.PartyInventoryCompleteData = PartyInventory->GetPartyInventoryCompleteData();

	for (auto Element : playerCombatEntityInfo)
	{
		Element.Value->GatherAndSavePlayerCompleteDataSet();
		if(!CompletePartyManagerSubsystemData.playerCompleteDataSet.Contains(Element.Key))
		{
			CompletePartyManagerSubsystemData.playerCompleteDataSet.Add(Element.Key,Element.Value->playerCompleteDataSet);	
		}
		else
		{
			CompletePartyManagerSubsystemData.playerCompleteDataSet[Element.Key] = Element.Value->playerCompleteDataSet;		
		}
	
	}
	
	PartyManagerHasChanged.Broadcast(CompletePartyManagerSubsystemData);
}

void UPartyManagerSubsystem::SavePlayerEntitys()
{
	for(int i = 0 ; i < activePartyEntityData.Num();i++)
	{
		activePartyEntityData[i]->GatherAndSavePlayerCompleteDataSet();
		persistentGameInstance->saveManagerSubsystem->SessionSaveGameObject->AddPlayerCompleteDataSet(activePartyEntityData[i]->playerCompleteDataSet.playerIdentityData.characterIdentifier,
			activePartyEntityData[i]->playerCompleteDataSet); activePartyEntityData[i]->playerCompleteDataSet;
	}
}

int UPartyManagerSubsystem::GetPartyLevel() const {return partyLevel;}

void UPartyManagerSubsystem::AddPartyExperience(int aExperience)
{
	if(partyLevel > LevelExperienceTable.Num())
	{
		return;
	}
	
	totalExperience +=  aExperience;
	int currentLevel      = partyLevel;
	int expToReach        = LevelExperienceTable[partyLevel];
	
	while (totalExperience >= expToReach)
	{
		currentLevel++;
		
		if (LevelExperienceTable.Contains(currentLevel))
		{
			expToReach = LevelExperienceTable[currentLevel];
		}
		else
		{
			// Handle case when no further levels are defined.
			break;
		}
	}


	partyLevel = currentLevel;
	SavePartyManager();
}

void UPartyManagerSubsystem::AddPartyClassPoints(int aClassPoints)
{
	totalClassPoints += aClassPoints;

	for (auto PlayerCombatEntity : playerCombatEntity)
	{
		PlayerCombatEntity->GiveClassPoints(aClassPoints);
	}
}

void UPartyManagerSubsystem::SetPartyLevel(int aPartyLevel)
{
	partyLevel = aPartyLevel;
}


void UPartyManagerSubsystem::LoadAndCreateAllPlayerEntitys(TMap<EPartyMembers, FPlayerCompleteDataSet> aPlayerCompleteDataSets)
{
	playerCombatEntity.Empty();
	playerCombatEntityInfo.Empty();
	activePartyEntityData.Empty();
	
	
	for (auto& playerCompleteDataSet : aPlayerCompleteDataSets)
	{
		FPlayerCompleteDataSet playerCompleteData  = playerCompleteDataSet.Value;
		UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

		EPartyMembers partyMember =  playerCompleteData.playerIdentityData.characterIdentifier;
		
		ECharacterCostume CharacterCostume = playerCompleteData.playerIdentityData.currentCharacterCostume; 

		FCharacterCostumeData CostumeData = persistentGameInstance->dialogueManagerSubsystem->
		GetCostumeData(playerCompleteData.playerIdentityData.DialogueActorsLabel,CharacterCostume);
	
		PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[partyMember],CostumeData);
		PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory,persistentGameInstance);

		PlayerCombatEntity->LoadSavedHPAndMP(playerCompleteData);

		//Class
		TMap<EClassID, FCompleteClassData> allCompleteClassData = playerCompleteData.CompleteClassHandlerData.unlockedPlayerClasses;
		
		for (TTuple<EClassID, FCompleteClassData> playerClass : allCompleteClassData)
		{
			EClassID classIdentifier = playerClass.Key;
			
			if(!classDataTables.Contains(classIdentifier))
			{
				continue;
			}
			
			FCompleteClassData CompleteClassData =
				PlayerCombatEntity->classHandler->ValidateSavedClassAndDataClass(playerClass.Value,classDataTables[classIdentifier]);
			
			PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(CompleteClassData);
		}

		EClassID mainClassIdentifier = playerCompleteData.CompleteClassHandlerData.mainClassData.classIdentifer;
		EClassID subclassIdentifier  = playerCompleteData.CompleteClassHandlerData.subClassData.classIdentifer;
		
		PlayerCombatEntity->classHandler->SetClass(mainClassIdentifier,EClassSlot::Main);
		PlayerCombatEntity->classHandler->SetClass(subclassIdentifier,EClassSlot::Sub);

		//Setting
		playerCombatEntity.Add(PlayerCombatEntity);
		playerCombatEntityInfo.Add(partyMember,PlayerCombatEntity);

		PlayerCombatEntity->LevelUp(partyLevel);
		
		//Equipment
		PlayerCombatEntity->SetEquipmentState(playerCompleteDataSet.Value.EquipmentHandlerData);
		//Passive
		PlayerCombatEntity->combatEntityHub->passiveHandler->SetPassiveHandlerState(playerCompleteDataSet.Value.PassiveHandlerData);

		AddPlayerToActiveParty(partyMember);
	}
}

void UPartyManagerSubsystem::ResetActivePartyToDefaultState()
{
	for(int i = 0 ;i < activePartyEntityData.Num();i++)
	{
		activePartyEntityData[i]->Reset();
	}
}

TArray<UPlayerCombatEntity*> UPartyManagerSubsystem::ReturnActiveParty()
{
	return activePartyEntityData;
}


