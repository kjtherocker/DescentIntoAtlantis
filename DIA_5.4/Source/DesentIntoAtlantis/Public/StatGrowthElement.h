// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/ProgressBar.h"
#include "StatGrowthElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UStatGrowthElement : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_LetterGrade;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_StatName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_StatNumber;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_ProgressBar;
	
	
	void SetStatGrowthElement(FString aLetterGrade,FString aStatName,FString aStatNumber, float aPercentage);
};
