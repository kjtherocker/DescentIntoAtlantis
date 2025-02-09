// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLogDetailedElement.generated.h"

class URichTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogDetailedElement : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	void SetDetailedElement(FString aName,FString aValue);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_Name;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_Value;
};
