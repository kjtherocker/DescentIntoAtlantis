// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedElement.h"

#include "Components/RichTextBlock.h"

void UCombatLogDetailedElement::SetDetailedElement(FString aName, FString aValue)
{
	BW_Name->SetText(FText(FText::FromString(aName)));
	BW_Value->SetText(FText(FText::FromString(aValue)));
}
