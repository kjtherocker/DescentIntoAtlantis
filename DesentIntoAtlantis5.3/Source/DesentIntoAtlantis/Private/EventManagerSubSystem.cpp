// Fill out your copyright notice in the Description page of Project Settings.


#include "EventManagerSubSystem.h"

#include "CombatGameModeBase.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FloorFactory.h"
#include "LevelupView.h"
#include "PersistentGameinstance.h"
#include "TutorialView.h"


void UEventManagerSubSystem::InitializeEventManager(UFloorFactory * aFloorFactory)
{
	floorFactory = aFloorFactory;
	EventHasBeenTriggered.AddDynamic(this, &UEventManagerSubSystem::PlayerHasTriggeredFloorEvent);
	triggerNextEventStage.AddDynamic(this, &UEventManagerSubSystem::TriggerNextFloorEventStep);

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
				UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
				persistentGameInstance->LoadCombatLevel(currentEvent.enemyGroupName,ECombatArena::Prison);
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
			//if(currentEvent.partyMemberGainedOnEnd != EPartyMembers::None )
			//{
			//	gameModeBase->partyManager->AddPlayerToActiveParty(currentEvent.partyMemberGainedOnEnd);
			//}
			//completedFloorEventData.Add(currentEvent);
			//gameModeBase->floorManager->GetNode(currentEvent.positionInGrid)->hasFloorEvent = false;
			//floorEnemyEvents[currentEvent.positionInGrid]->DeleteEnemyPawn();
			//isEventRunning = false;
			//if(currentEvent.viewPushedOnEnd == EViews::None)
			//{
			//	gameModeBase->floorPawn->SetFloorPawnInput(true);
			//}
			//else
			//{
			//	gameModeBase->InGameHUD->PushAndGetView(currentEvent.viewPushedOnEnd ,EUiType::ActiveUi);
			//}
			break;
		}
	default:
		{
			break;
		}
	}
}

void UEventManagerSubSystem::TriggerDialogue(EDialogueTriggers aDialogueTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(UGameSettings::DISABLE_CUTSCENES)
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
		return;
	}
	
	if(aDialogueTrigger != EDialogueTriggers::None)
	{
		UDialogueView * dialogueView = (UDialogueView*)gameMode->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
		dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
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
		tutorialView->SetupTutorialView(gameMode->tutorialManager->tutorialMap[aTutorialTrigger]);
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
}

void UEventManagerSubSystem::EventNotCompleted()
{
	floorEnemyEvents[currentEvent.positionInGrid]->SetActorHiddenInGame(false);
	gameMode->floorPawn->EnableInput(gameMode->world->GetFirstPlayerController());
}

void UEventManagerSubSystem::AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEnemyPawn* aFloorEnemyPawn)
{
	floorEnemyEvents.Add(aPositionInGrid,aFloorEnemyPawn);
}




