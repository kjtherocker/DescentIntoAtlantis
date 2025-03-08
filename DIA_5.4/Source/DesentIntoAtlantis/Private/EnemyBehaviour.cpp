// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBehaviour.h"

#include "EnemyCombatEntity.h"

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



USkillBase* UEnemyBehaviour::GetSkill()
{
	TArray<USkillBase*> enemySkills = enemyCombatEntity->enemySkills;
	
	return enemySkills[FMath::RandRange(0,enemySkills.Num()-1)];
}
