// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeTaskTest.h"
#include "FloorEnum.h"
#include "FloorPawn.h"
#include "Floor_EnemyPawn.generated.h"

class AFloorPlayerPawn;
struct FEnemyPatrolPath;
struct FFloorNodeData;

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActivateEnemyBehavior);
UCLASS()
class DESENTINTOATLANTIS_API AFloor_EnemyPawn : public AFloorPawn
{
	GENERATED_BODY()

private:

	int currentFloorIndex;
public:


	FActivateEnemyBehavior activateEnemyBehavior;
	
	UPROPERTY(EditAnywhere)
	UBehaviorTreeTaskTest* behaviorTreeTaskTest;
	
	TArray<FFloorNodeData> floorPlan;	
	FFloorEnemyPawnCompleteData enemyPawnCompleteData;


	virtual void Initialize() override;
	virtual void SubscribeToActivateEnemyBehavior(AFloorPlayerPawn* aFloorPlayerPawn);
	virtual void SetEnemyFloorPlan(TArray<FFloorNodeData> aFloorPlan);
	virtual void SetEnemyPawnCompleteData(FFloorEnemyPawnCompleteData aEnemyPawnCompleteData);
	virtual void ActivateCombat();
	void SetCurrentBehaviorTask(UBehaviorTreeTaskTest* aBehaviorTreeTask);
	UFUNCTION()
	void ActivateEnemysFloorBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);
	
	UPROPERTY(EditAnywhere)
	int Testooo = 0;
};
