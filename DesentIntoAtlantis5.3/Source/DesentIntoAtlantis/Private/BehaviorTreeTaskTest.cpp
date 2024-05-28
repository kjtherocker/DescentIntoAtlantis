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

void UBehaviorTreeTaskTest::ActivateBehavior()
{
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
	
	enemyFloorPawn->SetNodeToMoveTowards(patrolRoute[currentPathIndex]);
 }

void UBehaviorTreeTaskTest::CalculateDistance()
{

	AFloorManager* floorManager        = enemyFloorPawn->gameModeBase->floorManager;

	FVector2D GoalPosition             = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;
	FVector2D startPosition            = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	
	FVector2D travelToPosition         = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	FVector2d currentPositionInTravel  = travelToPosition;
	
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
