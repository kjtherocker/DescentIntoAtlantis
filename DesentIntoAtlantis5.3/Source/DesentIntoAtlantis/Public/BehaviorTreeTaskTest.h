// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BehaviorTree/BTTaskNode.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "BehaviorTreeTaskTest.generated.h"

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

	UPROPERTY()
	APawn* AIPawn;
	
	UPROPERTY()
	AFloor_EnemyPawn* enemyFloorPawn;
	UPROPERTY()
	TArray<FFloorNodeData>  floorPlan;

	UPROPERTY()
	TArray<AFloorNode*> patrolRoute;

	UPROPERTY()
	int currentPathIndex = 0;
	UPROPERTY()
	bool isAscendingPath;
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:

	
	ECardinalNodeDirections CalculateDirection(const FVector2D& CurrentPosition, const FVector2D& TargetPosition);
	UFUNCTION()
	void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);

	void CalculateDistance();
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocation;
	
};