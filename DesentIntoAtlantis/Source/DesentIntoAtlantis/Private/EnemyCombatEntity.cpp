// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"
#include "EnemyBeastiaryData.h"
#include "EnemyBehaviour.h"
#include "EnemyPortraitElement.h"
#include "SkillFactory.h"

void UEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactory * skillFactory)
{
	characterType   = ECharactertype::Enemy;
	enemyEntityData = AEnemyEntityData;

	maxHealth       = enemyEntityData.maxHealth;
	currentHealth   = enemyEntityData.maxHealth;
	currentMana     = enemyEntityData.maxMana;

	ElementalStrength = AEnemyEntityData.ElementalStrength;
	ElementalWeakness = AEnemyEntityData.ElementalWeakness;

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

	imageBodyPortrait->BW_Portrait->SetOpacity(0);
}

void UEnemyCombatEntity::ActivateDamageHitEffect()
{
	UCombatEntity::ActivateDamageHitEffect();
	imageBodyPortrait->isTriggeringHitEffect = true;
}

float UEnemyCombatEntity::GetHealthPercentage()
{
	return (float)currentHealth / (float)enemyEntityData.maxHealth;
}

PressTurnReactions UEnemyCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkills_Base aSkill)
{
	enemyBestiaryData->RevealElementalInfo(aSkill.elementalType);
	return UCombatEntity::DecrementHealth(aAttacker, aSkill);
}

void UEnemyCombatEntity::SetAbilityScores()
{
	StrengthAbilityScore.base    =  enemyEntityData.baseStrength;
	MagicAbilityScore.base       =  enemyEntityData.baseMagic;
	HitAbilityScore.base         =  enemyEntityData.baseHit;
	EvasionAbilityScore.base     =  enemyEntityData.baseEvasion;
	DefenceAbilityScore.base     =  enemyEntityData.baseDefence;
	ResistanceAbilityScore.base  =  enemyEntityData.baseResistance;
}
