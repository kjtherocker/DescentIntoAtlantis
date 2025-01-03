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


UPartyManagerSubsystem::UPartyManagerSubsystem()
{
}

void UPartyManagerSubsystem::LoadSavedPartyManagerSubsystem(FCompletePartyManagerSubsystemData aPartyManagerSubsystemData)
{
	CompletePartyManagerSubsystemData = aPartyManagerSubsystemData;
	totalExperience                   = aPartyManagerSubsystemData.totalExperience;
	partyLevel                        = aPartyManagerSubsystemData.partyLevel;
}

void UPartyManagerSubsystem::InitializeDataTable (UDataTable* aPlayerData, UDataTable* aClassDataTable, UDataTable* aPartyExperienceTable)
{


	FPartyExperienceTable PartyExperienceTable = *aPartyExperienceTable->FindRow<FPartyExperienceTable>(FName(FString::FromInt(0)),FString("Searching for Classes"),true) ;
	LevelExperienceTable = PartyExperienceTable.LevelExpValue;
	
	UDataTable* classDatatable = aClassDataTable;
	for(int i = 0 ; i < classDatatable->GetRowMap().Num(); i ++)
	{
		FCompleteClassData completeClassData = *classDatatable->FindRow<FCompleteClassData>(FName(FString::FromInt(i)),FString("Searching for Classes"),true) ;
		classDataTables.Add(completeClassData.classIdentifer,completeClassData);
	}
	
	// Cast the game instance to your custom game instance class
	persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	skillFactory = persistentGameInstance->GetSubsystem<USkillFactorySubsystem>();
	passiveSkillFactory = persistentGameInstance->GetSubsystem<UPassiveSkillFactorySubsystem>();
	
	UDataTable* datatable = aPlayerData;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		playerEntityData.Add(*datatable->FindRow<FPlayerIdentityData>(FName(FString::FromInt(i)),FString("Searching for Players"),true));
	}
	
	for(int i = 0;i < playerEntityData.Num();i++)
	{
		//if we dont get back the correct information from the datatable
		EPartyMembers partyMember = playerEntityData[i].characterIdentifier;
		playerIdenityMap.Add(partyMember,playerEntityData[i]);
	}
}

void UPartyManagerSubsystem::CreatePlayerEntitys(EPartyMembers aPlayer)
{
	UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

	PlayerCombatEntity->SetPlayerEntity(playerIdenityMap[aPlayer]);
	PlayerCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactory);

	EClasses initalClass = playerIdenityMap[aPlayer].initalClass;
	if(classDataTables.Contains(initalClass))
	{
		PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[initalClass],partyLevel);
		PlayerCombatEntity->SetMainClass(initalClass);
		PlayerCombatEntity->LevelUp(partyLevel);
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

void UPartyManagerSubsystem::SavePartyManager()
{
	CompletePartyManagerSubsystemData.partyLevel       = partyLevel;
	CompletePartyManagerSubsystemData.totalExperience  = totalExperience;
	CompletePartyManagerSubsystemData.totalClassPoints = totalClassPoints;
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
			int level = playerClass.Value.currentLevel;
			PlayerCombatEntity->InitializeAndUnlockCombatClassFromDataTable(classDataTables[classIdentifier],level);

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

		FPassiveHandlerData passiveHandler = playerCompleteDataSet.Value.PassiveHandlerData;
		
		for (auto PassiveSkillData : passiveHandler.PassiveSkillsDatas)
		{
			if(PassiveSkillData.passiveSkillPlacement == EPassiveSkillSlotType::Debug)
			{
				continue;
			}
			PlayerCombatEntity->AddPassive(passiveSkillFactory->GetPassiveSkill(PassiveSkillData.passiveSkillID),PassiveSkillData.passiveSkillPlacement);			
		}

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
