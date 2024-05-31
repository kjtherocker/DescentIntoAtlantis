// Fill out your copyright notice in the Description page of Project Settings.


#include "StateTask_Patrol.h"

#include "FloorPawn.h"
#include "Floor_EnemyPawn.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorManager.h"
#include "DesentIntoAtlantis/FloorNode.h"



EStateTreeRunStatus UStateTask_Patrol::EnterState(FStateTreeExecutionContext& Context,
	const FStateTreeTransitionResult& Transition)
{


	enemyFloorPawn = static_cast<AFloor_EnemyPawn*>(GetOwnerActor(Context));

	if(enemyFloorPawn->hasBeenInitialized)
	{
		enemyFloorPawn->activateEnemyBehavior.AddDynamic(this, &UStateTask_Patrol::ActivateBehavior);
		floorManager        = enemyFloorPawn->gameModeBase->floorManager;
		CalculateDistance();
	}
	
	return Super::EnterState(Context, Transition);
}

ECardinalNodeDirections UStateTask_Patrol::CalculateDirection(const FVector2D& CurrentPosition,
                                                              const FVector2D& TargetPosition)
{
	FVector2D Difference = TargetPosition - CurrentPosition;

	if (FMath::Abs(Difference.X) > 0 && FMath::Abs(Difference.Y) == 0)
	{
		if (Difference.X > 0)
		{
			return ECardinalNodeDirections::Right;
		}
		else
		{
			return ECardinalNodeDirections::Left;
		}
	}
	else if (FMath::Abs(Difference.Y) > 0 && FMath::Abs(Difference.X) == 0)
	{
		if (Difference.Y > 0)
		{
			return ECardinalNodeDirections::Up;
		}
		else
		{
			return ECardinalNodeDirections::Down;
		}
	}

	return ECardinalNodeDirections::Empty;
}

void UStateTask_Patrol::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	FVector2D currentPositionInGrid = patrolRoute[currentPathIndex].positionInGrid;
	
	if(aPlayerCompleteFloorData.currentNodePositionInGrid == currentPositionInGrid)
	{
		enemyFloorPawn->ActivateCombat();
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
	
	FVector2D currentPosition = enemyFloorPawn->GetCurrentNode()->floorNodeData.positionInGrid;
	FVector2D newPosition     = patrolRoute[currentPathIndex].positionInGrid;
	ECardinalNodeDirections facingDirection = CalculateDirection(currentPosition,newPosition);
	if(facingDirection != ECardinalNodeDirections::Empty)
	{
		enemyFloorPawn->SetRotationWithoutAnimation(facingDirection);
	}
	
	enemyFloorPawn->SetNodeToMoveTowards(floorManager->GetNode(newPosition));

	if(aPlayerCompleteFloorData.currentNodePositionInGrid == newPosition)
	{
		enemyFloorPawn->ActivateCombat();
	}
}

void UStateTask_Patrol::CalculateDistance()
{
		floorPlan.Empty();
	floorPlan = floorManager->GetCopyOfFloorNodeAIData();
	FVector2D GoalPosition             = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;
	FVector2D startPosition            = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	
	FFloorNodeAiData goalFloorNode          = floorPlan[floorManager->GetNodeIndex(GoalPosition)];
	FFloorNodeAiData startFloorNode         = floorPlan[floorManager->GetNodeIndex(startPosition)];
	FVector2d pawnPosition                  = startFloorNode.positionInGrid;

	FFloorNodeAiData startNodeData;

	TArray<FFloorNodeAiData> nodesToTravel;

	goalFloorNode.heuristic         = 0;
	goalFloorNode.hasBeenCalculated = true;
	nodesToTravel.Add(goalFloorNode);
	floorPlan[floorManager->GetNodeIndex(GoalPosition)] = goalFloorNode;
	
	while(nodesToTravel.Num() > 0)
	{
		FFloorNodeAiData currentNodeData = nodesToTravel[0];
		nodesToTravel.RemoveAt(0);
		
		if(currentNodeData.positionInGrid == pawnPosition)
		{
			break;
		}

		for (TTuple<ECardinalNodeDirections,  FFloorNodeAiData> NodesToTravel : currentNodeData.neightborsFloorData)
		{
			FFloorNodeAiData aiNode = floorPlan[floorManager->GetNodeIndex(NodesToTravel.Value.positionInGrid)];
			if(!aiNode.hasBeenCalculated)
			{
				aiNode.heuristic    = currentNodeData.heuristic +1;
				aiNode.hasBeenCalculated = true;
				nodesToTravel.Add(aiNode);
				floorPlan[floorManager->GetNodeIndex(NodesToTravel.Value.positionInGrid)] = aiNode;
			}
		}
	}

	FFloorNodeAiData currentFloorNode  = floorPlan[floorManager->GetNodeIndex(pawnPosition)];
	
	int currentHeuristic = currentFloorNode.heuristic;
	patrolRoute.Add(currentFloorNode);
	
	while(currentFloorNode.heuristic != -1)
	{
		FFloorNodeAiData aiNode = floorPlan[floorManager->GetNodeIndex(currentFloorNode.positionInGrid)];

		TMap<ECardinalNodeDirections, FFloorNodeData> nodeNeighbors = aiNode.neightborsFloorData;

		if(currentHeuristic == 0)
		{
			break;
		}
		
		FFloorNodeAiData floorNodePath;
		
		for (TTuple<ECardinalNodeDirections, FFloorNodeAiData> node : nodeNeighbors)
		{
			FFloorNodeAiData floorNodeData = floorPlan[floorManager->GetNodeIndex(node.Value.positionInGrid)];;
			if(floorNodeData.heuristic < currentHeuristic
				&& floorNodeData.heuristic != -1)
			{
				floorNodePath = floorNodeData;
			}
		}

		if(floorNodePath.heuristic == -1)
		{
			break;
		}
		
		patrolRoute.Add(floorNodePath);
		currentHeuristic = floorNodePath.heuristic;
		currentFloorNode = floorNodePath;
	}

	enemyFloorPawn->patrolPath = patrolRoute;
}
