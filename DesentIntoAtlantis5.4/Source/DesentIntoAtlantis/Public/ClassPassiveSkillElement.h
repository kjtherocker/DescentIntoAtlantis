// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillElement.h"
#include "ClassPassiveSkillElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassPassiveSkillElement : public UPassiveSkillElement
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
	FPassiveSkillClassData passiveSkillClassData;

	UPROPERTY()
	FString skillName;
	
	virtual void SetClassInformation(FPassiveSkillClassData aSkillClassData);
	void SetSkillLock(bool aIsLocked);
};
