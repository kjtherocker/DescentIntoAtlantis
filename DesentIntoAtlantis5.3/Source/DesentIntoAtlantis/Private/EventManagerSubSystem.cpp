// Fill out your copyright notice in the Description page of Project Settings.


#include "EventManagerSubSystem.h"

#include "CombatGameModeBase.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FloorFactory.h"
#include "LevelupView.h"
#include "PersistentGameinstance.h"
#include "SaveManagerSubsystem.h"
#include "TransitionView.h"
#include "TutorialView.h"


class UTransitionView;

void UEventManagerSubSystem::LoadSavedFloorEventData(FEventManagerData aEventManagerData)
{
	completedFloorEventData = aEventManagerData.completedFloorEventData;
	eventManagerData        = aEventManagerData;
}

void UEventManagerSubSystem::InitializeEventManager(UFloorFactory * aFloorFactory, UPersistentGameinstance* aPersistentGameInstance)
{
	floorFactory = aFloorFactory;
	EventHasBeenTriggered.AddDynamic(this, &UEventManagerSubSystem::PlayerHasTriggeredFloorEvent);
	triggerNextEventStage.AddDynamic(this, &UEventManagerSubSystem::TriggerNextFloorEventStep);
	persistentGameInstance = aPersistentGameInstance;
	tutorialManager = persistentGameInstance->tutorialManagerSubsystem;
}

bool UEventManagerSubSystem::isEventCompleted(FVector2D aEventPosition)
{
	UFloorBase* floorBase = floorFactory->floorDictionary[currentFloor];
	FFloorEventData checkedEvent = floorBase->floorEventData[aEventPosition];
	for ( FFloorEventData item : completedFloorEventData) 
	{
		if (item.floorIdentifier == checkedEvent.floorIdentifier
			&& item.positionInGrid == checkedEvent.positionInGrid) 
		{
			return true;
		}
	}

	return false;
}

void UEventManagerSubSystem::SetFloor(EFloorIdentifier aFloorIdentifier)
{
	currentFloor = aFloorIdentifier;
}

void UEventManagerSubSystem::SetCombatGameMode(ACombatGameModeBase* aCombatGameMode)
{
	aCombatGameMode->triggerNextEventStage.AddDynamic(this, &UEventManagerSubSystem::TriggerNextFloorEventStep);
}

void UEventManagerSubSystem::SetDefaultGameMode(AAtlantisGameModeBase* aGameMode)
{
	gameMode = aGameMode;
}


void UEventManagerSubSystem::PlayerHasTriggeredFloorEvent(FVector2D aEventPosition)
{
	isEventRunning = true;
	currentEvent = floorFactory->floorDictionary[currentFloor]->floorEventData[aEventPosition];
	TriggerNextFloorEventStep(EFloorEventStates::DialogueOnStart);
	if(floorEnemyEvents[currentEvent.positionInGrid])
	{
		floorEnemyEvents[currentEvent.positionInGrid]->SetActorHiddenInGame(true);
	}
	else
	{
		//Problem 
	}
	gameMode->floorPawn->SetFloorPawnInput(false);
}

