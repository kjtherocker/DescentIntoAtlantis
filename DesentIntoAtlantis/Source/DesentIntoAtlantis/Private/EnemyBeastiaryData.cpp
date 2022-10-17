// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"
#include "EnemyBeastiaryData.h"



void UEnemyBestiaryData::InitializeEnemyIntoBestariary()
{
	

	enemyElementalInfo.Add(EElementalType::Fire,false);
	enemyElementalInfo.Add(EElementalType::Ice,false);
	enemyElementalInfo.Add(EElementalType::Light,false);
	enemyElementalInfo.Add(EElementalType::Lighting,false);
	enemyElementalInfo.Add(EElementalType::Null,false);
	enemyElementalInfo.Add(EElementalType::Shadow,false);
	enemyElementalInfo.Add(EElementalType::Wind,false);
	enemyElementalInfo.Add(EElementalType::Earth,false);


}

void UEnemyBestiaryData::RevealElementalInfo( EElementalType aElementToReveal)
{
	enemyElementalInfo[aElementToReveal] = true;
}

bool UEnemyBestiaryData::GetRevealedElementalType(EElementalType aElementToReveal)
{
	return enemyElementalInfo[aElementToReveal];
}



