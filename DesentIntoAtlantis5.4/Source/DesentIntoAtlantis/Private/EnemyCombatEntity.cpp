// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"

#include "CombatEntityHub.h"
#include "EnemyBeastiaryData.h"
#include "EnemyBehaviour.h"
#include "EnemyPortraitElement.h"
#include "CombatGameModeBase.h"
#include "CombatStat.h"
#include "ElementalHandler.h"
#include "Health.h"
#include "SkillFactorySubsystem.h"

void UEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition)
{
	characterType   = ECharactertype::Enemy;
	enemyEntityData = AEnemyEntityData;
	
	currentMana     = enemyEntityData.maxMana;

	portraitPosition = aPortraitPosition;
	
	combatEntityHub->elementalHandler->LoadSavedInfo(AEnemyEntityData.CompleteElementalHandlerData);
	
	enemyBehaviour = NewObject<UEnemyBehaviour>();
	enemyBehaviour->Initialize(this);

	for(int i = 0 ; i < enemyEntityData.skillIDS.Num();i++)
	{
		enemySkills.Add(skillFactory->GetSkill(enemyEntityData.skillIDS[i]));
	}
	
	health->InitializeHealth(AEnemyEntityData.HealthData,this);
	
	SetAbilityScores();
}

void UEnemyCombatEntity::Death()
{
	UCombatEntity::Death();

	wasKilled.Broadcast();
}

FCombatLog_AttackDefense_Data UEnemyCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	beastiaryData->RevealElementalInfo(aSkill.elementalType);
	return UCombatEntity::DecrementHealth(aAttacker, aSkill);
}

FString UEnemyCombatEntity::GetEntityName()
{
	return enemyEntityData.characterName;
}

void UEnemyCombatEntity::SetAbilityScores()
{
	abilityScoreMap[EStatTypes::Strength]->base    =  enemyEntityData.baseStats[EStatTypes::Strength];
	abilityScoreMap[EStatTypes::Magic]->base       =  enemyEntityData.baseStats[EStatTypes::Magic];
	abilityScoreMap[EStatTypes::Hit]->base         =  enemyEntityData.baseStats[EStatTypes::Hit];
	abilityScoreMap[EStatTypes::Evasion]->base     =  enemyEntityData.baseStats[EStatTypes::Evasion];
	abilityScoreMap[EStatTypes::Defence]->base     =  enemyEntityData.baseStats[EStatTypes::Defence];
	abilityScoreMap[EStatTypes::Resistance]->base  =  enemyEntityData.baseStats[EStatTypes::Resistance];
}
