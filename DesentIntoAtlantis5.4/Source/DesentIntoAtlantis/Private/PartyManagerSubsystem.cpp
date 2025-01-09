// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManagerSubsystem.h"

#include "CombatEntityHub.h"
#include "EDataTableTypes.h"
#include "Health.h"
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

	PartyInventory->InitializePartyInventory(aPartyManagerSubsystemData.PartyInventoryCompleteData,persistentGameInstance->passiveFactorySubsystem);
}

void UPartyManagerSubsystem::InitializeDataTable (UDataTable* aPlayerData, UDataTable* aClassDataTable, UDataTable* aPartyExperienceTable)
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

	PartyInventory->InitializePartyInventory(CompletePartyManagerSubsystemData.PartyInventoryCompleteData,persistentGameInstance->passiveFactorySubsystem);
	
}

void UPartyManagerSubsystem::CreatePlayerEntitys(EPartyMembers aPlayer)
{
	UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

	PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[aPlayer]);
	PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory);

	EClasses initalClass = playerIdenityMap[aPlayer].initalClass;
	if(classDataTables.Contains(initalClass))
	{
		PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[initalClass]);
		PlayerCombatEntity->SetMainClass(initalClass);
		PlayerCombatEntity->LevelUp(partyLevel);
	}

	FEquipmentHandlerData equipmentHandlerData = playerIdenityMap[aPlayer].DefaultSpawnEquipmentHandlerData;

	for (auto EquipmentPassiveData : equipmentHandlerData.equipmentPassiveData)
	{
		FEquipmentRequestInfo EquipmentRequestInfo;
		EquipmentRequestInfo.equipmentID = EquipmentPassiveData.EquipmentID;
		EquipmentRequestInfo.amount	     = EquipmentPassiveData.Amount;

		PartyInventory->AddEquipmentToInventory(EquipmentRequestInfo);
	}
	
	PlayerCombatEntity->combatEntityHub->equipmentHandler->SetEquipmentState(equipmentHandlerData);
	
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

void UPartyManagerSubsystem::SavePartyManager()
{
	CompletePartyManagerSubsystemData.partyLevel       = partyLevel;
	CompletePartyManagerSubsystemData.totalExperience  = totalExperience;
	CompletePartyManagerSubsystemData.totalClassPoints = totalClassPoints;
	CompletePartyManagerSubsystemData.PartyInventoryCompleteData = PartyInventory->GetPartyInventoryCompleteData();
	PartyManagerHasChanged.Broadcast(CompletePartyManagerSubsystemData);
}

void UPartyManagerSubsystem::SavePlayerEntitys()
{
	for(int i = 0 ; i < activePartyEntityData.Num();i++)
	{
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
		

		PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[partyMember]);
		PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory);

		PlayerCombatEntity->LoadSavedHPAndMP(playerCompleteData);
		
		TMap<EClasses, FCompleteClassData> allCompleteClassData = playerCompleteData.CompleteClassHandlerData.unlockedPlayerClasses;
		
		for (TTuple<EClasses, FCompleteClassData> playerClass : allCompleteClassData)
		{
			EClasses classIdentifier = playerClass.Key;
			PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[classIdentifier]);

			for (auto classPassive : playerClass.Value.classPassives)
			{
				if(!passiveSkillFactory->DoesPassiveSkillExist(classPassive.passiveSkillID))
				{
					PlayerCombatEntity->GiveClassPoints(classPassive.CPCost);
				}
			}
		}

		EClasses mainClassIdentifier = playerCompleteData.CompleteClassHandlerData.mainClassData.classIdentifer;
		PlayerCombatEntity->SetMainClass(mainClassIdentifier);
		playerCombatEntity.Add(PlayerCombatEntity);
		playerCombatEntityInfo.Add(partyMember,PlayerCombatEntity);

		PlayerCombatEntity->LevelUp(partyLevel);

		PlayerCombatEntity->combatEntityHub->equipmentHandler->SetEquipmentState(playerCompleteDataSet.Value.EquipmentHandlerData);
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
