// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatStatView.h"

#include "PlayerCombatStat.h"

void UCombatStatView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	letterGrade.Add(1,"A");
	letterGrade.Add(2,"B");
	letterGrade.Add(3,"C");
	letterGrade.Add(4,"D");
	letterGrade.Add(5,"E");
}

void UCombatStatView::SetCombatStatView(UCombatEntity* CombatEntity)
{
	
}

void UCombatStatView::SetPlayerStatView(UPlayerCombatEntity* aPlayerCombatEntity, UCombatClass* aCombatClass)
{
	
	SetGrowthElement("STR",EStatTypes::Strength,BW_STR_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	SetGrowthElement("MAG",EStatTypes::Magic,BW_MAG_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	SetGrowthElement("HIT",EStatTypes::Hit,BW_Hit_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	SetGrowthElement("EVA",EStatTypes::Evasion,BW_EVA_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	SetGrowthElement("DEF",EStatTypes::Defence,BW_DEF_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	SetGrowthElement("RES",EStatTypes::Resistance,BW_RES_StatGrowthElement,aPlayerCombatEntity,aCombatClass);
	
}

void UCombatStatView::SetGrowthElement(FString aStatName,EStatTypes aStatType,UStatGrowthElement* aStatGrowthElement, UPlayerCombatEntity* aPlayerCombatEntity,
	UCombatClass* aCombatClass)
{
	TMap<EStatTypes, UCombatStat*> abilityStatScores    = aPlayerCombatEntity->abilityScoreMap;
	FPlayerIdentityData PlayerIdentityData = aPlayerCombatEntity->playerIdentityData;
	
	UPlayerCombatStats* playerCombatStats = Cast<UPlayerCombatStats>(abilityStatScores[aStatType]);

	int StatGrowth = PlayerIdentityData.playerStatGrowths.baseStats[aStatType];
	FString  letterGradeText  = letterGrade[StatGrowth];
	FString  DamageNumberText = FString::FromInt(playerCombatStats->GetAllStats());

	aStatGrowthElement->SetStatGrowthElement(letterGradeText,aStatName,DamageNumberText);
}
