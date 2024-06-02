// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeTaskTest.h"
#include "FloorEnum.h"
#include "FloorPawn.h"
#include "StateTree.h"
#include "Floor_EnemyPawn.generated.h"

class UFloorBehaviorTree;
class AFloorPlayerPawn;
struct FEnemyPatrolPath;
struct FFloorNodeData;

/**
 * 
 */



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivateEnemyBehavior,FCompleteFloorPawnData,floorData);
UCLASS()
class DESENTINTOATLANTIS_API AFloor_EnemyPawn : public AFloorPawn
{
	GENERATED_BODY()

private:

	int currentFloorIndex;
public:
	UPROPERTY(EditAnywhere)
	bool hasBeenInitialized = false;
	UPROPERTY(EditAnywhere)
	FVector CameraForward ;
	FVector PawnForward;
	UPROPERTY()
	UMaterialInstanceDynamic* materialInstanceDynamic;
	FActivateEnemyBehavior activateEnemyBehavior;
	UPROPERTY()
	UMeshComponent* meshComponent;
	virtual void SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection) override;
	UPROPERTY(EditAnywhere)
	UFloorBehaviorTree* floorBehaviorTree;

	TArray<FFloorNodeAiData> patrolPath;


	
	TArray<FFloorNodeAiData> floorPlan;	
	FFloorEnemyPawnCompleteData enemyPawnCompleteData;

	virtual void Initialize() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SubscribeToActivateEnemyBehavior(AFloorPlayerPawn* aFloorPlayerPawn);
	virtual void OnNewNodeReached() override;
	virtual void SetEnemyFloorPlan(TArray<FFloorNodeAiData> aFloorPlan);
	virtual void SetEnemyPawnCompleteData(FFloorEnemyPawnCompleteData aEnemyPawnCompleteData);
	virtual void ActivateEncountered();
	UFUNCTION()
	virtual void TransitionToCombat();
	virtual void SetEnemyTexture(ECardinalNodeDirections aCardinalNodeDirection);
	//void SetCurrentBehaviorTask(UFloorBehaviors* aFloorBehavior);
	UFUNCTION()
	void ActivateEnemysFloorBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData);

	UPROPERTY(EditAnywhere)
	TMap<ECardinalNodeDirections, UTexture2D*> floorEnemyTextures;
	
	UPROPERTY(EditAnywhere)
	int Testooo = 0;
};
