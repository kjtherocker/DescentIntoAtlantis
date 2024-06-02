// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloorBehaviorTrees.generated.h"

struct FCompleteFloorPawnData;
class AFloorManager;
class UFloorAiTask;
class AFloor_EnemyPawn;
class AFloorNode;
/**
 * 
 */
UENUM()
enum class EBehaviorTaskTypes
{
	None                = 0,
	Patrol              = 1,
	ChasePlayer         = 2,
	ReturnToPatrolStart = 3,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloorTaskHasEnded,EBehaviorTaskTypes, hasBehaviorEnded);
UCLASS()
class DESENTINTOATLANTIS_API UFloorBehaviorTree : public UObject
{
	GENERATED_BODY()

public:
	virtual void InitializeBehaviorTree(AFloor_EnemyPawn* aFloorEnemyPawn);
	FFloorTaskHasEnded floorTaskHasEnded;
protected:
	UPROPERTY()
	TArray<AFloorNode*> sightCone;
	UPROPERTY()
	AFloor_EnemyPawn* controlledEnemyPawn;
	UPROPERTY()
	EBehaviorTaskTypes currentTask;
	UPROPERTY()
	EBehaviorTaskTypes previousTask;
	UPROPERTY()
	TMap<EBehaviorTaskTypes,UFloorAiTask*> floorBehaviors;

	UPROPERTY()
	AFloorManager* floorManager; 


	UPROPERTY()
	bool isAlerted = false;
	virtual bool CheckIfPlayerIsInRange(FCompleteFloorPawnData completeFloorPawnData,AFloorManager* aFloorManager);
	virtual void InitializeTask(EBehaviorTaskTypes aTaskType,UFloorAiTask* aFloorBehaviors,AFloor_EnemyPawn*aFloorEnemyPawn );
	UFUNCTION()
	virtual void OnTaskEnd(EBehaviorTaskTypes aTaskType);
	
	UFUNCTION()
	virtual void BehaviorLogicController(FCompleteFloorPawnData aCompleteFloorPawnData);
	virtual void SetNewTask(EBehaviorTaskTypes aTaskTypes,FCompleteFloorPawnData aCompleteFloorPawnData);
};