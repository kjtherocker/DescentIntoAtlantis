// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "TutorialManagerSubsystem.generated.h"

class UDataTable;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UTutorialManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	void InitializeDatabase(UDataTable* aTutorialDatabase);

	
	UPROPERTY()
	TArray<FTutorialData> tutorialData;

	UPROPERTY()
	TMap<ETutorialTriggers,FTutorialData> tutorialMap;
	
};
