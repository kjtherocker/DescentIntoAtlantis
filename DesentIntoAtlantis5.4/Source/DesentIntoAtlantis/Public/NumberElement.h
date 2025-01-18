// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLog_Full_Data.h"
#include "NumberElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UNumberElement : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	void SetNumbersText(FCombatLog_AttackDefense_Data aAttackDefenceLog);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_NumberText;
};
