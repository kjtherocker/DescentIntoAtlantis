// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarElement.h"

#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatTokenRowElement.h"
#include "Health.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "ProgressBarDelayedElement.h"
#include "ResourceHandler.h"
#include "SyncHandler.h"
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
	
	aCombatEntity->ResourceHandler->healthHandler->hasValuesUpdated.AddDynamic(this,
		&UPartyHealthbarElement::UpdateHealthbarElements);

	aCombatEntity->ResourceHandler->hasValuesUpdated.AddDynamic(this,
		&UPartyHealthbarElement::UpdateHealthbarElements);

	aCombatEntity->ResourceHandler->manaHandler->HasManaValuesChanged.AddDynamic(this,
		&UPartyHealthbarElement::ManaValuesChanged);

	aCombatEntity->wasKilled.AddDynamic(this,
		&UPartyHealthbarElement::TriggerGreyScale);

	playerCombatEntity->ResourceHandler->SyncHandler->HasValuesChanged.AddDynamic(this,&UPartyHealthbarElement::SyncValuesChanged);
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
	BW_Health->SetProgressBar(playerCombatEntity->GetHealthPercentage());
	BW_Mana->SetProgressBar(playerCombatEntity->GetManaPercentage());

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
}

void UPartyHealthbarElement::UpdateHealthbarElements()
{
	//previousHealthPercentage = currentHealthPercentage;
	BW_Health->SetPercentageMain(playerCombatEntity->GetHealthPercentage());
	BW_HealthText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->ResourceHandler->healthHandler->GetCurrentValue())));
	
	BW_Mana->SetPercentageMain(playerCombatEntity->GetManaPercentage());
	BW_ManaText->SetText(FText::FromString( FString::FromInt(playerCombatEntity->ResourceHandler->manaHandler->GetManaData().ResourceBarInfo.Current)));


	float syncPercentage = playerCombatEntity->GetSyncPercentage();
	if(playerCombatEntity->ResourceHandler->SyncHandler->GetSyncisLockedState())
	{
		BW_Sync->SetPercentageMain(0);	
	}
	else
	{
		BW_Sync->SetPercentageMain(syncPercentage);	
	}	
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

void UPartyHealthbarElement::ManaValuesChanged(FManaData AManaData)
{
	UpdateHealthbarElements();
}

void UPartyHealthbarElement::SyncValuesChanged(FResourceBarInfo aResourceBarInfo)
{
	UpdateHealthbarElements();
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

void UPartyHealthbarElement::SetPersistantGameInstance(UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameinstance = aPersistentGameinstance;
}

void UPartyHealthbarElement::MoveUp()
{
	SetRenderTranslation(FVector2d(0,MOVEUP_TRANSLATION_OFFSET));
}

void UPartyHealthbarElement::ResetTranslation()
{
	SetRenderTranslation(FVector2d(0,0));
}



