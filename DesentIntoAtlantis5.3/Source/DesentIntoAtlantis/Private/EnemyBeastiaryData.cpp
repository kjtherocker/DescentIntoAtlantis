// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"


void FEnemyBestiary::InitializeBestiary()
{
	if(!hasBeenInitialized)
	{
		hasBeenInitialized = true;
		enemyElementalInfo.Add(EElementalType::Fire,false);
		enemyElementalInfo.Add(EElementalType::Ice,false);
		enemyElementalInfo.Add(EElementalType::Light,false);
		enemyElementalInfo.Add(EElementalType::Lighting,false);
		enemyElementalInfo.Add(EElementalType::Null,false);
		enemyElementalInfo.Add(EElementalType::Shadow,false);
		enemyElementalInfo.Add(EElementalType::Wind,false);
		enemyElementalInfo.Add(EElementalType::Earth,false);
	}
}

void FEnemyBestiary::RevealElementalInfo(EElementalType aElementToReveal)
{
	enemyElementalInfo[aElementToReveal] = true;
}

bool FEnemyBestiary::GetRevealedElementalType(EElementalType aElementToReveal)
{
	return enemyElementalInfo[aElementToReveal];
}

void UEnemyBestiaryData::InitializeEnemyIntoBestariary()
{
	enemyBestiary.InitializeBestiary();
}




