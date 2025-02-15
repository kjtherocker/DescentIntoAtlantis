// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentGameinstance.h"

#include "EnemyFactorySubSystem.h"
#include "SkillFactorySubsystem.h"
#include "PartyManagerSubsystem.h"
#include "TutorialManagerSubsystem.h"
#include "DialogueManagerSubsystem.h"
#include "ChallengeSubsystem.h"
#include "KeyItemFactorySubsystem.h"
#include "LevelProgressionSubsystem.h"
#include "PassiveSkillFactorySubsystem.h"
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

	challengeManagerSubsystem       = GetSubsystem<UChallengeSubsystem>();
	partyManagerSubsystem           = GetSubsystem<UPartyManagerSubsystem>();
	skillFactorySubsystem           = GetSubsystem<USkillFactorySubsystem>();
	enemyFactorySubSystem           = GetSubsystem<UEnemyFactorySubSystem>();
	passiveFactorySubsystem         = GetSubsystem<UPassiveFactorySubsystem>();
	tutorialManagerSubsystem        = GetSubsystem<UTutorialManagerSubsystem>();
	dialogueManagerSubsystem        = GetSubsystem<UDialogueManagerSubsystem>();
	EventManagerSubSystem           = GetSubsystem<UEventManagerSubSystem>();
	saveManagerSubsystem            = GetSubsystem<USaveManagerSubsystem>();
	levelProgressionSubsystem       = GetSubsystem<ULevelProgressionSubsystem>();
	eventDispatcherSubsystem        = GetSubsystem<UEventDispatcherSubsystem>();
	popupSubsystem                  = GetSubsystem<UPopupSubsystem>();
	KeyItemFactorySubsystem         = GetSubsystem<UKeyItemFactorySubsystem>();
	
	levelProgressionSubsystem->InitializeSubsystem(this);
	
	if(dataTables.Contains(EDataTableTypes::Skills)&& dataTables.Contains(EDataTableTypes::ItemData))
	{
		skillFactorySubsystem->InitializeDatabase(dataTables[EDataTableTypes::Skills],dataTables[EDataTableTypes::ItemData]);
	}
	else
	{
		//DataTableDoesntExist
	}

	if(dataTables.Contains(EDataTableTypes::KeyItemData))
	{
		KeyItemFactorySubsystem->InitializeDatabase(dataTables[EDataTableTypes::KeyItemData]);
	}
	else
	{
		//DataTableDoesntExist
	}

	if(dataTables.Contains(EDataTableTypes::PassiveSkills) && dataTables.Contains(EDataTableTypes::CombatTokens))
	{
		passiveFactorySubsystem->InitializeDatabase(dataTables[EDataTableTypes::PassiveSkills],
			dataTables[EDataTableTypes::CombatTokens],dataTables[EDataTableTypes::Equipment]);
	}
	else
	{
		//DataTableDoesntExist
	}
	
	if(dataTables.Contains(EDataTableTypes::ChallengeTable))
	{
		challengeManagerSubsystem->InitializeSubsystem(dataTables[EDataTableTypes::ChallengeTable]);	
	}
	else
	{
		//DataTableDoesntExist
	}
	
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
	else
	{
		//DataTableDoesntExist
	}
	
	if(dataTables.Contains(EDataTableTypes::PlayerCharacters) &&
	dataTables.Contains(EDataTableTypes::Classes) &&
	dataTables.Contains(EDataTableTypes::PartyExperienceTable))
	{
		if(dataTables[EDataTableTypes::PlayerCharacters] != nullptr)
		{
			partyManagerSubsystem->InitializeDataTable(dataTables[EDataTableTypes::PlayerCharacters], dataTables[EDataTableTypes::Classes],
				dataTables[EDataTableTypes::PartyExperienceTable],dataTables[EDataTableTypes::TestCombat]);
		}
	}
	else
	{
		//DataTableDoesntExist
	}

	if(dataTables.Contains(EDataTableTypes::Tutorial))
	{
		if(dataTables[EDataTableTypes::Tutorial] != nullptr)
		{
			tutorialManagerSubsystem->InitializeDatabase(dataTables[EDataTableTypes::Tutorial]);
		}
	}
	else
	{
		//DataTableDoesntExist
	}


	if(dataTables.Contains(EDataTableTypes::Dialogue))
	{
		if(dataTables[EDataTableTypes::Dialogue] != nullptr)
		{
			dialogueManagerSubsystem->InitializeDatabase(dataTables[EDataTableTypes::Dialogue],dataTables[EDataTableTypes::DialogueActor]);
		}
	}
	else
	{
		//DataTableDoesntExist
	}

	if(dataTables.Contains(EDataTableTypes::Floor)
	&& dataTables.Contains(EDataTableTypes::FloorEvent))
	{
		if(dataTables[EDataTableTypes::Floor] != nullptr
			&&dataTables[EDataTableTypes::FloorEvent] != nullptr)
		{
			floorFactory = NewObject<UFloorFactory>();
			floorFactory->InitializeDatabase(
				dataTables[EDataTableTypes::Floor],
			dataTables[EDataTableTypes::FloorEvent],
				dataTables[EDataTableTypes::AllFloorNodeTileSet]);
			
			EventManagerSubSystem->InitializeEventManager(floorFactory,this);
		}
	}
	else
	{
		//DataTableDoesntExist
	}
	
	eventDispatcherSubsystem->InitializeEventDispatcherSubsystem(challengeManagerSubsystem);
	saveManagerSubsystem->InitializeSubsystem(this);


	//persistentGameHud = (AInGameHUD*)GetWorld()->GetFirstPlayerController()->GetHUD();

	//USceneComponent* ParentRootComponent = this->GetRootComponent();
//
	//floorNode->AttachToComponent(ParentRootComponent,FAttachmentTransformRules::KeepRelativeTransform);
	LevelMap.Add(EFloorIdentifier::PrizonZ_Floor1,"PrisonZ_Floor1");
	LevelMap.Add(EFloorIdentifier::PrisonZ_Floor2,"PrisonZ_Floor2");
	LevelMap.Add(EFloorIdentifier::PrisonZ_Floor3,"PrisonZ_Floor3");
	LevelMap.Add(EFloorIdentifier::PrisonZ_Annex,"PrisonZ_Annex");
	LevelMap.Add(EFloorIdentifier::PrisonZ_Combat,"PrisonCombat");
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
	//if(currentLevelName != aFloorIdentifier)
	{
		levelProgressionSubsystem->SetCurrentFloorIdentifier(aFloorIdentifier);
		levelHasChanged.Broadcast(aFloorIdentifier);
		saveManagerSubsystem->AutoSave();
		UGameplayStatics::OpenLevel(GetWorld(), FName(*LevelName), true);
	}
	//else
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
	LoadLevel(EFloorIdentifier::PrisonZ_Combat);
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

void UPersistentGameinstance::CallTransition()
{
	TSubclassOf<UUserWidget> transitionView = currentGameMode->InGameHUD->GetUserWidget(EViews::TransitionView);
	UBaseUserWidget* newView = CreateWidget<UBaseUserWidget>(GetWorld(),transitionView);
	if(newView)
	{
		newView->UiInitialize(currentGameMode);
		newView->AddToViewport();
		//newView->viewName = aView;
	}
}


