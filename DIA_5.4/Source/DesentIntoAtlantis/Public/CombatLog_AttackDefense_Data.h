// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatLog_Defense_Data.h"
#include "FCombatLog_Damage_Data.h"
#include "Engine/DataTable.h" 

#include "CombatLog_AttackDefense_Data.generated.h"

/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_AttackDefense_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	bool wasInitializedOnSkill = false;

	UPROPERTY()
	FString ForcedDescription;
	
	UPROPERTY()
	int32 FinalDamageResult = 0;
	UPROPERTY()
	FCombatLog_Defense_Data DefenceData;
	UPROPERTY()
	FCombatLog_Damage_Data DamageData;


};

