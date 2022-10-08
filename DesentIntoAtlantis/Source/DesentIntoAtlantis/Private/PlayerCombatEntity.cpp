// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"

#include "PartyHealthbarElement.h"


void FPlayerCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
	characterType = ECharactertype::Ally;
	baseClass = NewObject<UCombatClass>(); 
	baseClass->InitializeDataTable(classDataTablePath, aSkillFactory,this);

	maxHealth         = baseClass->currentClassLevel->maxHealth;
	currentHealth     = maxHealth;
	ElementalStrength = baseClass->currentClassLevel->ElementalStrength;
	ElementalWeakness = baseClass->currentClassLevel->ElementalWeakness;
	
	SetAbilityScores();
}

void FPlayerCombatEntity::SetAbilityScores()
{
	StrengthAbilityScore.base    = baseClass->currentClassLevel->baseStrength;
	MagicAbilityScore.base       = baseClass->currentClassLevel->baseMagic;
	HitAbilityScore.base         = baseClass->currentClassLevel->baseHit;
	EvasionAbilityScore.base     = baseClass->currentClassLevel->baseEvasion;
	DefenceAbilityScore.base     = baseClass->currentClassLevel->baseDefence;
	ResistanceAbilityScore.base  = baseClass->currentClassLevel->baseResistance;
}

void FPlayerCombatEntity::ActivateDamageHitEffect()
{
	FCombatEntity::ActivateDamageHitEffect();
	partyHealthbarElement->UpdateHealthBar();
}


float FPlayerCombatEntity::GetHealthPercentage()
{
	float currentValue = currentHealth;
	float maxValue     = baseClass->currentClassLevel->maxHealth;
    
	return currentValue / maxValue;
}

float FPlayerCombatEntity::GetManaPercentage()
{
	float currentValue = currentMana;
	float maxValue     = baseClass->currentClassLevel->maxMana;
    
	return currentValue / maxValue;
}
