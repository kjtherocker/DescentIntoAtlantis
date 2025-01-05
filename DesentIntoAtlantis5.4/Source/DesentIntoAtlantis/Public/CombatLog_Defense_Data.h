// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" 
#include "CombatLog_Defense_Data.generated.h"

struct FCombatLog_PassiveSkilData;

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Defense_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	int32 DefaultDamageResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	int32 FinalDamageResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	TArray<FCombatLog_PassiveSkilData> passivesActivated;
};

