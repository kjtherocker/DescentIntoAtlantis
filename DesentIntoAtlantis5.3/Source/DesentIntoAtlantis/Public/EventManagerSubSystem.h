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
	EFloorEventStates currentFloorEventStates;

	FFloorEventData currentEvent;

	FEventManagerData eventManagerData;

	UPROPERTY()
	TArray<FFloorEventData> completedFloorEventData;

	UPROPERTY()
	TMap<FVector2D , AFloorEventMarker*> floorEnemyEvents;
	
	FTriggerNextEventStage triggerNextEventStage;

	UPROPERTY()
	EFloorIdentifier currentFloor;

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
	UFUNCTION()
	void ActivateCombat();
	void SetCurrentEventSet();

	void EventNotCompleted();

	void AddFloorEnemyEvents(FVector2D aPositionInGrid, AFloorEventMarker* aFloorEnemyPawn);
};
