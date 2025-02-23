// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManagerSubsystem.h"

#include "CombatEntityHub.h"
#include "EDataTableTypes.h"
#include "Health.h"
#include "Inventory_Equipment.h"
#include "Inventory_KeyItems.h"
#include "PartyData.h"
#include "PartyGroup_Dump.h"
#include "PartyGroup_Slot.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkillHandlerData.h"
#include "PassiveSkills.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "StaminaHandler.h"
#include "UPartyInventory.h"


UPartyManagerSubsystem::UPartyManagerSubsystem()
{
}

void UPartyManagerSubsystem::LoadSavedPartyManagerSubsystem(FCompletePartyManagerSubsystemData aPartyManagerSubsystemData)
{
	CompletePartyManagerSubsystemData = aPartyManagerSubsystemData;
	totalExperience                   = aPartyManagerSubsystemData.totalExperience;
	partyLevel                        = aPartyManagerSubsystemData.partyLevel;

	StaminaData = aPartyManagerSubsystemData.StaminaData;
	staminaHandler->InitializeStaminaHandler(StaminaData,this);
	
	PartyInventory->InitializePartyInventory(aPartyManagerSubsystemData.PartyInventoryCompleteData,
		persistentGameInstance->passiveFactorySubsystem,
		persistentGameInstance->skillFactorySubsystem,
		persistentGameInstance->KeyItemFactorySubsystem);

	ItemChargesBase = aPartyManagerSubsystemData.partyWideItemChargeBase;
	
	LoadAndCreateAllPlayerEntitys(aPartyManagerSubsystemData.playerCompleteDataSet);
	CreatePartyGroups(CompletePartyManagerSubsystemData);
	
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
	staminaHandler = NewObject<UStaminaHandler>();
	staminaHandler->InitializeStaminaHandler(StaminaData,this);
	
	UDataTable* datatable = aPlayerData;
	
	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			playerEntityData.Add(*datatable->FindRow<FPlayerIdentityData>(FName(Element),FString("Searching for Players"),true));
			EPartyMembersID partyMember = playerEntityData.Last().characterIdentifier;
			playerIdenityMap.Add(partyMember,playerEntityData.Last());
		}
	}

	PartyInventory->InitializePartyInventory(CompletePartyManagerSubsystemData.PartyInventoryCompleteData,
		persistentGameInstance->passiveFactorySubsystem,persistentGameInstance->skillFactorySubsystem,
		persistentGameInstance->KeyItemFactorySubsystem);


	UDataTable* combatTestInfo = aTestCombatInfo;
	
	if(combatTestInfo)
	{
		for (auto Element : combatTestInfo->GetRowNames())
		{
			DefaultTestFightData.Add(*combatTestInfo->FindRow<FDefaultTestFightData>(FName(Element),FString("Searching for Players"),true));
		}
	}
	
	CreatePartyGroups(CompletePartyManagerSubsystemData);
	
	persistentGameInstance->popupSubsystem->SetPartySubsystem(this);
}

void UPartyManagerSubsystem::CreatePartyGroups(FCompletePartyManagerSubsystemData aCompletePartyManagerSubsystemData)
{
	partyGroup.Empty();
	FPartyInfo emptyPartyInfo;

	//Active
	partyGroup.Add(EPartyType::Active, NewObject<UPartyGroup_Slot>());
	if(aCompletePartyManagerSubsystemData.partyData.partyInfos.Contains(EPartyType::Active))
	{
		partyGroup[EPartyType::Active]->Initialize(this,aCompletePartyManagerSubsystemData.partyData.partyInfos[EPartyType::Active]);		
	}
	else
	{
		
		partyGroup[EPartyType::Active]->Initialize(this,emptyPartyInfo);	
	}

	//Reserve
	partyGroup.Add(EPartyType::Reserve, NewObject<UPartyGroup_Dump>());
	if(aCompletePartyManagerSubsystemData.partyData.partyInfos.Contains(EPartyType::Reserve))
	{
		partyGroup[EPartyType::Reserve]->Initialize(this,aCompletePartyManagerSubsystemData.partyData.partyInfos[EPartyType::Reserve]);
	}
	else
	{
		partyGroup[EPartyType::Reserve]->Initialize(this,emptyPartyInfo);	
	}

	//InAccessible
	partyGroup.Add(EPartyType::InAccessible, NewObject<UPartyGroup_Dump>());
	if(aCompletePartyManagerSubsystemData.partyData.partyInfos.Contains(EPartyType::InAccessible))
	{
		partyGroup[EPartyType::InAccessible]->Initialize(this,aCompletePartyManagerSubsystemData.partyData.partyInfos[EPartyType::InAccessible]);
	}
	else
	{
		partyGroup[EPartyType::InAccessible]->Initialize(this,emptyPartyInfo);	
	}
	
}

