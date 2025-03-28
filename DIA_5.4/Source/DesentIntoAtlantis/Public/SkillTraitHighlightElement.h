// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "SkillData.h"
#include "SkillHandler.h"
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
	SkillHit   = 5,
	skillType  = 6,
};



UCLASS()
class DESENTINTOATLANTIS_API USkillTraitHighlightElement : public UBaseHighlightElement
{
	GENERATED_BODY()
public:
	
	void InitializeSkillTrait(USkillHandler* aSkillHandler, ESkillTraitType aSkillTraitType, FSkillsData aSkillData);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Background;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_TraitTitle;
	
};
