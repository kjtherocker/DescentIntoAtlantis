// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbars.h"

#include "Components/HorizontalBox.h"

void UPartyHealthbars::UiInitialize()
{
	CreateHealthbar();
	CreateHealthbar();
	CreateHealthbar();
	CreateHealthbar();
	
}

void UPartyHealthbars::CreateHealthbar()
{
	UUserWidget* testo = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UBaseUserWidget* baseUserWidget = (UBaseUserWidget*)testo;
	baseUserWidget->UiInitialize();
	testo->AddToViewport();
	
	BW_HorizontalBox->AddChild(testo);
}
