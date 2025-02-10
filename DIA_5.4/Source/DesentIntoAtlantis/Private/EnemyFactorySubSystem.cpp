// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFactorySubSystem.h"

#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"
#include "Engine/DataTable.h"



void UEnemyFactorySubSystem::InitializeDatabase(UDataTable* aEnemys, UDataTable* aEnemyGroups)
{
	UDataTable* datatableEnemys = aEnemys;


	if(datatableEnemys)
	{
		for (auto Element : datatableEnemys->GetRowNames())
		{
			allEnemys.Add(*datatableEnemys->FindRow<FEnemyEntityData>(Element,FString("Searching for Enemys"),true));
		}
	}
 
	for (FEnemyEntityData enemys : allEnemys)
	{
		enemyMap.Add(enemys.characterName,enemys);
	}
	
	UDataTable* datatableEnemyGroups = aEnemyGroups;

	if(datatableEnemyGroups)
	{
		for (auto Element : datatableEnemyGroups->GetRowNames())
		{
			allEnemysGroups.Add(*datatableEnemyGroups->FindRow<FEnemyGroupData>(Element,FString("Searching for Enemy Groups"),true));
		}
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

void UEnemyFactorySubSystem::BestiaryDataHasChangedBroadcast()
{
	bestiaryDataHasChanged.Broadcast(completeBestiaryData);
}

FEnemyBestiary*  UEnemyFactorySubSystem::GetBestiaryEntry(FString aCharacterName)
{
	return &completeBestiaryData.enemyBestiaryData[aCharacterName];
}

void UEnemyFactorySubSystem::InitializeBestiary(FEnemyEntityData aEnemy)
{
	FEnemyBestiary BestiaryData;
	BestiaryData.InitializeBestiary();
	
	completeBestiaryData.enemyBestiaryData.Add(aEnemy.characterName, BestiaryData);
}

void UEnemyFactorySubSystem::LoadSavedBestiary(FCompleteBestiaryData aCompleteBestiaryData)
{
	for (TTuple<FString, FEnemyBestiary> Element : aCompleteBestiaryData.enemyBestiaryData)
	{
		completeBestiaryData.enemyBestiaryData[Element.Key].enemyElementalInfo = Element.Value.enemyElementalInfo;
	}
}

FEnemyEntityData UEnemyFactorySubSystem::FEnemyEntityDataReturnEnemyEntityData(FString aEnemyName)
{
	return enemyMap.FindRef(aEnemyName);
}

TArray<FString> UEnemyFactorySubSystem::ReturnEnemyGroupData(FString aGroupName)
{
	return enemyGroupMap.FindRef(aGroupName);
}

