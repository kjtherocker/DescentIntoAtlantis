// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorEventManager.h"

#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FloorFactory.h"
#include "LevelupView.h"
#include "TutorialView.h"


void UFloorEventManager::Initialize(AFloorGameMode* aGameBase ,UFloorFactory * aFloorFactory,UCombatManager* aCombatManager)
{
	gameModeBase      = aGameBase;
	floorFactory  = aFloorFactory;
	combatManager = aCombatManager;
	
	EventHasBeenTriggered.AddDynamic(this, &UFloorEventManager::PlayerHasTriggeredFloorEvent);
	triggerNextEventStage.AddDynamic(this, &UFloorEventManager::TriggerNextFloorEventStep);
	gameModeBase->combatManager->triggerNextEventStage.AddDynamic(this, &UFloorEventManager::TriggerNextFloorEventStep);
}

void UFloorEventManager::SetFloor(EFloorIdentifier aFloorIdentifier)
{
	currentFloor = aFloorIdentifier;
}

void UFloorEventManager::PlayerHasTriggeredFloorEvent(FVector2D aPositionInGrid)
{
	isEventRunning = true;
	currentEvent = floorFactory->floorDictionary[currentFloor]->floorEventData[aPositionInGrid];
	TriggerNextFloorEventStep(EFloorEventStates::DialogueOnStart);
	if(floorEnemyEvents[currentEvent.positionInGrid])
	{
		floorEnemyEvents[currentEvent.positionInGrid]->SetActorHiddenInGame(true);
	}
	else
	{
		//Problem 
	}
	gameModeBase->floorPawn->SetFloorPawnInput(false);
}

void UFloorEventManager::TriggerNextFloorEventStep(EFloorEventStates aFloorEventStates)
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
				combatManager->StartCombat(currentEvent.enemyGroupName);
			}
			else
			{
				TriggerNextFloorEventStep(EFloorEventStates::DialogueOnEnd);
			}
			break;
		}
	case EFloorEventStates::Levelup:
		{
			TriggerLevelupMenu(EFloorEventStates::DialogueOnEnd);
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
			if(currentEvent.partyMemberGainedOnEnd != EDataTableClasses::None )
			{
				gameModeBase->partyManager->AddPlayerToActiveParty(currentEvent.partyMemberGainedOnEnd);
			}
			completedFloorEventData.Add(currentEvent);
			gameModeBase->floorManager->GetNode(currentEvent.positionInGrid)->hasFloorEvent = false;
			floorEnemyEvents[currentEvent.positionInGrid]->DeleteEnemyPawn();
			isEventRunning = false;
			if(currentEvent.viewPushedOnEnd == EViews::None)
			{
				gameModeBase->floorPawn->SetFloorPawnInput(true);
			}
			else
			{
				gameModeBase->InGameHUD->PushAndGetView(currentEvent.viewPushedOnEnd ,EUiType::ActiveUi);
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

void UFloorEventManager::TriggerDialogue(EDialogueTriggers aDialogueTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(UGameSettings::DISABLE_CUTSCENES)
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
		return;
	}
	
	if(aDialogueTrigger != EDialogueTriggers::None)
	{
		UDialogueView * dialogueView = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
		dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
	}
}

void UFloorEventManager::TriggerTutorial(ETutorialTriggers aTutorialTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(UGameSettings::DISABLE_TUTORIAL)
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
		return;
	}
	
	
	if(aTutorialTrigger != ETutorialTriggers::None)
	{
		UTutorialView * tutorialView = (UTutorialView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Tutorial,EUiType::ActiveUi);
		tutorialView->SetupTutorialView(gameModeBase->tutorialManager->tutorialMap[aTutorialTrigger]);
		tutorialView->SetFloorEvent(triggerNextEventStage,aTriggerOnEnd);
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
	}
//	dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
}

void UFloorEventManager::TriggerLevelupMenu(EFloorEventStates aTriggerOnEnd)
{
	TArray<UPlayerCombatEntity*> combatEntitysToLevelup;
	TArray<UPlayerCombatEntity*> partyMembersInCombat = combatManager->GetPlayersInCombat();
	for(int i = 0 ; i < partyMembersInCombat.Num();i++)
	{
		if(partyMembersInCombat[i]->baseClass->AddExperience( combatManager->GetEXP()))
		{
			combatEntitysToLevelup.Add(partyMembersInCombat[i]);
		}
	}
	
	if(combatEntitysToLevelup.Num() > 0)
	{
		ULevelupView * levelUpView = (ULevelupView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Levelup,    EUiType::ActiveUi);
		levelUpView->InitializeCombatEntitysToLevelUp(combatEntitysToLevelup,triggerNextEventStage,aTriggerOnEnd);
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);	
	}
}




void UFloorEventManager::EventNotCompleted()
{
	floorEnemyEvents[currentEvent.positionInGrid]->SetActorHiddenInGame(false);
	gameModeBase->floorPawn->EnableInput(gameModeBase->world->GetFirstPlayerController());
}

void UFloorEventManager::AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEnemyPawn* aFloorEnemyPawn)
{
	floorEnemyEvents.Add(aPositionInGrid,aFloorEnemyPawn);
}




