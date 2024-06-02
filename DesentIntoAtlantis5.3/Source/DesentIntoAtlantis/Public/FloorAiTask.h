// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "UObject/NoExportTypes.h"
#include "FloorAiTask.generated.h"

class UFloorBehaviorTree;
class AFloorManager;
struct FFloorNodeAiData;
class AFloor_EnemyPawn;
struct FCompleteFloorPawnData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UFloorAiTask : public UObject
{
	GENERATED_BODY()


public:
	virtual void Initialize(AFloor_EnemyPawn* aEnemyPawn, UFloorBehaviorTree* aFloorBehaviorTree);
	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData);
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);
	virtual void CalculateDistance(FVector2D aStartPosition, FVector2D aEndPosition, AFloorManager* aFloorManager);
	virtual ECardinalNodeDirections CalculateDirection(const FVector2D& CurrentPosition, const FVector2D& TargetPosition);

	UPROPERTY()
	UFloorBehaviorTree* floorBehaviorTree;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloor_EnemyPawn* enemyFloorPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData>  floorPlan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFloorNodeAiData> patrolRoute;
};
