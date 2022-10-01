// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"

#include "EnemyPortraitElement.h"

void FEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData* AEnemyEntityData)
{
	characterType   = Enemy;
	enemyEntityData = AEnemyEntityData;
	currentHealth   = enemyEntityData->maxHealth;
	currentMana     = enemyEntityData->maxMana;
	SetAbilityScores();
}

PressTurnReactions FEnemyCombatEntity::DecrementHealth(int aDecrementby, EElementalType aElementalType)
{
	PressTurnReactions reaction = PressTurnReactions::Normal;
	    
	if (aElementalType == enemyEntityData->ElementalWeakness)
	{
		aDecrementby = aDecrementby * 1.5;
		reaction =  PressTurnReactions::Weak;
	}
	if (aElementalType == enemyEntityData->ElementalStrength)
	{
		aDecrementby = aDecrementby * 0.6;
		reaction =  PressTurnReactions::Strong;
	}

	currentHealth -= aDecrementby;
	DeathCheck();

	enemyEntityData->imageBodyPortrait->isTriggeringHitEffect = true;
	
	return reaction;
}

float FEnemyCombatEntity::GetHealthPercentage()
{
	return (float)currentHealth / (float)enemyEntityData->maxHealth;
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
