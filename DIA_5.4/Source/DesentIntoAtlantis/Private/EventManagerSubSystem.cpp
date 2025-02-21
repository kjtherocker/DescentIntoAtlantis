// Fill out your copyright notice in the Description page of Project Settings.


#include "EventManagerSubSystem.h"

#include "CombatGameModeBase.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FloorFactory.h"
#include "Inventory_Equipment.h"
#include "Inventory_KeyItems.h"
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
	triggerNextEventStage.AddDynamic(this, &UEventManagerSubSystem::TriggerNextEventStage);
	persistentGameInstance = aPersistentGameInstance;
	tutorialManager = persistentGameInstance->tutorialManagerSubsystem;
	persistentGameInstance->popupSubsystem->OnPopUpClosed.AddDynamic(this, &UEventManagerSubSystem::PopupClosed);

}

bool UEventManagerSubSystem::isEventCompleted(FVector2D aEventPosition)
{
	UFloorBase* floorBase = floorFactory->floorDictionary[currentFloor];
	FFloorEventData checkedEvent = floorBase->floorEventData[aEventPosition];

	if(checkedEvent.FloorEventID == currentEvent.FloorEventID)
	{
		return true;
	}
	
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

void UEventManagerSubSystem::SetFloor(EFloorID aFloorIdentifier)
{
	currentFloor = aFloorIdentifier;
}

void UEventManagerSubSystem::SetCombatGameMode(ACombatGameModeBase* aCombatGameMode)
{
	aCombatGameMode->triggerNextEventStage.AddDynamic(this, &UEventManagerSubSystem::TriggerNextEventStage);
}

void UEventManagerSubSystem::SetDefaultGameMode(AAtlantisGameModeBase* aGameMode)
{
	gameMode = aGameMode;
}


void UEventManagerSubSystem::PlayerHasTriggeredFloorEvent(FVector2D aEventPosition)
{
	if(! floorFactory->floorDictionary[currentFloor]->floorEventData.Contains(aEventPosition))
	{
		return;
	}

	if(isEventCompleted( aEventPosition))
	{
		return;
	}
	
	isEventRunning = true;
	currentEvent = floorFactory->floorDictionary[currentFloor]->floorEventData[aEventPosition];
	TriggerNextEventStage();
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

void UEventManagerSubSystem::PopupClosed()
{
	if(currentFloorEventStage.floorEventType == EFloorEventTypes::Reward)
	{
		TriggerNextEventStage();
	}
}

void UEventManagerSubSystem::CompleteEvent()
{
	completedFloorEventData.Add(currentEvent);
	eventManagerData.completedFloorEventData.Add(currentEvent);
	persistentGameInstance->saveManagerSubsystem->SetEventManagerData(eventManagerData);
	
	gameMode->floorPawn->SetFloorPawnInput(true);
	isEventRunning = false;
}

void UEventManagerSubSystem::TriggerNextEventStage()
{
	if(!isEventRunning)
	{
		return;
	}
	
	if(currentEvent.floorEventStageInfo.Num() == 0)
	{
		CompleteEvent();
		return;
	}
	
	currentFloorEventStage = currentEvent.floorEventStageInfo[0];
	EFloorEventTypes EventTypes = currentFloorEventStage.floorEventType;
	currentEvent.floorEventStageInfo.RemoveAt(0);
	
	switch (EventTypes)
	{
		case EFloorEventTypes::None:
			break;
		case EFloorEventTypes::Dialogue:
			{
				TriggerDialogue(currentFloorEventStage.dialogueTrigger );
				break;
			}
		case EFloorEventTypes::Tutorial:
			{
				TriggerTutorial(currentFloorEventStage.tutorialTrigger);
				break;
			}
		case EFloorEventTypes::Combat:
			{
				if(!currentFloorEventStage.enemyGroupName.IsEmpty())
				{
		
					persistentGameInstance->CallTransition();
					UTransitionView* transitionView =
						(UTransitionView* )gameMode->InGameHUD->PushAndGetView(EViews::TransitionView,EUiType::ActiveUi);
					transitionView->transitionTo.AddDynamic(this,&UEventManagerSubSystem::ActivateCombat);
					transitionView->StartEnterTransition();
				}
				else
				{
					TriggerNextEventStage();
				}
				break;
			}
		case EFloorEventTypes::Reward:
			{
				EventRewardItems(currentFloorEventStage);
				break;		
			}
		
		case EFloorEventTypes::Teleport:
			{
				EventTeleport(currentFloorEventStage);
				break;		
			}
		case EFloorEventTypes::PartyMemberJoin:
			{
				EventAddPartyMember(currentFloorEventStage);
				break;		
			}
		case EFloorEventTypes::PushView:
			break;
		case EFloorEventTypes::PartyMemberRemovedPermanently:
			EventRemovePartyMemberPermanently(currentFloorEventStage);
			break;
		default:
			{
				break;
			}
	}
}

void UEventManagerSubSystem::ActivateCombat()
{
	persistentGameInstance->LoadCombatLevel(currentFloorEventStage.enemyGroupName,currentFloorEventStage.CombatArenaID,currentFloorEventStage.CombatWinCondition);
}

void UEventManagerSubSystem::OnDialogueEnd()
{
	if(currentFloorEventStage.floorEventType == EFloorEventTypes::Dialogue)
	{
		TriggerNextEventStage();
	}
}

void UEventManagerSubSystem::OnReturnedToFloor()
{
	if(currentFloorEventStage.floorEventType == EFloorEventTypes::Combat)
	{
		TriggerNextEventStage();		
	}

	if(currentFloorEventStage.floorEventType == EFloorEventTypes::Teleport)
	{
		TriggerNextEventStage();		
	}
}

FTeleportData UEventManagerSubSystem::GetCombatTeleportationData()
{
	return currentFloorEventStage.postCombatTeleportation;
}

void UEventManagerSubSystem::EventRewardItems(FFloorEventStageInfo floorEventInfo)
{
	UPartyManagerSubsystem* PartyManagerSubsystem = persistentGameInstance->partyManagerSubsystem;
	
	UInventory_KeyItems* KeyItems = PartyManagerSubsystem->PartyInventory->GetInventoryKeyItems();
	for (auto Element : floorEventInfo.Rewards.KeyItemsIDs)
	{
		KeyItems->AddKeyItem(Element);
	}

	UInventory_Equipment* Equipment = PartyManagerSubsystem->PartyInventory->GetInventoryEquipment();
	for (auto Element : floorEventInfo.Rewards.EquipmentIds)
	{
		Equipment->AddEquipmentToInventory(Element);
	}

	UInventory_Items* items = PartyManagerSubsystem->PartyInventory->GetInventoryItems();
	for (auto Element : floorEventInfo.Rewards.ItemIds)
	{
		items->AddItem(Element);
	}


	
	//UInventory_Items* items = persistentGameInstance->partyManagerSubsystem->PartyInventory->GetInventoryItems();
	for (auto Element : floorEventInfo.Rewards.ClassIds)
	{
		PartyManagerSubsystem->UnlockClassForAll(Element);
		TriggerNextEventStage();
	}
	
	
}

void UEventManagerSubSystem::EventTeleport(FFloorEventStageInfo floorEventInfo)
{
	persistentGameInstance->TeleportPlayer(floorEventInfo.Teleport);
}

void UEventManagerSubSystem::EventAddPartyMember(FFloorEventStageInfo floorEventInfo)
{
	if(floorEventInfo.PartyMemberId != EPartyMembersID::None )
	{
		persistentGameInstance->partyManagerSubsystem->AddPlayerToActiveParty(floorEventInfo.PartyMemberId);
	}

	TriggerNextEventStage();
}

void UEventManagerSubSystem::EventRemovePartyMemberPermanently(FFloorEventStageInfo floorEventInfo)
{
	persistentGameInstance->partyManagerSubsystem->RemovePartyMemberToInaccessible(floorEventInfo.PartyMemberId);
	TriggerNextEventStage();
}

void UEventManagerSubSystem::TriggerDialogue(EDialogueTriggers aDialogueTrigger)
{
	if(UGameSettings::DISABLE_CUTSCENES)
	{
		TriggerNextEventStage();
		return;
	}

	gameMode->floorPawn->SetFloorPawnInput(false);
	gameMode->floorPawn->SetActorHiddenInGame(true);
	if(aDialogueTrigger != EDialogueTriggers::None)
	{
		UDialogueView * dialogueView = (UDialogueView*)gameMode->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
		dialogueView->SetFloorEventDialogueData(aDialogueTrigger ,triggerNextEventStage,gameMode->floorManager );
		dialogueView->onDialogueEnd.AddDynamic(this,&UEventManagerSubSystem::OnDialogueEnd);
	}
	else
	{
		TriggerNextEventStage();
	}
}

void UEventManagerSubSystem::TriggerTutorial(ETutorialTriggers aTutorialTrigger)
{
	if(UGameSettings::DISABLE_TUTORIAL)
	{
		TriggerNextEventStage();
		return;
	}
	
	
	if(aTutorialTrigger != ETutorialTriggers::None)
	{
		UTutorialView * tutorialView = (UTutorialView*)gameMode->InGameHUD->PushAndGetView(EViews::Tutorial,EUiType::ActiveUi);
		tutorialView->SetupTutorialView(tutorialManager->tutorialMap[aTutorialTrigger]);
	}
	else
	{
		TriggerNextEventStage();
	}
//	dialogueView->SetFloorEventDialogueData(aDialogueTrigger, aTriggerOnEnd ,triggerNextEventStage );
}

void UEventManagerSubSystem::TriggerPostCombatLevelSwap()
{
	
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




