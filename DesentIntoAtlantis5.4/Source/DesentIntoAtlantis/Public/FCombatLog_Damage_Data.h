// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" 
#include "FCombatLog_Damage_Data.generated.h"
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Damage_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	int32 SkillDamage               = 0;
	UPROPERTY()
	int32 StatsAddedToDamage           = 0;
	UPROPERTY()
	int32 DamageElementalConversion = 0;
	UPROPERTY()
	int32 FinalDamage               = 0;

	
};

