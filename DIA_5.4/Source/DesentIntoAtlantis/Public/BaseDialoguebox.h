// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "BaseDialoguebox.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBaseDialoguebox : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void ActivateHighLightSelection() override;

	void SetTitleText(FString aText);
	void SetDescriptionText(FString aText);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_DialogueText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_YesElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_NoElement;
	
	
};
