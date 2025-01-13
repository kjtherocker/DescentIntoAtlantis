// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "BaseUserWidget.h"
#include "PassiveSkillData.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "PassiveSkillElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkillElement : public UBaseHighlightElement
{
	GENERATED_BODY()
public:
	void SetPassiveSkill(FPassiveSkillData aSkill);

	int slot;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_PassiveSkillIcon;


	
};
