// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SyncData.generated.h"


USTRUCT()
struct DESENTINTOATLANTIS_API FResourceBarInfo  : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	int Current = 100;

	UPROPERTY()
	int Max = 100;

	UPROPERTY()
	float Percentage = 1;

	UPROPERTY()
	bool isResourceCompletelyLocked = false;

	UPROPERTY()
	bool isResourceIncrementingLocked = false;
	
	UPROPERTY()
	bool isResourceDecrementingLocked = false;
};




USTRUCT()
struct DESENTINTOATLANTIS_API FSyncData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FResourceBarInfo ResourceBarInfo;
	
	UPROPERTY()
	bool isSyncLocked = true;
};

