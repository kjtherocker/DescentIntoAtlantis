// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnemyPawn.h"
#include "DesentIntoAtlantis/FloorBase.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "EventManagerSubSystem.generated.h"

class ACombatGameModeBase;
class UPlayerCombatEntity;
class UFloorFactory;




/**
 */
UCLASS()
class DESENTINTOATLANTIS_API UEventManagerSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	bool isEventRunning;
	
	
	UFloorFactory* floorFactory;
	EFloorEventStates currentFloorEventStates;

	FFloorEventData currentEvent;

	UPROPERTY()
	TArray<FFloorEventData> completedFloorEventData;

	UPROPERTY()
	TMap<FVector2D , AFloorEnemyPawn*> floorEnemyEvents;
	
	FTriggerNextEventStage triggerNextEventStage;

	UPROPERTY()
	EFloorIdentifier currentFloor;

	UPROPERTY()
	AAtlantisGameModeBase* gameMode;
	
public:

	FFloorEventHasBeenTriggered EventHasBeenTriggered;

	void Initialize(UFloorFactory * aFloorFactory);

	void SetFloor(EFloorIdentifier aFloorIdentifier);
	void SetCombatGameMode(ACombatGameModeBase* aCombatGameMode);
	void SetDefaultGameMode(AAtlantisGameModeBase* aGameMode);
	UFUNCTION()
	void PlayerHasTriggeredFloorEvent(FVector2D aEventPosition);
	void TriggerDialogue(EDialogueTriggers aDialogueTrigger,EFloorEventStates aTriggerOnEnd);
	void TriggerTutorial(ETutorialTriggers aTutorialTrigger,EFloorEventStates aTriggerOnEnd);
	void TriggerPostCombatLevelSwap();
	void TriggerLevelupMenu(EFloorEventStates aTriggerOnEnd,TArray<UPlayerCombatEntity*> aPlayerCombatEntity, int aExperience);
	UFUNCTION()
	void TriggerNextFloorEventStep(EFloorEventStates aFloorEventStates);

	void EventNotCompleted();

	void AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEnemyPawn* aFloorEnemyPawn);
};
