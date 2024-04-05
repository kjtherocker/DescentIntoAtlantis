// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarElement.h"

#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPartyHealthbarElement::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
}

void UPartyHealthbarElement::SetCombatEntity(UPlayerCombatEntity* aCombatEntity)
{
	playerCombatEntity = aCombatEntity;
	playerCombatEntity->partyHealthbarElement = this;

	aCombatEntity->wasDamaged.AddDynamic(this,
		&UPartyHealthbarElement::TriggerHitEffect);
	
	aCombatEntity->hasHealthOrManaValuesChanged.AddDynamic(this,
		&UPartyHealthbarElement::UpdateHealthbarElements);

	aCombatEntity->wasKilled.AddDynamic(this,
		&UPartyHealthbarElement::TriggerGreyScale);
	
	characterName = playerCombatEntity->playerEntityData.characterName;
	
	BW_CharacterPortrait->SetBrushFromTexture(playerCombatEntity->playerEntityData.characterPortrait);
	UpdateHealthbarElements();
	
}

void UPartyHealthbarElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	if(isTriggeringHitEffect)
	{
		HitEffect(DeltaTime);
	}
}

void UPartyHealthbarElement::UpdateHealthbarElements()
{
	BW_Health->SetPercent(playerCombatEntity->GetHealthPercentage());
	BW_HealthText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentHealth)));
	
	BW_Mana->SetPercent(playerCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentMana)));
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

void UPartyHealthbarElement::TriggerHitEffect()
{
	UpdateHealthbarElements();
	isTriggeringHitEffect = true;
}

void UPartyHealthbarElement::TriggerGreyScale()
{
	BW_CharacterPortrait->SetColorAndOpacity(FLinearColor::Black);
}

void UPartyHealthbarElement::MoveUp()
{
	SetRenderTranslation(FVector2d(0,MOVEUP_TRANSLATION_OFFSET));
}

void UPartyHealthbarElement::ResetTranslation()
{
	SetRenderTranslation(FVector2d(0,0));
}



