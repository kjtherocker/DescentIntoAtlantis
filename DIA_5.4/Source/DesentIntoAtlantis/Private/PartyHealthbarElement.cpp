// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarElement.h"

#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatTokenRowElement.h"
#include "Health.h"
#include "PersistentGameinstance.h"
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
	
	aCombatEntity->health->hasHealthValuesChanged.AddDynamic(this,
		&UPartyHealthbarElement::UpdateHealthbarElements);

	aCombatEntity->wasKilled.AddDynamic(this,
		&UPartyHealthbarElement::TriggerGreyScale);
	
	characterName = playerCombatEntity->playerIdentityData.characterName;
    FCharacterCostumeData DialogueActor = playerCombatEntity->GetCurrentCostumeData();
	
	if(DialogueActor.healthbarPortrait != nullptr)
	{
		UMaterialInterface* CurrentMaterial = DialogueActor.healthbarPortrait;
		UMaterialInterface*  materialInstanceDynamic = UMaterialInstanceDynamic::Create(CurrentMaterial, this);
		BW_CharacterPortrait->SetBrushFromMaterial(materialInstanceDynamic);
	}

	
	//BW_CharacterPortrait->SetBrushFromTexture(playerCombatEntity->playerIdentityData.characterPortrait);
	UpdateHealthbarElements();
	previousHealthPercentage = currentHealthPercentage;
	BW_Health_Slow->SetPercent(previousHealthPercentage);
}

void UPartyHealthbarElement::SetCombatTokenRow(UPlayerCombatEntity* aCombatEntity, AInGameHUD* aInGameHud)
{
	BW_CombatTokenRowElement->UiInitialize(gameModeBase);
	BW_CombatTokenRowElement->InitializeCombatTokenRow(aCombatEntity->combatEntityHub->combatTokenHandler,aInGameHud);
}

void UPartyHealthbarElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	if(isTriggeringHitEffect)
	{
		HitEffect(DeltaTime);
	}
	if(previousHealthPercentage != currentHealthPercentage &&
		previousHealthPercentage >  currentHealthPercentage)
	{
		previousHealthPercentage -= DeltaTime *0.2;
	}
	//else if(previousHealthPercentage != currentHealthPercentage &&
	//	previousHealthPercentage <  currentHealthPercentage)
	//{
	//	previousHealthPercentage += DeltaTime *0.1;
	//}
	BW_Health_Slow->SetPercent(previousHealthPercentage);
}

void UPartyHealthbarElement::UpdateHealthbarElements()
{
	//previousHealthPercentage = currentHealthPercentage;
	currentHealthPercentage = playerCombatEntity->GetHealthPercentage();
	BW_Health->SetPercent(currentHealthPercentage);
	BW_HealthText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->health->GetCurrentHealth())));
	
	BW_Mana->SetPercent(playerCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->currentMana)));

	if(previousHealthPercentage < currentHealthPercentage)
	{
		previousHealthPercentage = currentHealthPercentage;
	}
	float syncPercentage = playerCombatEntity->GetSyncPercentage(); 
	BW_Sync->SetPercent(syncPercentage);
}

void UPartyHealthbarElement::HitEffect(float DeltaTime)
{
	if(movementTimer >= 3)
	{
		movementTimer = 0;
		isTriggeringHitEffect = false;
		ResetTranslation();
		BW_BackgroundHighlight->SetOpacity(0);
		return;
	}
	
	movementTimer += DeltaTime *2;	
	MoveUp();
	BW_BackgroundHighlight->SetOpacity(1);
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

void UPartyHealthbarElement::TriggerAilmentEffect(EStatusAilments aStatusAilment)
{
	switch (aStatusAilment) {
	case EStatusAilments::None:
		break;
	case EStatusAilments::Fear:
		BW_CharacterPortrait->SetColorAndOpacity(FLinearColor::Blue);
		break;
	case EStatusAilments::Poison:
		break;
	case EStatusAilments::Daze:
		break;
	case EStatusAilments::Sleep:
		break;
	case EStatusAilments::Rage:
		break;
	}
}

void UPartyHealthbarElement::MoveUp()
{
	SetRenderTranslation(FVector2d(0,MOVEUP_TRANSLATION_OFFSET));
}

void UPartyHealthbarElement::ResetTranslation()
{
	SetRenderTranslation(FVector2d(0,0));
}



