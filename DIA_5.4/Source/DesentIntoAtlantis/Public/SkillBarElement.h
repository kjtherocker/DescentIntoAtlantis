// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "BaseUserWidget.h"
#include "SkillBase.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "SkillBarElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillBarElement : public UBaseHighlightElement
{
	GENERATED_BODY()

public:
	virtual void SetSkill(FSkillsData aSkill);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* SkillIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* SkillCost;
	
};
