// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "StateTask_Patrol.generated.h"

struct FCompleteFloorPawnData;
class AFloorManager;
struct FFloorNodeAiData;
class AFloor_EnemyPawn;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UStateTask_Patrol : public UStateTreeTaskBlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawn* AIPawn;
	
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
	
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;

public:

	
	ECardinalNodeDirections CalculateDirection(const FVector2D& CurrentPosition, const FVector2D& TargetPosition);
	UFUNCTION()
	void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);

	void CalculateDistance();

	
};
