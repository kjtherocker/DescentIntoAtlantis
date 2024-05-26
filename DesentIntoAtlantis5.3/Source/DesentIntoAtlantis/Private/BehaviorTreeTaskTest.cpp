// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorTreeTaskTest.h"

#include "AIController.h"
#include "Floor_EnemyPawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"

EBTNodeResult::Type UBehaviorTreeTaskTest::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();
//	APawn* AIPawn2 = MyController->GetPawn();
	
	AIPawn = MyController->GetPawn();
	enemyFloorPawn = static_cast<AFloor_EnemyPawn*>(AIPawn);
	enemyFloorPawn->Test();
	int testo = 0;
	return EBTNodeResult::InProgress;
}
