// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorBehaviorTrees.h"

#include "AiChaseTask.h"
#include "AIController.h"
#include "AiPatrolTask.h"
#include "AiReturnToPatrolTask.h"
#include "Floor_EnemyPawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorManager.h"
#include "DesentIntoAtlantis/FloorNode.h"

void UFloorBehaviorTree::InitializeBehaviorTree(AFloor_EnemyPawn* aFloorEnemyPawn)
{
	controlledEnemyPawn = aFloorEnemyPawn;
	floorManager        = aFloorEnemyPawn->gameModeBase->floorManager;
	floorTaskHasEnded.AddDynamic(this,&UFloorBehaviorTree::OnTaskEnd);
	InitializeTask(EBehaviorTaskTypes::Patrol,NewObject<UAiPatrolTask>(),controlledEnemyPawn);
	InitializeTask(EBehaviorTaskTypes::ChasePlayer, NewObject<UAiChaseTask>(),controlledEnemyPawn);
	InitializeTask(EBehaviorTaskTypes::ReturnToPatrolStart, NewObject<UAiReturnToPatrolTask>(),controlledEnemyPawn);
	controlledEnemyPawn->activateEnemyBehavior.AddDynamic(this, &UFloorBehaviorTree::BehaviorLogicController);
}

void UFloorBehaviorTree::InitializeTask(EBehaviorTaskTypes aTaskType,UFloorAiTask* aFloorBehaviors,AFloor_EnemyPawn* aFloorEnemyPawn)
{
	aFloorBehaviors->Initialize(aFloorEnemyPawn,this);
	floorBehaviors.Add(aTaskType,aFloorBehaviors);
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

void UFloorBehaviorTree::BehaviorLogicController(FCompleteFloorPawnData aCompleteFloorPawnData)
{
	//Put in logic for things
	if(CheckIfPlayerIsInRange(aCompleteFloorPawnData,floorManager))
	{
		isAlerted = true;
	}

	if(isAlerted)
	{
		UAiChaseTask* chasePlayerTask = static_cast<UAiChaseTask*>(floorBehaviors[EBehaviorTaskTypes::ChasePlayer]);
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

void UFloorBehaviorTree::OnTaskEnd(EBehaviorTaskTypes aTaskType)
{
	if(aTaskType == EBehaviorTaskTypes::ReturnToPatrolStart)
	{
		isAlerted = false;
	}
}
