// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyStatusHealthbar.h"

#include "CombatEntity.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPartyStatusHealthbar::UiInitialize()
{

}

void UPartyStatusHealthbar::SetCombatEntity(UCombatEntity* aCombatEntity)
{
	if(aCombatEntity->maxHealth != 0)
	{
		
		BW_Health->SetPercent(aCombatEntity->GetHealthPercentage());
	//	BW_Health->SetPercent(0.5f);
	}
	BW_HealthText->SetText(FText::FromString( FString::FromInt(aCombatEntity->currentHealth)));

	BW_Mana->SetPercent(0);
	BW_ManaText->SetText(FText::FromString("542"));
}