void UEventManagerSubSystem::TriggerNextFloorEventStep(EFloorEventStates aFloorEventStates)
{
	if(!isEventRunning)
	{
		return;
	}
	
	switch (aFloorEventStates)
	{
	case EFloorEventStates::DialogueOnStart:
		{
			TriggerDialogue(currentEvent.dialogueTriggerOnStart,EFloorEventStates::TutorialOnStart );
			break;
		}
	case EFloorEventStates::TutorialOnStart:
		{
			TriggerTutorial(currentEvent.tutorialTriggerOnStart,EFloorEventStates::Combat);
			break;
		}
	case EFloorEventStates::Combat:
		{
			if(!currentEvent.enemyGroupName.IsEmpty())
			{
	
				persistentGameInstance->CallTransition();
				UTransitionView* transitionView =
					(UTransitionView* )gameMode->InGameHUD->PushAndGetView(EViews::TransitionView,EUiType::ActiveUi);
				transitionView->transitionTo.AddDynamic(this,&UEventManagerSubSystem::ActivateCombat);
				transitionView->StartEnterTransition();
			}
			else
			{
				TriggerNextFloorEventStep(EFloorEventStates::DialogueOnEnd);
			}
			break;
		}
	case EFloorEventStates::PostCombatLevelSwap:
		{
			TriggerPostCombatLevelSwap();
			break;
		}
	case EFloorEventStates::DialogueOnEnd: 
		{
			TriggerDialogue(currentEvent.dialogueTriggerOnEnd, EFloorEventStates::TutorialOnEnd);
			break;
		}
	case EFloorEventStates::TutorialOnEnd: 
		{
			TriggerTutorial(currentEvent.tutorialTriggerOnEnd,EFloorEventStates::Completed);
			break;
		}
	case EFloorEventStates::Completed: 
		{
			if(currentEvent.partyMemberGainedOnEnd != EPartyMembers::None )
			{
				persistentGameInstance->partyManagerSubsystem->AddPlayerToActiveParty(currentEvent.partyMemberGainedOnEnd);
			}
			gameMode->floorPawn->SetFloorPawnInput(true);
			isEventRunning = false;

			
			if(currentEvent.viewPushedOnEnd == EViews::None)
			{
			//	gameModeBase->floorPawn->SetFloorPawnInput(true);
			}
			else
			{
			//	gameModeBase->InGameHUD->PushAndGetView(currentEvent.viewPushedOnEnd ,EUiType::ActiveUi);
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

void UEventManagerSubSystem::ActivateCombat()
{
	persistentGameInstance->LoadCombatLevel(currentEvent.enemyGroupName,ECombatArena::Prison);
}

void UEventManagerSubSystem::SetCurrentEventSet()
{
	TriggerNextFloorEventStep(currentFloorEventStates);
	 
}

void UEventManagerSubSystem::TriggerDialogue(EDialogueTriggers aDialogueTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(UGameSettings::DISABLE_CUTSCENES)
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
		return;
	}

	gameMode->floorPawn->SetFloorPawnInput(false);
	
	if(aDialogueTrigger != EDialogueTriggers::None)
	{
		UDialogueView * dialogueView = (UDialogueView*)gameMode->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);

		dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage,gameMode->floorManager );
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
	}
}

void UEventManagerSubSystem::TriggerTutorial(ETutorialTriggers aTutorialTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(UGameSettings::DISABLE_TUTORIAL)
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
		return;
	}
	
	
	if(aTutorialTrigger != ETutorialTriggers::None)
	{
		UTutorialView * tutorialView = (UTutorialView*)gameMode->InGameHUD->PushAndGetView(EViews::Tutorial,EUiType::ActiveUi);
		tutorialView->SetupTutorialView(tutorialManager->tutorialMap[aTutorialTrigger]);
		tutorialView->SetFloorEvent(triggerNextEventStage,aTriggerOnEnd);
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
	}
//	dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
}

void UEventManagerSubSystem::TriggerPostCombatLevelSwap()
{
	//
	persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	completedFloorEventData.Add(currentEvent);
	eventManagerData.completedFloorEventData.Add(currentEvent);
	persistentGameInstance->saveManagerSubsystem->SetEventManagerData(eventManagerData);
	currentFloorEventStates = EFloorEventStates::DialogueOnEnd;
	
}

void UEventManagerSubSystem::EventNotCompleted()
{
	//floorEnemyEvents[currentEvent.positionInGrid]->SetActorHiddenInGame(false);
	//gameMode->floorPawn->EnableInput(gameMode->world->GetFirstPlayerController());
}

void UEventManagerSubSystem::AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEventMarker* aFloorEnemyPawn)
{
	floorEnemyEvents.Add(aPositionInGrid,aFloorEnemyPawn);
}




