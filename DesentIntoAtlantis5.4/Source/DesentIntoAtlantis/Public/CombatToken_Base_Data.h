// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillData.h"
#include "CombatToken_Base_Data.generated.h"


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

