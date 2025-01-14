// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "OptionMenuHighlightElement.h"
#include "OptionView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UOptionView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	
	UFUNCTION()
	void Load();
	UFUNCTION()
	void Save();
	UFUNCTION()
	void Setting();
	UFUNCTION()
	void Exit();
public:

	UPROPERTY()
	TArray<UBorder*> menuSelections;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UOptionMenuHighlightElement* BW_Load;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UOptionMenuHighlightElement* BW_Save;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UOptionMenuHighlightElement* BW_Setting;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UOptionMenuHighlightElement* BW_Exit;
};
