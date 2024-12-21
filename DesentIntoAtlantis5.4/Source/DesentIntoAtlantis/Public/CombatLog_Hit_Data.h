// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" 
#include "CombatLog_Hit_Data.generated.h"


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Hit_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	bool HitResult;

	UPROPERTY()
	int32 RandomNumber;

	UPROPERTY()
	int32 skillHit;

	UPROPERTY()
	int32 FinalNumber;

	UPROPERTY()
	int32 AttackerHit;

	UPROPERTY()
	int32 victimEvasion;

	UPROPERTY()
	int32 HitEvasionCalculation;

	
};