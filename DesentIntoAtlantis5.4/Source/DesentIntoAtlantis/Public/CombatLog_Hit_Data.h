// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatLog_Evasion_Data.h"
#include "Engine/DataTable.h"
#include "CombatLog_PassiveSkilData.h"
#include "CombatLog_Hit_Data.generated.h"



USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Hit_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	bool wasHitInitializedOnSkill = false;
	
	UPROPERTY()
	bool HitResult = false;

	UPROPERTY()
	int32 RandomNumber = -1;

	UPROPERTY()
	int32 skillHit = -1;

	UPROPERTY()
	int32 hitChance = -1;

	UPROPERTY()
	int32 FinalNumber = -1;

	UPROPERTY()
	int32 AttackerHit = -1;

	UPROPERTY()
	int32 HitEvasionCalculation = -1;
	
	UPROPERTY()
	FCombatLog_Evasion_Data CombatLogEvasionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	TArray<FCombatLog_PassiveSkilData> passivesActivated;
};