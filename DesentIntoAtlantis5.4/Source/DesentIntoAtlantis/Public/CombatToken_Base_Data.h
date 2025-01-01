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
	StrengthUp         = 4,
	StrengthDown       = 5,
	MagicUp            = 6,
	MagicDown          = 7,
	HitUp              = 8,
	HitDown            = 9,
	EvasionUp          = 10,
	EvasionDown        = 11,
	DefenceUp          = 12,
	DefenceDown        = 13,
	ResistanceUp       = 14,
	ResistanceDown     = 15,
};


UENUM()
enum class ECombatTokenType   : uint8
{
	None               = 0,
	Positive           = 1,
	Neutral            = 2,
	Negative           = 3,
	PositiveNegative   = 4,
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatToken_Base_Data :public  FPassiveSkillData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	ECombatTokenID CombatTokenID;

	UPROPERTY(EditAnywhere)
	ECombatTokenID InvertedCombatTokenID;

	UPROPERTY(EditAnywhere)
	ECombatTokenType CombatTokenType;
	
	UPROPERTY(EditAnywhere)
	int32 MaxStack = 3;
	UPROPERTY(EditAnywhere)
	int32 startingTokenTurnLength = 3;
};