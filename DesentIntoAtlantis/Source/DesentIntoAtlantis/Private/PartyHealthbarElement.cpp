// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarElement.h"

#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPartyHealthbarElement::UiInitialize()
{

}

void UPartyHealthbarElement::SetCombatEntity(FPlayerCombatEntity* aCombatEntity)
{
	playerCombatEntity = aCombatEntity;
	playerCombatEntity->partyHealthbarElement = this;
	if(playerCombatEntity->maxHealth != 0)
	{
		BW_Health->SetPercent(playerCombatEntity->GetHealthPercentage());
	}
	BW_HealthText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentHealth)));

	characterName = playerCombatEntity->characterName;
	
	BW_Mana->SetPercent(playerCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentMana)));
	BW_CharacterPortrait->SetBrushFromTexture(playerCombatEntity->characterPortrait);
}

void UPartyHealthbarElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{

	if(isTriggeringHitEffect)
	{
		HitEffect(DeltaTime);
	}
}

void UPartyHealthbarElement::HitEffect(float DeltaTime)
{
	if(movementTimer >= 1)
	{
		movementTimer = 0;
		isTriggeringHitEffect = false;
		return;
	}
	
	movementTimer += DeltaTime *2;	
	
	BW_CharacterPortrait->SetColorAndOpacity(FLinearColor(1,movementTimer,movementTimer,1));
}

void UPartyHealthbarElement::UpdateHealthBar()
{
	BW_Health->SetPercent(playerCombatEntity->GetHealthPercentage());
	isTriggeringHitEffect = true;
}



