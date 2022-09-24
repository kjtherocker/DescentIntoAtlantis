// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFactory.h"

#include "EnemyCombatEntity.h"
#include "Engine/DataTable.h"

UEnemyFactory::UEnemyFactory()
{
	static ConstructorHelpers::FObjectFinder<UObject> skillDatatable(TEXT("DataTable'/Game/Datatables/Atlantis_-_Enemys.Atlantis_-_Enemys'"));
	if (skillDatatable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( skillDatatable.Object);
		
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			allEnemys.Add(datatable->FindRow<FEnemyEntityData>(FName(FString::FromInt(i)),FString("Searching for Enemys"),true));
		}
 
		for (FEnemyEntityData* skills : allEnemys)
		{
			enemyMap.Add(skills->characterName,skills);
		}
	}

	static ConstructorHelpers::FObjectFinder<UObject> enemyGroupDatTable(TEXT("DataTable'/Game/Datatables/Atlantis_-_EnemyGroup.Atlantis_-_EnemyGroup'"));
	if (enemyGroupDatTable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( enemyGroupDatTable.Object);
		
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			allEnemysGroups.Add(datatable->FindRow<FEnemyGroupData>(FName(FString::FromInt(i)),FString("Searching for Enemy Groups"),true));
		}

		for(int i =- 0 ; i < allEnemysGroups.Num();i++)
		{
			TArray<FString> tempEnemyNames;
			FEnemyGroupData* groupData = allEnemysGroups[i];

			tempEnemyNames.Add(groupData->EnemyName1);
			tempEnemyNames.Add(groupData->EnemyName2);
			tempEnemyNames.Add(groupData->EnemyName3);
			
			enemyGroupMap.Add(groupData->GroupName, tempEnemyNames);
		}
		
	}
	
}

FEnemyEntityData* UEnemyFactory::ReturnEnemyEntityData(FString enemyName)
{
	return enemyMap.FindRef(enemyName);
}

TArray<FString> UEnemyFactory::ReturnEnemyGroupData(FString groupName)
{
	return enemyGroupMap.FindRef(groupName);
}
