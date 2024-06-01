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

	virtual void ExecuteTask(AFloor_EnemyPawn* aEnemyPawn);
public:

	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);
};

UCLASS()
class DESENTINTOATLANTIS_API UPatrolBehavior : public UFloorBehaviors
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(AFloor_EnemyPawn* aEnemyPawn) override;
public:
	
	ECardinalNodeDirections CalculateDirection(const FVector2D& CurrentPosition, const FVector2D& TargetPosition);
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	void CalculateDistance(FVector2D aStartPosition,FVector2D aEndPosition,AFloorManager* floorManager);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloor_EnemyPawn* enemyFloorPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData>  floorPlan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData> patrolRoute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentPathIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAscendingPath;
};