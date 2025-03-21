// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySelectionElement.h"

#include "CombatEntityHub.h"
#include "ElementalHandler.h"
#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"
#include "Health.h"
#include "Components/TextBlock.h"

void UEnemySelectionElement::SetEnemySelectionElement(UEnemyCombatEntity* aEnemyCombatEntity)
{
	enemyCombatEntity = aEnemyCombatEntity;
	
	BW_EnemyName->SetText(FText(FText::FromString(enemyCombatEntity->enemyEntityCompleteData.characterName)));
	BW_Healthbar_MainBar->SetPercent(aEnemyCombatEntity->GetHealthPercentage());
	BW_Healthbar_Temporary->SetPercent(aEnemyCombatEntity->GetHealthPercentage());
	BW_CombatTokenRow->UiInitialize(gameModeBase);
	BW_CombatTokenRow->InitializeCombatTokenRow(aEnemyCombatEntity->combatEntityHub->combatTokenHandler,InGameHUD);
	
	SetElementalText(BW_NullText,     EElementalType::Null	    ,enemyCombatEntity);
	SetElementalText(BW_FireText,     EElementalType::Fire		,enemyCombatEntity);
	SetElementalText(BW_IceText,      EElementalType::Ice		,enemyCombatEntity);
	SetElementalText(BW_WindText,     EElementalType::Wind		,enemyCombatEntity);
	SetElementalText(BW_EarthText,    EElementalType::Earth		,enemyCombatEntity);
	SetElementalText(BW_LightningText,EElementalType::Lighting	,enemyCombatEntity);
	SetElementalText(BW_LightText,    EElementalType::Light		,enemyCombatEntity);
	SetElementalText(BW_ShadowText,   EElementalType::Shadow	,enemyCombatEntity);

	currentHealthPercentage  = enemyCombatEntity->GetHealthPercentage();
	previousHealthPercentage = currentHealthPercentage;
	
	aEnemyCombatEntity->ResourceHandler->healthHandler->hasValuesUpdated.AddDynamic(this,
	&UEnemySelectionElement::UpdateHealthbarElements);
						
}

void UEnemySelectionElement::SetElementalText(UTextBlock* aElementalText,EElementalType aElementalType ,UEnemyCombatEntity* aEnemyEntityData)
{

	if(aEnemyEntityData->beastiaryData->GetRevealedElementalType(aElementalType))
	{
		EElementalReaction elementalReaction = aEnemyEntityData->combatEntityHub->elementalHandler->GetElementalReaction(aElementalType);
		
		if(elementalReaction == EElementalReaction::Resist)
		{
			aElementalText->SetText(FText(FText::FromString("STR")));
			return;
		}
		if(elementalReaction == EElementalReaction::Weak)
		{
			aElementalText->SetText(FText(FText::FromString("WK")));
			return;
		}

		aElementalText->SetText(FText(FText::FromString("-")));
	}
	else if(!aEnemyEntityData->beastiaryData->GetRevealedElementalType(aElementalType))
	{
		aElementalText->SetText(FText(FText::FromString("?")));
	}
}

void UEnemySelectionElement::SetHighlightSelectionElement(float aDamageValue, int Opacity)
{

	BW_BackgroundHighlight->SetColorAndOpacity(FLinearColor(1,1,1,Opacity));
	if(Opacity == 0)
	{
		BW_Healthbar_MainBar->SetPercent(enemyCombatEntity->GetHealthPercentage());
	}
	else
	{
		BW_Healthbar_MainBar->SetPercent(aDamageValue);	
	}
	
	
}

void UEnemySelectionElement::UpdateHealthbarElements()
{
	currentHealthPercentage = enemyCombatEntity->GetHealthPercentage();
	
	if(previousHealthPercentage < currentHealthPercentage)
	{
		previousHealthPercentage = currentHealthPercentage;
	}
}

void UEnemySelectionElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	if(previousHealthPercentage != currentHealthPercentage &&
		previousHealthPercentage >  currentHealthPercentage)
	{
		previousHealthPercentage -= DeltaTime *0.4;
	}
	//else if(previousHealthPercentage != currentHealthPercentage &&
	//	previousHealthPercentage <  currentHealthPercentage)
	//{
	//	previousHealthPercentage += DeltaTime *0.1;
	//}
	BW_Healthbar_MainBar->SetPercent(previousHealthPercentage);
}
