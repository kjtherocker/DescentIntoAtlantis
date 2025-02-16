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
			allEnemys.Add(*datatableEnemys->FindRow<FEnemyEntityCompleteData>(Element,FString("Searching for Enemys"),true));
		}
	}
 
	for (FEnemyEntityCompleteData enemys : allEnemys)
	{
		enemyMap.Add(enemys.EnemyLabelID,enemys);
	}
	
	UDataTable* datatableEnemyGroups = aEnemyGroups;

	if(datatableEnemyGroups)
	{
		for (auto Element : datatableEnemyGroups->GetRowNames())
		{
			FEnemyGroupData EnemyGroupData = *datatableEnemyGroups->FindRow<FEnemyGroupData>(Element,FString("Searching for Enemy Groups"),true);

			enemyGroupMap.Add(EnemyGroupData.GroupName,EnemyGroupData);
		}
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

FEnemyBestiary*  UEnemyFactorySubSystem::GetBestiaryEntry(EEnemyLabelID aCharacterName)
{
	return &completeBestiaryData.enemyBestiaryData[aCharacterName];
}

void UEnemyFactorySubSystem::InitializeBestiary(FEnemyEntityCompleteData aEnemy)
{
	FEnemyBestiary BestiaryData;
	BestiaryData.InitializeBestiary();
	
	completeBestiaryData.enemyBestiaryData.Add(aEnemy.EnemyLabelID, BestiaryData);
}

void UEnemyFactorySubSystem::LoadSavedBestiary(FCompleteBestiaryData aCompleteBestiaryData)
{
	for (TTuple<EEnemyLabelID, FEnemyBestiary> Element : aCompleteBestiaryData.enemyBestiaryData)
	{
		completeBestiaryData.enemyBestiaryData[Element.Key].enemyElementalInfo = Element.Value.enemyElementalInfo;
	}
}

FEnemyEntityCompleteData UEnemyFactorySubSystem::FEnemyEntityDataReturnEnemyEntityData(EEnemyLabelID aEnemyName)
{
	return enemyMap.FindRef(aEnemyName);
}

FEnemyGroupData UEnemyFactorySubSystem::ReturnEnemyGroupData(FString aGroupName)
{
	return enemyGroupMap.FindRef(aGroupName);
}

