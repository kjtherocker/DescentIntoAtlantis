// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AilmentResistData.generated.h"


USTRUCT()
struct DESENTINTOATLANTIS_API FAilmentResistData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int AilmentResistance = 3;

};
