// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"

#include "EnemyBehaviour.h"
#include "EnemyPortraitElement.h"
#include "SkillFactory.h"

void FEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData* AEnemyEntityData,USkillFactory * skillFactory)
{
	characterType   = ECharactertype::Enemy;
	enemyEntityData = AEnemyEntityData;

	maxHealth       = enemyEntityData->maxHealth;
	currentHealth   = enemyEntityData->maxHealth;
	currentMana     = enemyEntityData->maxMana;

	ElementalStrength = AEnemyEntityData->ElementalStrength;
	ElementalWeakness = AEnemyEntityData->ElementalWeakness;

	enemyBehaviour = NewObject<UEnemyBehaviour>();
	enemyBehaviour->Initialize(this);
	
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData->Skill1));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData->Skill2));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData->Skill3));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData->Skill4));
	enemySkills.Add(skillFactory->GetSkill(enemyEntityData->Skill5));
	
	SetAbilityScores();
}

void FEnemyCombatEntity::Death()
{
	FCombatEntity::Death();

	imageBodyPortrait->BW_Portrait->SetOpacity(0);
}

void FEnemyCombatEntity::ActivateDamageHitEffect()
{
	FCombatEntity::ActivateDamageHitEffect();
	imageBodyPortrait->isTriggeringHitEffect = true;
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
