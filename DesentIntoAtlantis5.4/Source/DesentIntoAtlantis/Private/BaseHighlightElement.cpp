// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseHighlightElement.h"

#include "Components/Image.h"

void UBaseHighlightElement::ActivateButton()
{
	ViewSelection.Broadcast();
}

void UBaseHighlightElement::Highlight()
{
	BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UBaseHighlightElement::UnHightlight()
{
	BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
}