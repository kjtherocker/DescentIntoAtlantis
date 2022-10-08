// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySelectionElement.h"
#include "EnemyCombatEntity.h"
#include "Components/TextBlock.h"

void UEnemySelectionElement::SetEnemySelectionElement(FEnemyCombatEntity* aEnemyCombatEntity)
{
	enemyCombatEntity = aEnemyCombatEntity;
	FEnemyEntityData* enemyEntity = enemyCombatEntity->enemyEntityData;
	
	BW_EnemyName->SetText(FText(FText::FromString(enemyEntity->characterName)));
	BW_Healthbar_MainBar->SetPercent(aEnemyCombatEntity->GetHealthPercentage());
	BW_Healthbar_Temporary->SetPercent(aEnemyCombatEntity->GetHealthPercentage());
	SetElementalText(BW_NullText,     enemyEntity);
	SetElementalText(BW_FireText,     enemyEntity);
	SetElementalText(BW_IceText,      enemyEntity);
	SetElementalText(BW_WindText,     enemyEntity);
	SetElementalText(BW_EarthText,    enemyEntity);
	SetElementalText(BW_LightningText,enemyEntity);
	SetElementalText(BW_LightText,    enemyEntity);
	SetElementalText(BW_ShadowText,   enemyEntity);
	
}

void UEnemySelectionElement::SetElementalText(UTextBlock* aElementalText, FEnemyEntityData* aEnemyEntityData)
{

	aElementalText->SetText(FText(FText::FromString("?")));	
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
