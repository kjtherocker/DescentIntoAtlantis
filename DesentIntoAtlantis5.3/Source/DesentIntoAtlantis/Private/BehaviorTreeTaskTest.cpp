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
	AAIController* MyController = OwnerComp.GetAIOwner();
//	APawn* AIPawn2 = MyController->GetPawn();
	
	AIPawn = MyController->GetPawn();
	enemyFloorPawn = static_cast<AFloor_EnemyPawn*>(AIPawn);
	enemyFloorPawn->SetCurrentBehaviorTask(this);
	int testo = 0;
	enemyFloorPawn->activateEnemyBehavior.AddDynamic(this, &UBehaviorTreeTaskTest::ActivateBehavior);
	floorPlan = enemyFloorPawn->floorPlan;
	CalculateDistance();
	return EBTNodeResult::InProgress;
}

ECardinalNodeDirections UBehaviorTreeTaskTest::CalculateDirection(const FVector2D& CurrentPosition,
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

void UBehaviorTreeTaskTest::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	if(aPlayerCompleteFloorData.currentNodePositionInGrid == patrolRoute[currentPathIndex]->floorNodeData.positionInGrid)
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
	FVector2D newPosition     = patrolRoute[currentPathIndex]->floorNodeData.positionInGrid;
	ECardinalNodeDirections facingDirection = CalculateDirection(currentPosition,newPosition);
	if(facingDirection != ECardinalNodeDirections::Empty)
	{
		enemyFloorPawn->SetRotationWithoutAnimation(facingDirection);
	}
	
	enemyFloorPawn->SetNodeToMoveTowards(patrolRoute[currentPathIndex]);

	if(aPlayerCompleteFloorData.currentNodePositionInGrid == patrolRoute[currentPathIndex]->floorNodeData.positionInGrid)
	{
		enemyFloorPawn->ActivateCombat();
	}
 }

void UBehaviorTreeTaskTest::CalculateDistance()
{

	AFloorManager* floorManager        = enemyFloorPawn->gameModeBase->floorManager;

	FVector2D GoalPosition             = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;
	FVector2D startPosition            = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	
	AFloorNode* goalFloorNode          = floorManager->GetNode(GoalPosition);
	AFloorNode* startFloorNode         = floorManager->GetNode(startPosition);
	FVector2d pawnPosition             = goalFloorNode->floorNodeData.positionInGrid;

	TArray<FFloorNodeData> nodesToTravel;
	nodesToTravel.Add(goalFloorNode->floorNodeData);
	TArray<FFloorNodeData> testAllCalculatedHeuristics;
	while(nodesToTravel.Num() > 0)
	{
		FFloorNodeData currentNodeData = nodesToTravel[0];
		nodesToTravel.RemoveAt(0);
		
		if(startFloorNode->floorNodeData.positionInGrid == pawnPosition)
		{
			break;
		}

		for (TTuple<ECardinalNodeDirections, AFloorNode*> NodesToTravel : currentNodeData.nodeNeighbors)
		{
			if(!NodesToTravel.Value->floorNodeData.hasBeenCalculated)
			{
				NodesToTravel.Value->floorNodeData.heuristic = currentNodeData.heuristic +1;
				nodesToTravel.Add(NodesToTravel.Value->floorNodeData);
				testAllCalculatedHeuristics.Add(NodesToTravel.Value->floorNodeData);
				NodesToTravel.Value->floorNodeData.hasBeenCalculated = true;
			}
		}
	}
	
	int currentHeuristic = startFloorNode->floorNodeData.heuristic;

	AFloorNode* currentFloorNode  = startFloorNode;
	patrolRoute.Add(currentFloorNode);
	
	while(currentFloorNode != nullptr)
	{

		TMap<ECardinalNodeDirections, AFloorNode*> nodeNeighbors = currentFloorNode->floorNodeData.nodeNeighbors;

		if(currentHeuristic == 0)
		{
			break;
		}
		
		AFloorNode* floorNodePath = nullptr;
		
		for (TTuple<ECardinalNodeDirections, AFloorNode*> node : nodeNeighbors)
		{
			if(node.Value->floorNodeData.heuristic < currentHeuristic
				&& node.Value->floorNodeData.heuristic != -1)
			{
				floorNodePath = node.Value;
			}
		}

		if(floorNodePath == nullptr)
		{
			break;
		}
		
		patrolRoute.Add(floorNodePath);
		currentHeuristic = floorNodePath->floorNodeData.heuristic;
		currentFloorNode = floorNodePath;
	}
}
