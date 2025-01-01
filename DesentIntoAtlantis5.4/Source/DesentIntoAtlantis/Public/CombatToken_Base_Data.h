// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillData.h"
#include "UObject/NoExportTypes.h"
#include "CombatToken_Base_Data.generated.h"


UENUM()
enum class ECombatTokenID   : uint8
{
	None               = 0,
	DarkWeakness       = 1,
	Evade              = 2,
	InFlame            = 3,
	PhysicalAttackUp   = 4,
	MagicAttackUp      = 5,
	PhysicalAttackDown = 6,
	MagicAttackDown    = 7,
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatToken_Base_Data :public  FPassiveSkillData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	ECombatTokenID CombatTokenID;
	
	UPROPERTY(EditAnywhere)
	int32 MaxStack = 3;
	UPROPERTY(EditAnywhere)
	int32 startingTokenTurnLength = 3;
};