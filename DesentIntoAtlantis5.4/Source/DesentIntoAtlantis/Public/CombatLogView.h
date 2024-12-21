// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLog_Base_Data.h"
#include "Components/RichTextBlock.h"
#include "CombatLogView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogView : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	void CreateCombatLog(FCombatLog_Base_Data CombatLog_Base_Data);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatLogText;
	
};
