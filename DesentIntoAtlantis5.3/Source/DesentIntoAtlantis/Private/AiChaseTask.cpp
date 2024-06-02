// Fill out your copyright notice in the Description page of Project Settings.


#include "AiChaseTask.h"

#include "FloorPawn.h"
#include "Floor_EnemyPawn.h"
#include "DesentIntoAtlantis/FloorGameMode.h"

void UAiChaseTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ExecuteTask(aPlayerCompleteFloorData);
	
	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	ActivateBehavior(aPlayerCompleteFloorData);
}

bool UAiChaseTask::CanEnemyReachPlayer(FCompleteFloorPawnData aPlayerCompleteFloorData,AFloorManager* aFloorManager)
{
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
	FVector2D endPosition   = aPlayerCompleteFloorData.currentNodePositionInGrid;
	
	CalculateDistance(startPosition,endPosition,aFloorManager);

	if(patrolRoute[patrolRoute.Num() -1].positionInGrid == endPosition)
	{
		return true;
	}

	return false;
}

void UAiChaseTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ActivateBehavior(aPlayerCompleteFloorData);
	AFloor_EnemyPawn* enemyPawn = enemyFloorPawn;
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
	FVector2D endPosition   = aPlayerCompleteFloorData.currentNodePositionInGrid;
	
	CalculateDistance(startPosition,endPosition,floorManager);

	if(patrolRoute.Num() == 0)
	{
		//Something horrible happens
		return;
	}
	
	if(aPlayerCompleteFloorData.currentNodePositionInGrid == startPosition)
	{
		enemyPawn->ActivateEncountered();
	}
	
	FVector2D currentPosition  = enemyPawn->GetCurrentNode()->floorNodeData.positionInGrid;
	FVector2D newPosition      = patrolRoute[1].positionInGrid;
	FVector2D rotationPosition = newPosition;
	if(patrolRoute.Num() >2)
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
		enemyPawn->ActivateEncountered();
	}
}
