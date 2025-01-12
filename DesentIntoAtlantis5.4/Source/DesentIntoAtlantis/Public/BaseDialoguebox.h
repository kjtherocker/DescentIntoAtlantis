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
	FViewSelection OnYes;
	FViewSelection OnNo;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_DialogueText;
	
	
};
