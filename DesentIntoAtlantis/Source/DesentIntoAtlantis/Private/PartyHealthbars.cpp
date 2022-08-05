// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbars.h"

#include "CombatEntity.h"
#include "PartyStatusHealthbar.h"
#include "Components/HorizontalBox.h"

void UPartyHealthbars::UiInitialize()
{
	UCombatEntity* testo1 = NewObject<UCombatEntity>();
	testo1->SetHealth(100);
	testo1->DecrementHealth(50);
	
	UCombatEntity* testo2 = NewObject<UCombatEntity>();
	testo2->SetHealth(200);
	testo2->DecrementHealth(150);
	
	UCombatEntity* testo3 = NewObject<UCombatEntity>();
	testo3->SetHealth(300);
	testo3->DecrementHealth(100);
	
	UCombatEntity* testo4 = NewObject<UCombatEntity>();
	testo4->SetHealth(400);
	testo4->DecrementHealth(150);
	
	CreateHealthbar(testo1);
	CreateHealthbar(testo2);
	CreateHealthbar(testo3);
	CreateHealthbar(testo4);
	
}

void UPartyHealthbars::CreateHealthbar(UCombatEntity* aCombatEntity)
{
	UUserWidget* testo = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UPartyStatusHealthbar* baseUserWidget = (UPartyStatusHealthbar*)testo;
	baseUserWidget->UiInitialize();
	testo->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	
	healthBars.Add(baseUserWidget);
	BW_HorizontalBox->AddChild(testo);
}
