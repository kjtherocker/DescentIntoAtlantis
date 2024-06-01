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

void UFloorBehaviors::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
}

void UFloorBehaviors::Initialize(AFloor_EnemyPawn* aEnemyPawn)
{
	enemyFloorPawn = aEnemyPawn;
}

void UFloorBehaviors::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
}

void UFloorBehaviors::CalculateDistance(FVector2D aStartPosition, FVector2D aEndPosition, AFloorManager* aFloorManager)
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

ECardinalNodeDirections UFloorBehaviors::CalculateDirection(const FVector2D& CurrentPosition,
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

void UPatrolTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{

	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	FVector2D endPosition   = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.EndPath;

	CalculateDistance(startPosition, endPosition, floorManager);
	ActivateBehavior(aPlayerCompleteFloorData);
}

void UPatrolTask::Initialize(AFloor_EnemyPawn* aEnemyPawn)
{
	Super::Initialize(aEnemyPawn);
}

void UPatrolTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
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

void UChasePlayerTask::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ExecuteTask(aPlayerCompleteFloorData);
	
	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	ActivateBehavior(aPlayerCompleteFloorData);
}

bool UChasePlayerTask::CanEnemyReachPlayer(FCompleteFloorPawnData aPlayerCompleteFloorData,AFloorManager* aFloorManager)
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

void UChasePlayerTask::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
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
		enemyPawn->ActivateCombat();
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
		enemyPawn->ActivateCombat();
	}
}

void UReturnToPatrolPoint::ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ExecuteTask(aPlayerCompleteFloorData);
		
	floorManager = enemyFloorPawn->gameModeBase->floorManager;
	ActivateBehavior(aPlayerCompleteFloorData);
}

void UReturnToPatrolPoint::ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	Super::ActivateBehavior(aPlayerCompleteFloorData);
	
	AFloor_EnemyPawn* enemyPawn = enemyFloorPawn;
	FVector2D startPosition = enemyFloorPawn->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
	FVector2D endPosition   = enemyFloorPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	
	CalculateDistance(startPosition,endPosition,floorManager);

	if(patrolRoute.Num() == 0 ||patrolRoute.Num() == 1)
	{
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

void UFloorBehaviorTree::InitializeBehaviorTree(AFloor_EnemyPawn* aFloorEnemyPawn)
{
	controlledEnemyPawn = aFloorEnemyPawn;
	floorManager        = aFloorEnemyPawn->gameModeBase->floorManager;
	InitializeTask(EBehaviorTaskTypes::Patrol,NewObject<UPatrolTask>(),controlledEnemyPawn);
	InitializeTask(EBehaviorTaskTypes::ChasePlayer, NewObject<UChasePlayerTask>(),controlledEnemyPawn);
	InitializeTask(EBehaviorTaskTypes::ReturnToPatrolStart, NewObject<UReturnToPatrolPoint>(),controlledEnemyPawn);
	controlledEnemyPawn->activateEnemyBehavior.AddDynamic(this, &UFloorBehaviorTree::BehaviorLogicController);
}


bool UFloorBehaviorTree::CheckIfPlayerIsInRange(FCompleteFloorPawnData completeFloorPawnData,AFloorManager* aFloorManager)
{


	AFloorManager*	floorManagerRef = aFloorManager;
	TArray<FFloorNodeAiData> floorPlan = floorManagerRef->GetCopyOfFloorNodeAIData();

	FVector2D pawnPosition = controlledEnemyPawn->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
	FFloorNodeAiData startNodeData = floorPlan[floorManagerRef->GetNodeIndex(pawnPosition)];

	TArray<FFloorNodeAiData> nodesToTravel;
	startNodeData.hasBeenCalculated = true;
	nodesToTravel.Add(startNodeData);
	floorPlan[floorManagerRef->GetNodeIndex(startNodeData.positionInGrid)] = startNodeData;
	
	ECardinalNodeDirections playerFacingDirection = controlledEnemyPawn->enemyPawnCompleteData.completeFloorPawnData.currentFacingDirection;
	while(nodesToTravel.Num() > 0)
	{
		FFloorNodeAiData currentNodeData = nodesToTravel[0];
		nodesToTravel.RemoveAt(0);
		
		if(!currentNodeData.neightborsFloorData.Contains(playerFacingDirection))
		{
			break;
		}
		
		for (TTuple<ECardinalNodeDirections,  FFloorNodeAiData> NodesToTravel : currentNodeData.neightborsFloorData)
		{
			FFloorNodeAiData aiNode = floorPlan[floorManagerRef->GetNodeIndex(NodesToTravel.Value.positionInGrid)];
			
			if(playerFacingDirection != NodesToTravel.Key)
			{
				continue;
			}

			if(currentNodeData.additionalLockedDirections.Contains(NodesToTravel.Key))
			{
				continue;
			}
			
			if(!aiNode.hasBeenCalculated)
			{
				if(aiNode.positionInGrid == completeFloorPawnData.currentNodePositionInGrid)
				{
					return true;
				}
				aiNode.hasBeenCalculated = true;
				nodesToTravel.Add(aiNode);
				floorPlan[floorManagerRef->GetNodeIndex(NodesToTravel.Value.positionInGrid)] = aiNode;
			}
		}
	}

	return false;
}

void UFloorBehaviorTree::InitializeTask(EBehaviorTaskTypes aTaskType,UFloorBehaviors* aFloorBehaviors,AFloor_EnemyPawn* aFloorEnemyPawn)
{
	aFloorBehaviors->Initialize(aFloorEnemyPawn);
	floorBehaviors.Add(aTaskType,aFloorBehaviors);
}

void UFloorBehaviorTree::BehaviorLogicController(FCompleteFloorPawnData aCompleteFloorPawnData)
{
	//Put in logic for things
	if(CheckIfPlayerIsInRange(aCompleteFloorPawnData,floorManager))
	{
		isAlerted = true;
	}

	if(isAlerted)
	{
		UChasePlayerTask* chasePlayerTask = (UChasePlayerTask*)floorBehaviors[EBehaviorTaskTypes::ChasePlayer];
		if(chasePlayerTask->CanEnemyReachPlayer(aCompleteFloorPawnData,floorManager))
		{
			SetNewTask(EBehaviorTaskTypes::ChasePlayer,aCompleteFloorPawnData);
		}
		else
		{
			SetNewTask(EBehaviorTaskTypes::ReturnToPatrolStart,aCompleteFloorPawnData);
		}
	}
	else
	{
		SetNewTask(EBehaviorTaskTypes::Patrol,aCompleteFloorPawnData);	
	}
	
}

void UFloorBehaviorTree::SetNewTask(EBehaviorTaskTypes aTaskTypes,FCompleteFloorPawnData aCompleteFloorPawnData)
{
	previousTask = currentTask;
	currentTask = aTaskTypes;

	
	floorBehaviors[aTaskTypes]->ExecuteTask(aCompleteFloorPawnData);
}
