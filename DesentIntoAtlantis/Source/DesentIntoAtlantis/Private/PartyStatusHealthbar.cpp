// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyStatusHealthbar.h"

#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPartyStatusHealthbar::UiInitialize()
{

}

void UPartyStatusHealthbar::SetCombatEntity(FPlayerCombatEntity* aCombatEntity)
{
	if(aCombatEntity->currentClass->currentClassLevel->maxHealth != 0)
	{
		BW_Health->SetPercent(aCombatEntity->GetHealthPercentage());
	}
	BW_HealthText->SetText(FText::FromString( FString::FromInt(aCombatEntity->currentHealth)));

	characterName = aCombatEntity->characterName;
	
	BW_Mana->SetPercent(aCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(aCombatEntity->currentMana)));
	BW_CharacterPortrait->SetBrushFromTexture(aCombatEntity->characterPortrait);
}



