// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEventMarker.h"
#include "DesentIntoAtlantis/FloorBase.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "EventManagerSubSystem.generated.h"

class UTutorialManagerSubsystem;
class UPersistentGameinstance;
class ACombatGameModeBase;
class UPlayerCombatEntity;
class UFloorFactory;

USTRUCT()
struct DESENTINTOATLANTIS_API FEventManagerData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	TArray<FFloorEventData> completedFloorEventData;
	
};


/**
 */
UCLASS()
class DESENTINTOATLANTIS_API UEventManagerSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	bool isEventRunning;
	
	UTutorialManagerSubsystem* tutorialManager;
	UFloorFactory* floorFactory;
	EFloorEventTypes currentFloorEventStates;

	FFloorEventData currentEvent;

	FEventManagerData eventManagerData;

	UPROPERTY()
	FFloorEventStageInfo currentFloorEventStage;
	UPROPERTY()
	TArray<FFloorEventData> completedFloorEventData;

	UPROPERTY()
	TMap<FVector2D , AFloorEventMarker*> floorEnemyEvents;
	
	FTriggerNextEventStage triggerNextEventStage;

	UPROPERTY()
	EFloorID currentFloor;

	UPROPERTY()
	AAtlantisGameModeBase* gameMode;

	UPROPERTY()
	AFloorGameMode* floorGameMode;
	UPROPERTY()
	UPersistentGameinstance* persistentGameInstance;
	
public:

	FNodeHasBeenWalkedOn EventHasBeenTriggered;
	void LoadSavedFloorEventData(FEventManagerData aEventManagerData );
	void InitializeEventManager(UFloorFactory * aFloorFactory, UPersistentGameinstance* aPersistentGameInstance);
	bool isEventCompleted(FVector2D aEventPosition);

	void SetFloor(EFloorID aFloorIdentifier);
	void SetCombatGameMode(ACombatGameModeBase* aCombatGameMode);
	void SetDefaultGameMode(AAtlantisGameModeBase* aGameMode);
	UFUNCTION()
	void PlayerHasTriggeredFloorEvent(FVector2D aEventPosition);
	void TriggerDialogue(EDialogueTriggers aDialogueTrigger);
	void TriggerTutorial(ETutorialTriggers aTutorialTrigger);
	void TriggerPostCombatLevelSwap();
	UFUNCTION()
	void PopupClosed();
	void CompleteEvent();
	UFUNCTION()
	void TriggerNextEventStage();
	UFUNCTION()
	void ActivateCombat();
	UFUNCTION()
	void OnDialogueEnd();
	void OnReturnedToFloor();

	FTeleportData GetCombatTeleportationData();
	
	void EventRewardItems(FFloorEventStageInfo floorEventInfo);
	void EventTeleport(FFloorEventStageInfo floorEventInfo);
	void EventAddPartyMember(FFloorEventStageInfo floorEventInfo);
	void EventRemovePartyMemberPermanently(FFloorEventStageInfo floorEventInfo);
	void EventNotCompleted();

	void AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEventMarker* aFloorEnemyPawn);
};
