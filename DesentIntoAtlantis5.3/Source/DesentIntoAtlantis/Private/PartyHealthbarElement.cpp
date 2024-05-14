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
	
	characterName = playerCombatEntity->playerIdentityData.characterName;

	if(aCombatEntity->playerIdentityData.characterPortrait)
	{
		UMaterialInterface* CurrentMaterial = aCombatEntity->playerIdentityData.characterPortrait;
		UMaterialInterface*  materialInstanceDynamic = UMaterialInstanceDynamic::Create(CurrentMaterial, this);
		BW_CharacterPortrait->SetBrushFromMaterial(materialInstanceDynamic);
	}

	
	//BW_CharacterPortrait->SetBrushFromTexture(playerCombatEntity->playerIdentityData.characterPortrait);
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
	float healthPercentage = playerCombatEntity->GetHealthPercentage();
	BW_Health->SetPercent(healthPercentage);
	BW_HealthText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentHealth)));
	
	BW_Mana->SetPercent(playerCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentMana)));

	float syncPercentage = playerCombatEntity->GetSyncPercentage(); 
	BW_Sync->SetPercent(syncPercentage);
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



