// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthData.h"
#include "ManaData.h"
#include "UObject/NoExportTypes.h"
#include "ResourceHandlerCompleteData.generated.h"


USTRUCT()
struct DESENTINTOATLANTIS_API FResourceHandlerCompleteData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	FHealthData HealthData;

	UPROPERTY()
	FManaData ManaData;

	UPROPERTY()
	FSyncData SyncData;
	
	
};

