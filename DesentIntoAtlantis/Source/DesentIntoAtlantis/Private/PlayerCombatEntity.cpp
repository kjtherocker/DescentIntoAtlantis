// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"



void FPlayerCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
	currentClass = NewObject<UCombatClass>(); 
	currentClass->InitializeDataTable(classDataTablePath, aSkillFactory,this);

	
	SetAbilityScores();
}

void FPlayerCombatEntity::SetAbilityScores()
{
	StrengthAbilityScore.base    = currentClass->currentClassLevel->baseStrength;
	MagicAbilityScore.base       = currentClass->currentClassLevel->baseMagic;
	HitAbilityScore.base         = currentClass->currentClassLevel->baseHit;
	EvasionAbilityScore.base     = currentClass->currentClassLevel->baseEvasion;
	DefenceAbilityScore.base     = currentClass->currentClassLevel->baseDefence;
	ResistanceAbilityScore.base  = currentClass->currentClassLevel->baseResistance;
}


float FPlayerCombatEntity::GetHealthPercentage()
{
	float currentValue = currentHealth;
	float maxValue     = currentClass->currentClassLevel->maxHealth;
    
	return currentValue / maxValue;
}

float FPlayerCombatEntity::GetManaPercentage()
{
	float currentValue = currentMana;
	float maxValue     = currentClass->currentClassLevel->maxMana;
    
	return currentValue / maxValue;
}
