// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyStatusHealthbar.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPartyStatusHealthbar::UiInitialize()
{
	BW_Mana->SetPercent(0);
	BW_ManaText->SetText(FText::FromString("111"));
}
