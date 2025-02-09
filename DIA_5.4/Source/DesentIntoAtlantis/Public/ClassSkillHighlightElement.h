// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "SkillBarElement.h"
#include "SkillData.h"
#include "ClassSkillHighlightElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassSkillHighlightElement : public USkillBarElement
{
	GENERATED_BODY()

public:

		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Background;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CostNumber;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_TitleText;

	UPROPERTY()
	FSkillClassData SkillClassData;

	UPROPERTY()
	FString skillName;
	
	virtual void SetClassInformation(FSkillClassData aSkillClassData);
	virtual void SetSkill(FSkillsData aSkill) override;
	void SetSkillLock(bool aIsLocked);
};
