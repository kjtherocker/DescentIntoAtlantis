// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFactory.h"

#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"
#include "Engine/DataTable.h"

UEnemyFactory::UEnemyFactory()
{
}

void UEnemyFactory::InitializeDatabase(UDataTable* aEnemys, UDataTable* aEnemyGroups)
{
	UDataTable* datatableEnemys = aEnemys;
	
	for(int i = 0 ; i < datatableEnemys->GetRowMap().Num(); i ++)
	{
		allEnemys.Add(*datatableEnemys->FindRow<FEnemyEntityData>(FName(FString::FromInt(i)),FString("Searching for Enemys"),true));
	}
 
	for (FEnemyEntityData enemys : allEnemys)
	{
		enemyMap.Add(enemys.characterName,enemys);
	}
	
	UDataTable* datatableEnemyGroups = aEnemyGroups;
	
	for(int i = 0 ; i < datatableEnemyGroups->GetRowMap().Num(); i ++)
	{
		allEnemysGroups.Add(*datatableEnemyGroups->FindRow<FEnemyGroupData>(FName(FString::FromInt(i)),FString("Searching for Enemy Groups"),true));
	}

	for(int i =- 0 ; i < allEnemysGroups.Num();i++)
	{
		TArray<FString> tempEnemyNames;
		FEnemyGroupData groupData = allEnemysGroups[i];

		tempEnemyNames.Add(groupData.EnemyName1);
		tempEnemyNames.Add(groupData.EnemyName2);
		tempEnemyNames.Add(groupData.EnemyName3);
		
		enemyGroupMap.Add(groupData.GroupName, tempEnemyNames);
	}

	for(int i = 0; i < allEnemys.Num();i++)
	{
		InitializeBestiary(allEnemys[i]);
	}
}

UEnemyBestiaryData*  UEnemyFactory::GetBestiaryEntry(FString aCharacterName)
{
	return enemyBestiaryData[aCharacterName];
}

void UEnemyFactory::InitializeBestiary(FEnemyEntityData aEnemy)
{
	UEnemyBestiaryData* BestiaryData = NewObject<UEnemyBestiaryData>();
	BestiaryData->InitializeEnemyIntoBestariary();
	
	enemyBestiaryData.Add(aEnemy.characterName, BestiaryData);
}

FEnemyEntityData UEnemyFactory::ReturnEnemyEntityData(FString enemyName)
{
	return enemyMap.FindRef(enemyName);
}

TArray<FString> UEnemyFactory::ReturnEnemyGroupData(FString groupName)
{
	return enemyGroupMap.FindRef(groupName);
}

