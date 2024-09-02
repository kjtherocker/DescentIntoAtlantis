// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorAiTask.h"

#include "BehaviorTree/BTTaskNode.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "BehaviorTreeTaskTest.generated.h"

struct FFloorNodeAiData;
class AFloorManager;
struct FCompleteFloorPawnData;
class AFloor_EnemyPawn;
class AFloorNode;
struct FFloorNodeData;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBehaviorTreeTaskTest : public UBTTaskNode
{
	GENERATED_BODY()
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};





