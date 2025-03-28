// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "SkillTraitHighlightElement.generated.h"

/**
 * 
 */
UENUM()
enum class ESkillTraitType : uint8
{
	None       = 0,
	Damage     = 1,
	Element    = 2,
	DamageType = 3,
	ScaleStat  = 4,
};



UCLASS()
class DESENTINTOATLANTIS_API USkillTraitHighlightElement : public UBaseHighlightElement
{
	GENERATED_BODY()
	
};
