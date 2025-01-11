// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.generated.h"

class UBorder;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBaseUserWidgetMovingButtons : public UBaseUserWidget
{
	GENERATED_BODY()
protected:


	virtual void SetHighLightElements(TArray<UBaseHighlightElement*> aHighlightElements);
	
	virtual void MoveUp() override;
	virtual void MoveDown() override;

	virtual void SetCursorPositionInfo() override;

	virtual void SetDefaultMenuState();


	virtual void ActivateMenuSelection();

public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void ActivateHighLightSelection();

	UPROPERTY()
	TArray<FViewSelection> MenuSelectionDelegates;
	UPROPERTY()
	TArray<UBaseHighlightElement*> highlightElements;

	
};