void UPartyManagerSubsystem::CreatePlayerEntitys(EPartyMembersID aPlayer)
{
	if(aPlayer == EPartyMembersID::None)
	{
		return;
	}
	
	UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

	FPlayerIdentityData PlayerIdentityData = playerIdenityMap[aPlayer];
	
	FCharacterCostumeData CostumeData = persistentGameInstance->dialogueManagerSubsystem->
		GetCostumeData(playerIdenityMap[aPlayer].DialogueActorsLabel,playerIdenityMap[aPlayer].defaultCostume);
	
	PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[aPlayer],CostumeData);
	PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory,persistentGameInstance);

	EClassID initalClass = PlayerIdentityData.initalClass;
	if(classDataTables.Contains(initalClass))
	{
		PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[initalClass]);
		PlayerCombatEntity->SetMainClass(initalClass);
		if(PlayerIdentityData.isGuestCharacter)
		{
			PlayerCombatEntity->LevelUp(PlayerIdentityData.initialLevel);
		}
		else
		{
			PlayerCombatEntity->LevelUp(partyLevel);			
		}

	}

	FEquipmentHandlerData equipmentHandlerData = playerIdenityMap[aPlayer].DefaultSpawnEquipmentHandlerData;

	for (int i = 0 ; i < equipmentHandlerData.equipmentPassiveData.Num();i++)
	{
		FEquipmentPassiveData EquipmentPassiveData = equipmentHandlerData.equipmentPassiveData[i];
		FEquipmentRequestInfo EquipmentRequestInfo;
		EquipmentRequestInfo.equipmentID = EquipmentPassiveData.EquipmentID;
		EquipmentRequestInfo.amount	     = 1;

		EPartyMembersID PartyMembers = PlayerCombatEntity->GetPartyMemberID();
		PartyInventory->GetInventoryEquipment()->AddEquipmentToInventory(EquipmentRequestInfo);
		PlayerCombatEntity->combatEntityHub->equipmentHandler->EquipEquipment(PartyInventory->GetInventoryEquipment()->TakeOutEquipment(PartyMembers,EquipmentPassiveData.EquipmentID),i);
	}

	if(!PlayerIdentityData.isGuestCharacter)
	{
		PlayerCombatEntity->health->InitializeHealth(50,50,PlayerCombatEntity);
	}
	else
	{
		PlayerCombatEntity->health->InitializeHealth(PlayerIdentityData.playerStatBases.HealthData.maxHealth,
			PlayerIdentityData.playerStatBases.HealthData.maxHealth,PlayerCombatEntity);
	}
	
	playerCombatEntity.Add(PlayerCombatEntity);
	playerCombatEntityInfo.Add(aPlayer,PlayerCombatEntity);
}

void UPartyManagerSubsystem::AddPlayerToActiveParty(EPartyMembersID aPlayer)
{
	UPartyGroup_Slot* ActiveSlot = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);

	if(ActiveSlot == nullptr)
	{
		return;
	}

	if(!ActiveSlot->AddPlayerToActiveParty(aPlayer))
	{
		return;
	}
	
	playerCombatEntityInfo[aPlayer]->playerCompleteDataSet.currentPartySlot = EPartySlotType::Active;

}

