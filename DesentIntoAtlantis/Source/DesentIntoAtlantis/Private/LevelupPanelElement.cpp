// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelupPanelElement.h"
#include "Components/TextBlock.h"

void ULevelupPanelElement::Initialize(FString aAbilityModifierName, FString aPreviousClassValue,
	FString aNextClassValue)
{
	BW_AbilityModifierName->SetText(FText(FText::FromString(aAbilityModifierName)));
	BW_PreviousClassText->SetText(FText(FText::FromString(aPreviousClassValue)));
	BW_NextClassText->SetText(FText(FText::FromString(aNextClassValue)));

}
