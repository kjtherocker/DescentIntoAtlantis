// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorEventManager.h"

#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "FloorFactory.h"


void UFloorEventManager::Initialize(ADesentIntoAtlantisGameModeBase* aGameBase ,UFloorFactory * aFloorFactory,UCombatManager* aCombatManager)
{
	gameBase      = aGameBase;
	floorFactory  = aFloorFactory;
	combatManager = aCombatManager;
	EventHasBeenTriggered.AddDynamic(this, &UFloorEventManager::PlayerHasTriggeredFloorEvent);
	triggerNextEventStage.AddDynamic(this, &UFloorEventManager::TriggerNextFloorEventStep);
}

void UFloorEventManager::PlayerHasTriggeredFloorEvent(FVector2D aPositionInGrid)
{
	 currentEvent = floorFactory->floorDictionary[EFloorIdentifier::Floor1]->floorEventData[aPositionInGrid];
	TriggerNextFloorEventStep(EFloorEventStates::DialogueOnStart);
}

void UFloorEventManager::TriggerDialogue(EDialogueTriggers aDialogueTrigger, EFloorEventStates aTriggerOnEnd)
{
	if(aDialogueTrigger != EDialogueTriggers::None)
	{
		UDialogueView * dialogueView = (UDialogueView*)gameBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
		dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
	}
	else
	{
		TriggerNextFloorEventStep(aTriggerOnEnd);
	}
}



void UFloorEventManager::TriggerNextFloorEventStep(EFloorEventStates aFloorEventStates)
{

	switch (aFloorEventStates)
	{
	case EFloorEventStates::DialogueOnStart:
		{
			TriggerDialogue(currentEvent.dialogueTriggerOnStart,EFloorEventStates::TutorialOnStart );
			break;
		}
	case EFloorEventStates::TutorialOnStart:
		{
			TriggerNextFloorEventStep(EFloorEventStates::Combat );
			break;
		}
	case EFloorEventStates::Combat:
		{
			combatManager->StartCombat(currentEvent.enemyGroupName );
			break;
		}
	case EFloorEventStates::DialogueOnEnd: 
		{
			TriggerDialogue(currentEvent.dialogueTriggerOnEnd, EFloorEventStates::TutorialOnEnd);
			break;
		}
	case EFloorEventStates::TutorialOnEnd: 
		{
			TriggerNextFloorEventStep(EFloorEventStates::Completed );
			break;
		}
	case EFloorEventStates::Completed: 
		{
			completedFloorEventData.Add(currentEvent);
			break;
		}
	default:
		{
			break;
		}
	}
}




