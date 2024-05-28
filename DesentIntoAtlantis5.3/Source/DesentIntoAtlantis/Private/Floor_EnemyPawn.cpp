// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor_EnemyPawn.h"

#include "AIController.h"
#include "BehaviorTreeTaskTest.h"
#include "FloorPlayerPawn.h"
#include "PersistentGameinstance.h"

void AFloor_EnemyPawn::Initialize()
{
	Super::Initialize();
	movementSpeed = 1000;
	positionOffSet = FVector(0,0,0);
}

void AFloor_EnemyPawn::SubscribeToActivateEnemyBehavior(AFloorPlayerPawn* aFloorPlayerPawn)
{
	aFloorPlayerPawn->playerhasMovedDelegate.AddDynamic(this,&AFloor_EnemyPawn::ActivateEnemysFloorBehavior);
}

void AFloor_EnemyPawn::SetEnemyFloorPlan(TArray<FFloorNodeData> aFloorPlan)
{
	floorPlan = aFloorPlan;
}

void AFloor_EnemyPawn::SetEnemyPawnCompleteData(FFloorEnemyPawnCompleteData aEnemyPawnCompleteData)
{
	enemyPawnCompleteData = aEnemyPawnCompleteData;
}

void AFloor_EnemyPawn::ActivateCombat()
{
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	persistentGameInstance->LoadCombatLevel(enemyPawnCompleteData.EnemyGroupName,ECombatArena::Prison);
}

void AFloor_EnemyPawn::SetCurrentBehaviorTask(UBehaviorTreeTaskTest* aBehaviorTreeTask)
{
	behaviorTreeTaskTest = aBehaviorTreeTask;
}


void AFloor_EnemyPawn::ActivateEnemysFloorBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	activateEnemyBehavior.Broadcast();
}
