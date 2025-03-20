// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SyncData.h"
#include "UObject/NoExportTypes.h"
#include "ManaData.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FManaData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FResourceBarInfo ResourceBarInfo;
};