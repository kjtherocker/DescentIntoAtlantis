// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBehaviour.h"

#include "EnemyCombatEntity.h"
#include "SkillHandler.h"

void UEnemyBehaviour::Initialize(UEnemyCombatEntity* aEnemyCombatEntity)
{
	enemyCombatEntity = aEnemyCombatEntity;
}

int UEnemyBehaviour::EnemyToHelp(TArray<UEnemyCombatEntity*> aCombatEntity)
{
	return FMath::RandRange(0,aCombatEntity.Num()-1);
}

int UEnemyBehaviour::PlayerToAttack(TArray<UPlayerCombatEntity*> aCombatEntity)
{
	return FMath::RandRange(0,aCombatEntity.Num()-1);
}

int UEnemyBehaviour::GetCombatEntitysUsedInSkill(USkillBase* aSkill,TArray<UEnemyCombatEntity*> aEnemyCombatEntity,TArray<UPlayerCombatEntity*> aPlayerCombatentity)
{
	int entityToBeUsedOn = 0;


	switch (aSkill->skillData.skillType )
	{
	case ESkillType::None:
		break;
	case ESkillType::Attack:
		entityToBeUsedOn = PlayerToAttack(aPlayerCombatentity);
		break;
	case ESkillType::Heal:
		entityToBeUsedOn = EnemyToHelp(aEnemyCombatEntity);
		break;
	case ESkillType::PositiveCombatToken:
		entityToBeUsedOn = EnemyToHelp(aEnemyCombatEntity);
		break;
	case ESkillType::NegativeCombatToken:
		break;
	case ESkillType::HealPositiveCombatToken:
		entityToBeUsedOn = EnemyToHelp(aEnemyCombatEntity);
		break;
	case ESkillType::AttackNegativeCombatToken:
		entityToBeUsedOn = PlayerToAttack(aPlayerCombatentity);
		break;
	case ESkillType::Start:
		break;
	case ESkillType::Unique:
		break;
	}
	
	return entityToBeUsedOn;
	
}


USkillBase* UEnemyBehaviour::GetSkill()
{
	TArray<USkillBase*> enemySkills = enemyCombatEntity->combatEntityHub->skillHandler->GetAllCurrentSkills();
	
	return enemySkills[FMath::RandRange(0,enemySkills.Num()-1)];
}
