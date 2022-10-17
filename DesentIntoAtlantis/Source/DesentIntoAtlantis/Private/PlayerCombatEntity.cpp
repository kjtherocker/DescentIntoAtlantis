// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"

#include "PartyHealthbarElement.h"


void UPlayerCombatEntity::SetPlayerEntity(FPlayerEntityData aPlayerEntityData)
{
	playerEntityData = aPlayerEntityData;
}

void UPlayerCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
	Super::SetTacticsEntity(aSkillFactory);
	characterType = ECharactertype::Ally;
	skillFactory = aSkillFactory;
}

void UPlayerCombatEntity::SetPlayerClass(UDataTable*  EDataTableClasses)
{
	baseClass = NewObject<UCombatClass>(); 
	baseClass->InitializeDataTable(EDataTableClasses, skillFactory,this);

	maxHealth         = baseClass->currentClassLevel.maxHealth;
	currentHealth     = maxHealth;
	ElementalStrength = baseClass->currentClassLevel.ElementalStrength;
	ElementalWeakness = baseClass->currentClassLevel.ElementalWeakness;
	
	SetAbilityScores();
}

void UPlayerCombatEntity::SetAbilityScores()
{
	StrengthAbilityScore.base    = baseClass->currentClassLevel.baseStrength;
	MagicAbilityScore.base       = baseClass->currentClassLevel.baseMagic;
	HitAbilityScore.base         = baseClass->currentClassLevel.baseHit;
	EvasionAbilityScore.base     = baseClass->currentClassLevel.baseEvasion;
	DefenceAbilityScore.base     = baseClass->currentClassLevel.baseDefence;
	ResistanceAbilityScore.base  = baseClass->currentClassLevel.baseResistance;
}

void UPlayerCombatEntity::ActivateDamageHitEffect()
{
	UCombatEntity::ActivateDamageHitEffect();
	partyHealthbarElement->UpdateHealthBar();
}


float UPlayerCombatEntity::GetHealthPercentage()
{
	float currentValue = currentHealth;
	float maxValue     = baseClass->currentClassLevel.maxHealth;
    
	return currentValue / maxValue;
}

float UPlayerCombatEntity::GetManaPercentage()
{
	float currentValue = currentMana;
	float maxValue     = baseClass->currentClassLevel.maxMana;
    
	return currentValue / maxValue;
}
