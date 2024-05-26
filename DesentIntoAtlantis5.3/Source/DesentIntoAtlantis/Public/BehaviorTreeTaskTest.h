// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorPawn.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTreeTaskTest.generated.h"

class AFloor_EnemyPawn;
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
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocation;
	
};