void UPartyManagerSubsystem::SetFloorPawnDelegates(AFloorPlayerPawn* aPlayerHasMoved)
{
	staminaHandler->SetFloorPawnDelegates(aPlayerHasMoved);
}


UPlayerCombatEntity* UPartyManagerSubsystem::GetAndCreatePlayerEntity(EPartyMembersID aPlayer)
{
	if(aPlayer == EPartyMembersID::None)
	{
		return nullptr;
	}
	
	if(!playerCombatEntityInfo.Contains(aPlayer))
	{
		CreatePlayerEntitys(aPlayer);
	}

	return playerCombatEntityInfo[aPlayer];
}

void UPartyManagerSubsystem::RemovePartyMemberToInaccessible(EPartyMembersID aPlayer)
{
	UPartyGroup_Slot* ActiveSlot   = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);
	UPartyGroup_Dump* Reserve      = Cast<UPartyGroup_Dump>(partyGroup[EPartyType::Reserve]);
	UPartyGroup_Dump* Inaccessible = Cast<UPartyGroup_Dump>(partyGroup[EPartyType::InAccessible]);

	if(ActiveSlot == nullptr || Reserve == nullptr ||  Inaccessible == nullptr)
	{
		return;
	}
	
	ActiveSlot->RemovePartyMember(aPlayer);
	Reserve->RemovePartyMember(aPlayer);
	Inaccessible->AddPartyMember(aPlayer);
}

void UPartyManagerSubsystem::RemoveAllCombatTokensFromParty()
{
	for (auto Element : playerCombatEntityInfo)
	{
		playerCombatEntityInfo[Element.Key]->combatEntityHub->combatTokenHandler->RemoveAllCombatTokens();	
	}

}

void UPartyManagerSubsystem::UnlockClassForAll(EClassID aClassID)
{
	CompletePartyManagerSubsystemData.partyWideUnlockedClasses.Add(aClassID);

	for (auto Element : playerCombatEntityInfo)
	{
		Element.Value->classHandler->UnlockClass(aClassID);
	}
}

void UPartyManagerSubsystem::CreateTestParty()
{
	UPartyGroup_Slot* ActiveSlot = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);

	if(ActiveSlot == nullptr)
	{
		return;
	}

	ActiveSlot->CreateTestParty(DefaultTestFightData);
}

void UPartyManagerSubsystem::SavePartyManager()
{
	CompletePartyManagerSubsystemData.partyLevel       = partyLevel;
	CompletePartyManagerSubsystemData.totalExperience  = totalExperience;
	CompletePartyManagerSubsystemData.totalClassPoints = totalClassPoints;
	CompletePartyManagerSubsystemData.PartyInventoryCompleteData = PartyInventory->GetPartyInventoryCompleteData();

	CompletePartyManagerSubsystemData.partyData   = CreatePartyGroupData();
	CompletePartyManagerSubsystemData.StaminaData = staminaHandler->GetStaminaData();
	
	persistentGameInstance->saveManagerSubsystem->SessionSaveGameObject->SaveIcons.Empty();

	
	UPartyGroup_Slot* ActiveSlot   = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);

	for (auto Element : ActiveSlot->ReturnActiveParty())
	{
		if(Element == nullptr)
		{
			continue;
		}
		
		persistentGameInstance->saveManagerSubsystem->SessionSaveGameObject->AddSaveIcons(Element->GetPartyMemberID(),Element->playerCompleteDataSet);		
	}

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
	for (auto Element : playerCombatEntityInfo)
	{
		playerCombatEntityInfo[Element.Key]->GatherAndSavePlayerCompleteDataSet();
		persistentGameInstance->saveManagerSubsystem->SessionSaveGameObject->AddSaveIcons(playerCombatEntityInfo[Element.Key]->playerCompleteDataSet.playerIdentityData.characterIdentifier,
			playerCombatEntityInfo[Element.Key]->playerCompleteDataSet);
		playerCombatEntityInfo[Element.Key]->playerCompleteDataSet;
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

UPlayerCombatEntity* UPartyManagerSubsystem::GetSpecificPartyMember(EPartyMembersID aPartyMember)
{
	for (auto Element : playerCombatEntityInfo)
	{
		if(Element.Value->GetPartyMemberID() == aPartyMember)
		{
			return Element.Value;
		}
	}

	return nullptr;
}


void UPartyManagerSubsystem::LoadAndCreateAllPlayerEntitys(TMap<EPartyMembersID, FPlayerCompleteDataSet> aPlayerCompleteDataSets)
{
	playerCombatEntity.Empty();
	playerCombatEntityInfo.Empty();
	
	for (auto& playerCompleteDataSet : aPlayerCompleteDataSets)
	{
		FPlayerCompleteDataSet playerCompleteData  = playerCompleteDataSet.Value;
		UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

		EPartyMembersID partyMember =  playerCompleteData.playerIdentityData.characterIdentifier;
		
		ECharacterCostume CharacterCostume = playerCompleteData.playerIdentityData.currentCharacterCostume; 

		FCharacterCostumeData CostumeData = persistentGameInstance->dialogueManagerSubsystem->
		GetCostumeData(playerCompleteData.playerIdentityData.DialogueActorsLabel,CharacterCostume);
	
		PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[partyMember],CostumeData);
		PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory,persistentGameInstance);


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
		PlayerCombatEntity->LoadSavedHPAndMP(playerCompleteData);
		
		//Equipment
		PlayerCombatEntity->SetEquipmentState(playerCompleteDataSet.Value.EquipmentHandlerData);
		//Passive
		PlayerCombatEntity->combatEntityHub->passiveHandler->SetPassiveHandlerState(playerCompleteDataSet.Value.PassiveHandlerData);
	}
}

