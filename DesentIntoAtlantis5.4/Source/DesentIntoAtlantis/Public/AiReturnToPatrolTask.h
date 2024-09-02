// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorAiTask.h"
#include "UObject/NoExportTypes.h"
#include "AiReturnToPatrolTask.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UAiReturnToPatrolTask : public UFloorAiTask
{
	GENERATED_BODY()
public:

	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;
public:
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentPathIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAscendingPath;
};
