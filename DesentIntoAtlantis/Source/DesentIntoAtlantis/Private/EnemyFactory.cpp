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
}

FEnemyEntityData* UEnemyFactory::ReturnEnemyEntityData(FString enemyName)
{
	return enemyMap.FindRef(enemyName);
}
