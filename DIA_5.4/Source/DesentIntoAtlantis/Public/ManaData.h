// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ManaData.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FManaData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	int CurrentMana = 50;

	UPROPERTY()
	int MaxMana = 50;

	UPROPERTY()
	float ManaPercentage = 1;
	
};