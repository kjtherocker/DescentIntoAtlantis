// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorTreeTaskTest.h"

#include "AIController.h"
#include "Floor_EnemyPawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorManager.h"
#include "DesentIntoAtlantis/FloorNode.h"

EBTNodeResult::Type UBehaviorTreeTaskTest::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::InProgress;
}

void UFloorBehaviors::ExecuteTask(AFloor_EnemyPawn* aEnemyPawn)
{
}

void UFloorBehaviors::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
}

void UPatrolBehavior::ExecuteTask(AFloor_EnemyPawn* aEnemyPawn)
{

	enemyFloorPawn = aEnemyPawn;
	//enemyFloorPawn->SetCurrentBehaviorTask(this);
	int testo = 0;
	enemyFloorPawn->activateEnemyBehavior.AddDynamic(this, &UPatrolBehavior::ActivateBehavior);

	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	FVector2D endPosition   = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;

	CalculateDistance(startPosition, endPosition, floorManager);
}

ECardinalNodeDirections UPatrolBehavior::CalculateDirection(const FVector2D& CurrentPosition,
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

void UPatrolBehavior::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
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

void UPatrolBehavior::CalculateDistance(FVector2D aStartPosition, FVector2D aEndPosition, AFloorManager* aFloorManager)
{
	floorManager = aFloorManager;
	floorPlan = floorManager->GetCopyOfFloorNodeAIData();
	FVector2D GoalPosition             = aEndPosition;
	FVector2D startPosition            = aStartPosition;
	
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

}
