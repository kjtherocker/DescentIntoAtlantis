// Fill out your copyright notice in the Description page of Project Settings.


#include "AiPatrolTask.h"

#include "Floor_EnemyPawn.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorNode.h"

void UAiPatrolTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{

	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	FVector2D endPosition   = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;

	CalculateDistance(startPosition, endPosition, floorManager);
	ActivateBehavior(aPlayerCompleteFloorData);
}

void UAiPatrolTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	AFloor_EnemyPawn* enemyPawn = enemyFloorPawn;
	FVector2D currentPositionInGrid = patrolRoute[currentPathIndex].positionInGrid;
	
	if(aPlayerCompleteFloorData.currentNodePositionInGrid == currentPositionInGrid)
	{
		enemyPawn->ActivateCombat();
	}
	
	currentPathIndex += isAscendingPath ? -1 : +1;
	
	if(currentPathIndex >= patrolRoute.Num() - 1)
	{
		isAscendingPath = true;
		currentPathIndex = patrolRoute.Num() - 1;
	}
	else if(currentPathIndex <= 0)
	{
		isAscendingPath = false;
		currentPathIndex = 0;
	}
	
	FVector2D currentPosition = enemyPawn->GetCurrentNode()->floorNodeData.positionInGrid;
	FVector2D newPosition     = patrolRoute[currentPathIndex].positionInGrid;
	ECardinalNodeDirections facingDirection = CalculateDirection(currentPosition,newPosition);
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