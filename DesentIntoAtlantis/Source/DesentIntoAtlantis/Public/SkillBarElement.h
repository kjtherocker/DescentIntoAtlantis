// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Skills_Base.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "SkillBarElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillBarElement : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	void SetSkill(FSkills_Base* aSkill);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* SkillIcon;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* SkillName;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* SkillCost;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
	
};
