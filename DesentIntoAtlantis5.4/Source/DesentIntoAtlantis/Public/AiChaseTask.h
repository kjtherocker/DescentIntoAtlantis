// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorAiTask.h"
#include "UObject/NoExportTypes.h"
#include "AiChaseTask.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UAiChaseTask : public UFloorAiTask
{
	GENERATED_BODY()
	
	virtual void ExecuteTask(FCompleteFloorPawnData aPlayerCompleteFloorData) override;
public:

	virtual bool CanEnemyReachPlayer(FCompleteFloorPawnData aPlayerCompleteFloorData,AFloorManager* aFloorManager);
	UFUNCTION()
	virtual void ActivateBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorManager* floorManager;
};
