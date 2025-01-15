// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseHighlightElement.h"

#include "Components/Image.h"

void UBaseHighlightElement::ActivateButton()
{
	ViewSelection.Broadcast();
}

void UBaseHighlightElement::SetMainText(FString aText)
{
	BW_MainText->SetText(FText::FromString(aText));
}

FString UBaseHighlightElement::WrapTextInStyle(FString aText, ETextStyle aTextStyle)
{
	FString start;
	FString end = "</>";
	
	switch (aTextStyle)
	{
		case ETextStyle::None:
			break;
		case ETextStyle::TitleStyling:
			start = "<TitleStyling>";
		
			break;
		case ETextStyle::ClassHighlight:
			start = "<Classhighlight>";
			break;
	}

	FString finalString = start + aText + end;

	return finalString;
}

void UBaseHighlightElement::Highlight()
{
	BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UBaseHighlightElement::UnHightlight()
{
	BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
}
