// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealthData.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FHealthData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	int maxHealth = 0;
	UPROPERTY( EditAnywhere )
	int currentHealth = 0;
};