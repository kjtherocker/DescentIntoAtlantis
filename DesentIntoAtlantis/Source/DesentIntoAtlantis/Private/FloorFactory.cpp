// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorFactory.h"

void UFloorFactory::InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEnemyDatabase)
{
	UDataTable* datatable = aFloorDatabase;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		floorData.Add(*datatable->FindRow<FFloorData>(FName(FString::FromInt(i)),FString("Searching for Floors"),true));

		UFloorBase* floorBase = NewObject<UFloorBase>();
		floorBase->floorData = floorData[i];
		
		floorDictionary.Add(floorData[i].floorIdentifier,floorBase);
	}

	UDataTable* datatable2 = aFloorEnemyDatabase;
	for(int i = 0 ; i < datatable2->GetRowMap().Num(); i ++)
	{
		floorEnemyData.Add(*datatable2->FindRow<FFloorEventData>(FName(FString::FromInt(i)),FString("Searching for Floors Events"),true));
	}

	for(int i = 0 ; i < floorEnemyData.Num(); i++)
	{
		floorDictionary[floorEnemyData[i].floorIdentifier]->floorEventData.Add(floorEnemyData[i].positionInGrid,floorEnemyData[i]);
	}
}
