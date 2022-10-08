// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBehaviour.h"

#include "EnemyCombatEntity.h"

void UEnemyBehaviour::Initialize(FEnemyCombatEntity* aEnemyCombatEntity)
{
	enemyCombatEntity = aEnemyCombatEntity;
}

int UEnemyBehaviour::PlayerToAttack(TArray<FCombatEntity*> aCombatEntity)
{
	return FMath::RandRange(0,aCombatEntity.Num()-1);
}



FSkills_Base* UEnemyBehaviour::GetSkill()
{
	TArray<FSkills_Base*> enemySkills = enemyCombatEntity->enemySkills;
	
	return enemySkills[FMath::RandRange(0,enemySkills.Num()-1)];
}
