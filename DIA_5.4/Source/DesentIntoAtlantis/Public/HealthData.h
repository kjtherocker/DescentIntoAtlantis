// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SyncData.h"
#include "UObject/NoExportTypes.h"
#include "HealthData.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FHealthData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FResourceBarInfo ResourceBarInfo;
};