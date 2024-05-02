// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentGameinstance.h"

#include "EnemyFactorySubSystem.h"
#include "SkillFactorySubsystem.h"
#include "PartyManagerSubsystem.h"
#include "TutorialManagerSubsystem.h"
#include "DialogueFactorySubsystem.h"
#include "LevelProgressionSubsystem.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"


UPersistentGameinstance::UPersistentGameinstance()
{
}

void UPersistentGameinstance::Init()
{
	Super::Init();

	partyManagerSubsystem     = GetSubsystem<UPartyManagerSubsystem>();
	skillFactorySubsystem     = GetSubsystem<USkillFactorySubsystem>();
	enemyFactorySubSystem     = GetSubsystem<UEnemyFactorySubSystem>();
	tutorialManagerSubsystem  = GetSubsystem<UTutorialManagerSubsystem>();
	dialogueManagerSubsystem  = GetSubsystem<UDialogueFactorySubsystem>();
	EventManagerSubSystem     = GetSubsystem<UEventManagerSubSystem>();
	saveManagerSubsystem      = GetSubsystem<USaveManagerSubsystem>();
	levelProgressionSubsystem = GetSubsystem<ULevelProgressionSubsystem>();

	skillFactorySubsystem->InitializeDatabase(dataTablesSkills);
	levelProgressionSubsystem->InitializeSubsystem(this);

	if(dataTables.Contains(EDataTableTypes::Enemys) &&
   dataTables.Contains(EDataTableTypes::EnemyGroups))
	{
		if(dataTables[EDataTableTypes::Enemys] != nullptr
			&& dataTables[EDataTableTypes::EnemyGroups] != nullptr)
		{
			enemyFactorySubSystem->InitializeDatabase(dataTables[EDataTableTypes::Enemys],
				dataTables[EDataTableTypes::EnemyGroups]);
		}
	}
	
	if(dataTables.Contains(EDataTableTypes::PlayerCharacters) &&
	dataTables.Contains(EDataTableTypes::Classes))
	{
		if(dataTables[EDataTableTypes::PlayerCharacters] != nullptr)
		{
			partyManagerSubsystem->InitializeDataTable(dataTables[EDataTableTypes::PlayerCharacters], dataTables[EDataTableTypes::Classes]);
		}
	}

	if(dataTables.Contains(EDataTableTypes::Tutorial))
	{
		if(dataTables[EDataTableTypes::Tutorial] != nullptr)
		{
			tutorialManagerSubsystem->InitializeDatabase(dataTables[EDataTableTypes::Tutorial]);
		}
	}


	if(dataTables.Contains(EDataTableTypes::Dialogue))
	{
		if(dataTables[EDataTableTypes::Dialogue] != nullptr)
		{
			dialogueManagerSubsystem->InitializeDatabase(dataTables[EDataTableTypes::Dialogue]);
		}
	}

	if(dataTables.Contains(EDataTableTypes::Floor)
	&& dataTables.Contains(EDataTableTypes::FloorEvent))
	{
		if(dataTables[EDataTableTypes::Floor] != nullptr
			&&dataTables[EDataTableTypes::FloorEvent] != nullptr)
		{
			floorFactory = NewObject<UFloorFactory>();
			floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent]);
			EventManagerSubSystem->InitializeEventManager(floorFactory,this);
		}
	}
	

	saveManagerSubsystem->InitializeSubsystem(this);


	LevelMap.Add(EFloorIdentifier::Floor1,"Prison_Floor1");
	LevelMap.Add(EFloorIdentifier::Floor2,"Prison_Floor2");
	LevelMap.Add(EFloorIdentifier::PrisonCombat,"PrisonCombat");
//
	//LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlot1"),0));
	//
	//int testo1 = 0;
}


void UPersistentGameinstance::UnloadLevel(FString aLevelName)
{
	FName LevelName = FName(*aLevelName);
	bool bShouldBlockOnUnload = true; // Set to true if you want to wait for the level to be unloaded

	FLatentActionInfo LatentInfo;
	UGameplayStatics::UnloadStreamLevel(GetWorld(), LevelName, LatentInfo, bShouldBlockOnUnload);
}

void UPersistentGameinstance::LoadLevel(EFloorIdentifier aFloorIdentifier)
{
	FString LevelName = LevelMap[aFloorIdentifier];
	if(currentLevelName != aFloorIdentifier)
	{
		levelProgressionSubsystem->SetCurrentFloorIdentifier(aFloorIdentifier);
		levelHasChanged.Broadcast(aFloorIdentifier);
		saveManagerSubsystem->SaveSessionData();
		UGameplayStatics::OpenLevel(GetWorld(), FName(*LevelName), true);
	}
	else
	{
		//We are calling the same scene multiple times
	}
	previousLevelName = currentLevelName;
	currentLevelName  = aFloorIdentifier;
	
}

void UPersistentGameinstance::LoadPreviousLevel()
{
	hasRecentlyFinishedCombat = true;
	LoadLevel(previousLevelName);
}

void UPersistentGameinstance::ReturnToPreviousLevel()
{
}

void UPersistentGameinstance::LoadPreSetLevel()
{
	LoadLevel(preSetLevelName);
}


void UPersistentGameinstance::LoadCombatLevel(FString aEnemyGroupName, ECombatArena aCombatArena)
{
	aCombatArenaData.enemyGroupName = aEnemyGroupName;
	LoadLevel(EFloorIdentifier::PrisonCombat);
}




FCombatArenaData UPersistentGameinstance::ConsumeArenaDataFlag()
{
	return aCombatArenaData;
}

bool UPersistentGameinstance::ConsumeCombatFinishedFlag()
{
	bool bIsLoading = hasRecentlyFinishedCombat;
	// Once checked, reset the flag
	hasRecentlyFinishedCombat = false;
	return bIsLoading;
}


