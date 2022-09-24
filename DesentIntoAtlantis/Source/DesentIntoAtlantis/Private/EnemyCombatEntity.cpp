// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"

void FEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData* AEnemyEntityData)
{
	enemyEntityData = AEnemyEntityData;
	currentHealth = enemyEntityData->maxHealth;
	currentMana = enemyEntityData->maxHealth;
	SetAbilityScores();
}

float FEnemyCombatEntity::GetHealthPercentage()
{
	return currentHealth / enemyEntityData->maxHealth;
}

void FEnemyCombatEntity::SetAbilityScores()
{
	StrengthAbilityScore.base    =  enemyEntityData->baseStrength;
	MagicAbilityScore.base       =  enemyEntityData->baseMagic;
	HitAbilityScore.base         =  enemyEntityData->baseHit;
	EvasionAbilityScore.base     =  enemyEntityData->baseEvasion;
	DefenceAbilityScore.base     =  enemyEntityData->baseDefence;
	ResistanceAbilityScore.base  =  enemyEntityData->baseResistance;
}
