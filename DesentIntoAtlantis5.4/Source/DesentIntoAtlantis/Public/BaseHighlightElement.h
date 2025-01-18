// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/RichTextBlock.h"
#include "BaseHighlightElement.generated.h"

class UImage;
/**
 * 
 */





UCLASS()
class DESENTINTOATLANTIS_API UBaseHighlightElement : public UBaseUserWidget
{
	GENERATED_BODY()


public:

	FViewSelection ViewSelection;
	
	virtual void ActivateButton();

	virtual void SetMainText(FString aText);
	
	virtual void Highlight();
	virtual void UnHightlight();

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_MainText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
	
};
