// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "LevelupPanelElement.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API ULevelupPanelElement : public UBaseUserWidget
{
	GENERATED_BODY()
public:

	void Initialize(FString aAbilityModifierName,FString aPreviousClassValue,FString aNextClassValue);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_PreviousClassText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_NextClassText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_AbilityModifierName;
	

};
