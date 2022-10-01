// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySelectionElement.h"
#include "EnemyCombatEntity.h"
#include "Components/TextBlock.h"

void UEnemySelectionElement::SetEnemySelectionElement(FEnemyCombatEntity* aEnemyCombatEntity)
{
	FEnemyEntityData* enemyEntityData = aEnemyCombatEntity->enemyEntityData;
	
	BW_EnemyName->SetText(FText(FText::FromString(enemyEntityData->characterName)));
	BW_Healthbar->SetPercent(aEnemyCombatEntity->GetHealthPercentage());
	
	SetElementalText(BW_NullText,     enemyEntityData);
	SetElementalText(BW_FireText,     enemyEntityData);
	SetElementalText(BW_IceText,      enemyEntityData);
	SetElementalText(BW_WindText,     enemyEntityData);
	SetElementalText(BW_EarthText,    enemyEntityData);
	SetElementalText(BW_LightningText,enemyEntityData);
	SetElementalText(BW_LightText,    enemyEntityData);
	SetElementalText(BW_ShadowText,   enemyEntityData);
	
}

void UEnemySelectionElement::SetElementalText(UTextBlock* aElementalText, FEnemyEntityData* aEnemyEntityData)
{

	aElementalText->SetText(FText(FText::FromString("?")));	
}
