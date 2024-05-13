// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"
#include "EnemyBeastiaryData.h"
#include "EnemyBehaviour.h"
#include "EnemyPortraitElement.h"
#include "CombatGameModeBase.h"
#include "SkillFactorySubsystem.h"

void UEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition)
{
	characterType   = ECharactertype::Enemy;
	enemyEntityData = AEnemyEntityData;

	maxHealth       = enemyEntityData.maxHealth;
	currentHealth   = enemyEntityData.maxHealth;
	currentMana     = enemyEntityData.maxMana;

	portraitPosition = aPortraitPosition;

	elementalStrength = AEnemyEntityData.ElementalStrength;
	elementalWeakness = AEnemyEntityData.ElementalWeakness;

	enemyBehaviour = NewObject<UEnemyBehaviour>();
	enemyBehaviour->Initialize(this);
	
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData.Skill1));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData.Skill2));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData.Skill3));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData.Skill4));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData.Skill5));
	
	
	SetAbilityScores();
}

void UEnemyCombatEntity::Death()
{
	UCombatEntity::Death();

	wasKilled.Broadcast();
}

float UEnemyCombatEntity::GetHealthPercentage()
{
	return (float)currentHealth / (float)enemyEntityData.maxHealth;
}

PressTurnReactions UEnemyCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	beastiaryData->RevealElementalInfo(aSkill.elementalType);
	return UCombatEntity::DecrementHealth(aAttacker, aSkill);
}

void UEnemyCombatEntity::SetAbilityScores()
{
	abilityScoreMap[EAbilityScoreTypes::Strength]->base    =  enemyEntityData.baseStrength;
	abilityScoreMap[EAbilityScoreTypes::Magic]->base       =  enemyEntityData.baseMagic;
	abilityScoreMap[EAbilityScoreTypes::Hit]->base         =  enemyEntityData.baseHit;
	abilityScoreMap[EAbilityScoreTypes::Evasion]->base     =  enemyEntityData.baseEvasion;
	abilityScoreMap[EAbilityScoreTypes::Defence]->base     =  enemyEntityData.baseDefence;
	abilityScoreMap[EAbilityScoreTypes::Resistance]->base  =  enemyEntityData.baseResistance;
}
