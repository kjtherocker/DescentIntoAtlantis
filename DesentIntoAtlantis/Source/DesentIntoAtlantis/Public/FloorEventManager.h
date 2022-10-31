// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatManager.h"
#include "FloorEnemyPawn.h"
#include "DesentIntoAtlantis/FloorBase.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "FloorEventManager.generated.h"

class UFloorFactory;




/**
 */
UCLASS()
class DESENTINTOATLANTIS_API UFloorEventManager : public UObject
{
	GENERATED_BODY()

	UPROPERTY()
	bool isEventRunning;
	
	UPROPERTY()
	UFloorFactory * floorFactory;
	
	EFloorEventStates currentFloorEventStates;

	FFloorEventData currentEvent;
	
	UPROPERTY()
	UCombatManager* combatManager;

	UPROPERTY()
	TArray<FFloorEventData> completedFloorEventData;

	UPROPERTY()
	TMap<FVector2D , AFloorEnemyPawn*> floorEnemyEvents;
	
	FTriggerNextEventStage triggerNextEventStage;

	UPROPERTY()
	ADesentIntoAtlantisGameModeBase* gameModeBase;
public:

	FFloorEventHasBeenTriggered EventHasBeenTriggered;

	void Initialize(ADesentIntoAtlantisGameModeBase* aGameBase,UFloorFactory * aFloorFactory,UCombatManager* aCombatManager);
	UFUNCTION()
	void PlayerHasTriggeredFloorEvent(FVector2D aPositionInGrid);
	void TriggerDialogue(EDialogueTriggers aDialogueTrigger,EFloorEventStates aTriggerOnEnd);
	void TriggerTutorial(ETutorialTriggers aTutorialTrigger,EFloorEventStates aTriggerOnEnd);
	void TriggerLevelupMenu(EFloorEventStates aTriggerOnEnd);
	UFUNCTION()
	void TriggerNextFloorEventStep(EFloorEventStates aFloorEventStates);

	void EventNotCompleted();

	void AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEnemyPawn* aFloorEnemyPawn);
};
