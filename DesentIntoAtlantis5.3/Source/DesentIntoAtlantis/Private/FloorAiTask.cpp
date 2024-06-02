// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorAiTask.h"

#include "FloorPawn.h"
#include "DesentIntoAtlantis/FloorManager.h"

void UFloorAiTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
}

void UFloorAiTask::Initialize(AFloor_EnemyPawn* aEnemyPawn, UFloorBehaviorTree* aFloorBehaviorTree)
{
	enemyFloorPawn     = aEnemyPawn;
	floorBehaviorTree  = aFloorBehaviorTree;
}

void UFloorAiTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
}

void UFloorAiTask::CalculateDistance(FVector2D aStartPosition, FVector2D aEndPosition, AFloorManager* aFloorManager)
{
		patrolRoute.Empty();
	AFloorManager*	floorManagerRef = aFloorManager;
	floorPlan = floorManagerRef->GetCopyOfFloorNodeAIData();
	FVector2D GoalPosition             = aEndPosition;
	FVector2D startPosition            = aStartPosition;
	
	FFloorNodeAiData goalFloorNode          = floorPlan[floorManagerRef->GetNodeIndex(GoalPosition)];
	FFloorNodeAiData startFloorNode         = floorPlan[floorManagerRef->GetNodeIndex(startPosition)];
	FVector2d pawnPosition                  = startFloorNode.positionInGrid;

	FFloorNodeAiData startNodeData;

	TArray<FFloorNodeAiData> nodesToTravel;

	goalFloorNode.heuristic         = 0;
	goalFloorNode.hasBeenCalculated = true;
	nodesToTravel.Add(goalFloorNode);
	floorPlan[floorManagerRef->GetNodeIndex(GoalPosition)] = goalFloorNode;

	TArray<FVector2D> otherEnemyPostions = floorManagerRef->GetPositionsOfEnemysBesidesOne(enemyFloorPawn);
	
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
			FFloorNodeAiData aiNode = floorPlan[floorManagerRef->GetNodeIndex(NodesToTravel.Value.positionInGrid)];
			
			if(otherEnemyPostions.Contains(aiNode.positionInGrid))
			{
				continue;
			}

			if(currentNodeData.additionalLockedDirections.Contains(NodesToTravel.Key))
			{
				continue;
			}
			
			if(!aiNode.hasBeenCalculated)
			{
				aiNode.heuristic    = currentNodeData.heuristic +1;
				aiNode.hasBeenCalculated = true;
				nodesToTravel.Add(aiNode);
				floorPlan[floorManagerRef->GetNodeIndex(NodesToTravel.Value.positionInGrid)] = aiNode;
			}
		}
	}

	FFloorNodeAiData currentFloorNode  = floorPlan[floorManagerRef->GetNodeIndex(pawnPosition)];
	
	int currentHeuristic = currentFloorNode.heuristic;
	patrolRoute.Add(currentFloorNode);
	
	while(currentFloorNode.heuristic != -1)
	{
		FFloorNodeAiData aiNode = floorPlan[floorManagerRef->GetNodeIndex(currentFloorNode.positionInGrid)];

		TMap<ECardinalNodeDirections, FFloorNodeData> nodeNeighbors = aiNode.neightborsFloorData;

		if(currentHeuristic == 0)
		{
			break;
		}
		
		FFloorNodeAiData floorNodePath;
		
		for (TTuple<ECardinalNodeDirections, FFloorNodeAiData> node : nodeNeighbors)
		{
			FFloorNodeAiData floorNodeData = floorPlan[floorManagerRef->GetNodeIndex(node.Value.positionInGrid)];;
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

ECardinalNodeDirections UFloorAiTask::CalculateDirection(const FVector2D& CurrentPosition,
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
