// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorFactory.h"

void UFloorFactory::InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEventDatabase,UDataTable* aAllFloorTileSet)
{
	FloorDatabase = aFloorDatabase;
	
	UDataTable* datatable = aFloorDatabase;

	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		floorData.Add(*datatable->FindRow<FFloorData>(FName(FString::FromInt(i)),FString("Searching for Floors"),true));

		UFloorBase* floorBase = NewObject<UFloorBase>();
		floorBase->floorData = floorData[i];
		
		floorDictionary.Add(floorData[i].floorIdentifier,floorBase);
	}

	FloorEventDatabase = aFloorEventDatabase;
	UDataTable* datatable2 = aFloorEventDatabase;
	int iterator = 0;
	for (auto Element : datatable2->GetRowNames())
	{
		floorEventData.Add( iterator,*datatable2->FindRow<FFloorEventData>(FName(Element),FString("Searching for TileSet"),true));
		iterator++;
	}


	UDataTable*  floorTileSet = aAllFloorTileSet;
	if(floorTileSet)
	{
		for (auto Element : floorTileSet->GetRowNames())
		{
			allFloorTileSet = *floorTileSet->FindRow<FAllFloorTileSet>(FName(Element),FString("Searching for TileSet"),true) ;
		}
	}
	
	int amountOfloorEventData = floorEventData.Num();
	
	for(int i = 0 ; i < amountOfloorEventData; i++)
	{
		floorDictionary[floorEventData[i].floorIdentifier]->floorEventData.Add(floorEventData[i].positionInGrid,floorEventData[i]);
	}

	for (TTuple<EFloorIdentifier, UFloorBase*> Element : floorDictionary)
	{
		TArray<FTeleporterGimmick>     teleporterGimmick      = Element.Value->floorData.teleporterGimmicks;
		TArray<FForcedMovementGimmick> forcedMovementGimmicks = Element.Value->floorData.forcedMovementGimmick;
		TArray<FChestGimmickData>      ChestGimmickDatas      = Element.Value->floorData.chestGimmick;
		Element.Value->doorGimmicks                           = Element.Value->floorData.doorGimmick;
		

		Element.Value->floorEnemyPawns =  Element.Value->floorData.EnemyPawns;
		Element.Value->SetForcedMovementGimmickData(forcedMovementGimmicks);
		Element.Value->SetTeleporterGimmickData(teleporterGimmick);
		Element.Value->SetChestData(ChestGimmickDatas);
	}
}

void UFloorFactory::OverwriteFloorMapData(EFloorIdentifier aOverwrittenFloor,TArray<FWorldGenerationFloorNodeInfo> aNewMapData)
{
	UDataTable* DataTable = FloorDatabase;

	int currentFloorIndex =static_cast<int>(aOverwrittenFloor) -1;
	// Iterate through the rows in the DataTable
	FFloorData* FloorData = DataTable->FindRow<FFloorData>(FName(FString::FromInt(currentFloorIndex)), FString("Searching for Floors"), true);
	if (FloorData)
	{
		// Update the specified column with the new TArray<int32>
		FloorData->floorBlueprint = aNewMapData;
		DataTable->PostLoad();
		DataTable->Modify();
	}
}

void UFloorFactory::OverwriteFloorEventData(int aFloorEventDataTableIndex, FFloorEventData aNewEventData)
{
	UDataTable* DataTable = FloorEventDatabase;
	
	int currentFloorIndex = aFloorEventDataTableIndex;
	// Iterate through the rows in the DataTable
	if(aFloorEventDataTableIndex != -1)
	{
		FFloorEventData* FloorData = DataTable->FindRow<FFloorEventData>(FName(FString::FromInt(currentFloorIndex)), FString("Searching for Floors"), true);
		if (FloorData)
		{
			// Update the specified column with the new TArray<int32>
			*FloorData = aNewEventData;


			DataTable->PostLoad();
			DataTable->Modify();
		}
	}
	else
	{
		//FFloorEventData NewFloorData = aNewEventData;  // Make a copy of the struct
		//DataTable->AddRow( FName(aNewEventData.enemyGroupName+ " " + FString::FromInt(DataTable->GetRowNames().Num())), NewFloorData);
		//DataTable->Modify();

	}


}

void UFloorFactory::CreateNewFloorEventRow(FFloorEventData aNewEventData)
{
	UDataTable* dataTable = FloorEventDatabase;
	int floorMaxIndex     = dataTable->GetRowMap().Num();

	dataTable->AddRow(FName(FString::FromInt(floorMaxIndex)),aNewEventData);
	dataTable->PostLoad();
	dataTable->Modify();
}

void UFloorFactory::DeleteFloorEventRow(int aRowIndex)
{
	UDataTable* DataTable = FloorEventDatabase;
	DataTable->RemoveRow(FName(FString::FromInt(aRowIndex)));

	ReOrderFloorEventRow(aRowIndex);
}

void UFloorFactory::ReOrderFloorEventRow(int aRemovedIndex)
{
	UDataTable* datatable = FloorEventDatabase;

	for(int i = aRemovedIndex + REMOVED_INDEX_OFFSET;i  <= datatable->GetRowMap().Num();i++)
	{
		FFloorEventData* RowData = datatable->FindRow<FFloorEventData>(FName(FString::FromInt(i)),FString("Searching for Floors Events"),true);
		FFloorEventData RowDataCopy = *RowData;
		if (RowData)
		{
			// Remove the old row
			datatable->RemoveRow(FName(FString::FromInt(i)));

			// Re-insert the row with the new name
			datatable->AddRow(FName(FString::FromInt(i - REMOVED_INDEX_OFFSET)), RowDataCopy);

			// Ensure the new row is properly saved
			datatable->Modify();
			datatable->PostLoad();
		}
	}
}
