// Fill out your copyright notice in the Description page of Project Settings.


#include "AiReturnToPatrolTask.h"

#include "FloorBehaviorTrees.h"
#include "Floor_EnemyPawn.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorNode.h"


void UAiReturnToPatrolTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ExecuteTask(aPlayerCompleteFloorData);
		
	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	ActivateBehavior(aPlayerCompleteFloorData);
}

void UAiReturnToPatrolTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ActivateBehavior(aPlayerCompleteFloorData);
	
	AFloor_EnemyPawn* enemyPawn = enemyFloorPawn;
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
	FVector2D endPosition   = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	
	CalculateDistance(startPosition,endPosition,floorManager);

	if(patrolRoute.Num() == 0 ||patrolRoute.Num() == 1)
	{
		floorBehaviorTree->floorTaskHasEnded.Broadcast(EBehaviorTaskTypes::ReturnToPatrolStart);
		//Something horrible happens
		return;
	}
	
	
	if(aPlayerCompleteFloorData.currentNodePositionInGrid == startPosition)
	{
		enemyPawn->ActivateCombat();
	}
	
	FVector2D currentPosition  = enemyPawn->GetCurrentNode()->floorNodeData.positionInGrid;
	FVector2D newPosition      = patrolRoute[1].positionInGrid;
	FVector2D rotationPosition = newPosition;
	
	if(patrolRoute.Num() > 2)
	{
		rotationPosition = patrolRoute[2].positionInGrid;
	}
	
	ECardinalNodeDirections facingDirection = CalculateDirection(currentPosition,rotationPosition);
	
	if(facingDirection != ECardinalNodeDirections::Empty)
	{
		enemyPawn->SetRotationWithoutAnimation(facingDirection);
	}
	
	enemyPawn->SetNodeToMoveTowards(enemyPawn->gameModeBase->floorManager->GetNode(newPosition));

	if(aPlayerCompleteFloorData.currentNodePositionInGrid == newPosition)
	{
		enemyPawn->ActivateCombat();
	}
}
