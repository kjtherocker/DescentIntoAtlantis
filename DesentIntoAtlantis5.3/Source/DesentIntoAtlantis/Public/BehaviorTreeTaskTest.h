// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BehaviorTree/BTTaskNode.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "BehaviorTreeTaskTest.generated.h"

struct FFloorNodeAiData;
class AFloorManager;
struct FCompleteFloorPawnData;
class AFloor_EnemyPawn;
class AFloorNode;
struct FFloorNodeData;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBehaviorTreeTaskTest : public UBTTaskNode
{
	GENERATED_BODY()
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};


UCLASS()
class DESENTINTOATLANTIS_API UFloorBehaviors : public UObject
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData);
	virtual void Initialize(AFloor_EnemyPawn* aEnemyPawn);
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloor_EnemyPawn* enemyFloorPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData>  floorPlan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData> patrolRoute;
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);
	virtual void CalculateDistance(FVector2D aStartPosition, FVector2D aEndPosition, AFloorManager* aFloorManager);
	virtual ECardinalNodeDirections CalculateDirection(const FVector2D& CurrentPosition, const FVector2D& TargetPosition);
};

UCLASS()
class DESENTINTOATLANTIS_API UPatrolTask : public UFloorBehaviors
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;
	virtual void Initialize(AFloor_EnemyPawn* aEnemyPawn) override;
public:
	
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentPathIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAscendingPath;
};

UCLASS()
class DESENTINTOATLANTIS_API UChasePlayerTask : public UFloorBehaviors
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;
public:

	virtual bool CanEnemyReachPlayer(FCompleteFloorPawnData aPlayerCompleteFloorData,AFloorManager* aFloorManager);
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
};

UCLASS()
class DESENTINTOATLANTIS_API UReturnToPatrolPoint: public UFloorBehaviors
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;
public:
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentPathIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAscendingPath;
};



UENUM()
enum class EBehaviorTaskTypes
{
	None                = 0,
	Patrol              = 1,
	ChasePlayer         = 2,
	ReturnToPatrolStart = 3,
};

UCLASS()
class DESENTINTOATLANTIS_API UFloorBehaviorTree : public UObject
{
	GENERATED_BODY()

public:
	virtual void InitializeBehaviorTree(AFloor_EnemyPawn* aFloorEnemyPawn);
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
	TMap<EBehaviorTaskTypes,UFloorBehaviors*> floorBehaviors;

	UPROPERTY()
	AFloorManager* floorManager; 
	
	UPROPERTY()
	bool isAlerted = false;
	virtual bool CheckIfPlayerIsInRange(FCompleteFloorPawnData completeFloorPawnData,AFloorManager* aFloorManager);
	virtual void InitializeTask(EBehaviorTaskTypes aTaskType,UFloorBehaviors* aFloorBehaviors,AFloor_EnemyPawn*aFloorEnemyPawn );
	UFUNCTION()
	virtual void BehaviorLogicController(FCompleteFloorPawnData aCompleteFloorPawnData);
	virtual void SetNewTask(EBehaviorTaskTypes aTaskTypes,FCompleteFloorPawnData aCompleteFloorPawnData);
};