void UPartyManagerSubsystem::ResetActivePartyToDefaultState()
{
	for (auto Element :playerCombatEntityInfo )
	{
		Element.Value->Reset();
	}
}

TArray<UPlayerCombatEntity*> UPartyManagerSubsystem::ReturnActiveParty()
{
	UPartyGroup_Slot* ActiveSlot   = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);

	TArray<UPlayerCombatEntity*>  activeParty;
	if(ActiveSlot == nullptr)
	{
		return activeParty;
	}

	activeParty = ActiveSlot->ReturnActiveParty();
	return activeParty;
}

TMap<ESlot, UPlayerCombatEntity*> UPartyManagerSubsystem::ReturnActivePartySlots()
{
	UPartyGroup_Slot* ActiveSlot   = Cast<UPartyGroup_Slot>(partyGroup[EPartyType::Active]);

	TMap<ESlot, UPlayerCombatEntity*>  activeParty;
	if(ActiveSlot == nullptr)
	{
		return activeParty;
	}

	activeParty = ActiveSlot->ReturnActivePartySlots();
	return activeParty;
}

FPartyGroupCompleteData UPartyManagerSubsystem::CreatePartyGroupData()
{
	FPartyGroupCompleteData PartyGroupCompleteData;
	for (auto Element : partyGroup)
	{
		PartyGroupCompleteData.partyInfos.Add(Element.Key,Element.Value->GetPartyInfo());
	}

	return PartyGroupCompleteData;
}

void UPartyManagerSubsystem::RewardParty(FRewardsData aRewardData)
{
	UInventory_KeyItems* KeyItems = PartyInventory->GetInventoryKeyItems();
	for (auto Element : aRewardData.KeyItemsIDs)
	{
		KeyItems->AddKeyItem(Element);
	}

	UInventory_Equipment* Equipment = PartyInventory->GetInventoryEquipment();
	for (auto Element : aRewardData.EquipmentIds)
	{
		Equipment->AddEquipmentToInventory(Element);
	}

	UInventory_Items* items = PartyInventory->GetInventoryItems();
	for (auto Element : aRewardData.ItemIds)
	{
		items->AddItem(Element);
	}
	
	//UInventory_Items* items = persistentGameInstance->partyManagerSubsystem->PartyInventory->GetInventoryItems();
	for (auto Element : aRewardData.ClassIds)
	{
		UnlockClassForAll(Element);
	}
}


