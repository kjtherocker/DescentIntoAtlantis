// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbars.h"

#include "CombatEntity.h"
#include "PartyStatusHealthbar.h"
#include "Components/HorizontalBox.h"

void UPartyHealthbars::UiInitialize()
{
	//FCombatEntity* testo1 = NewObject<FCombatEntity>();
	//testo1->SetHealth(100);
	//testo1->DecrementHealth(50);
	//
	//FCombatEntity* testo2 = NewObject<FCombatEntity>();
	//testo2->SetHealth(200);
	//testo2->DecrementHealth(150);
	//
	//FCombatEntity* testo3 = NewObject<FCombatEntity>();
	//testo3->SetHealth(300);
	//testo3->DecrementHealth(100);
	//
	//FCombatEntity* testo4 = NewObject<FCombatEntity>();
	//testo4->SetHealth(400);
	//testo4->DecrementHealth(150);
	//
	//CreateHealthbar(testo1);
	//CreateHealthbar(testo2);
	//CreateHealthbar(testo3);
	//CreateHealthbar(testo4);
	
}

void UPartyHealthbars::CreateHealthbar(FCombatEntity* aCombatEntity)
{
	UUserWidget* testo = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UPartyStatusHealthbar* baseUserWidget = (UPartyStatusHealthbar*)testo;
	baseUserWidget->UiInitialize();
	testo->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	
	healthBars.Add(baseUserWidget);
	BW_HorizontalBox->AddChild(testo);
}
