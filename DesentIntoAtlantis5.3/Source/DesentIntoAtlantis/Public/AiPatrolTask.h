// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorAiTask.h"
#include "UObject/NoExportTypes.h"
#include "AiPatrolTask.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UAiPatrolTask : public UFloorAiTask
{
	GENERATED_BODY()
public:	
	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentPathIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAscendingPath;
};
