// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorFactory.h"

void UFloorFactory::InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEventDatabase)
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
	for(int i = 0 ; i < datatable2->GetRowMap().Num(); i ++)
	{
		floorEventData.Add( i,*datatable2->FindRow<FFloorEventData>(FName(FString::FromInt(i)),FString("Searching for Floors Events"),true));
	}

	int amountOfloorEventData = floorEventData.Num();
	
	for(int i = 0 ; i < amountOfloorEventData; i++)
	{
		floorDictionary[floorEventData[i].floorIdentifier]->floorEventData.Add(floorEventData[i].positionInGrid,floorEventData[i]);
	}
}

void UFloorFactory::OverwriteFloorMapData(EFloorIdentifier aOverwrittenFloor,TArray<int> aNewMapData)
{
	UDataTable* DataTable = FloorDatabase;

	int currentFloorIndex =static_cast<int>(aOverwrittenFloor) -1;
	// Iterate through the rows in the DataTable
	FFloorData* FloorData = DataTable->FindRow<FFloorData>(FName(FString::FromInt(currentFloorIndex)), FString("Searching for Floors"), true);
	if (FloorData)
	{
		// Update the specified column with the new TArray<int32>
		FloorData->floorBlueprint = aNewMapData;
	}

	
}

void UFloorFactory::OverwriteFloorEventData(int aFloorEventDataTableIndex, FFloorEventData aNewEventData)
{
	UDataTable* DataTable = FloorEventDatabase;
	
	int currentFloorIndex = aFloorEventDataTableIndex;
	// Iterate through the rows in the DataTable
	FFloorEventData* FloorData = DataTable->FindRow<FFloorEventData>(FName(FString::FromInt(currentFloorIndex)), FString("Searching for Floors"), true);
	if (FloorData)
	{
		// Update the specified column with the new TArray<int32>
		*FloorData = aNewEventData;

		DataTable->PostEditChange();
		DataTable->PostLoad();
		
	}
}

void UFloorFactory::CreateNewFloorEventRow(FFloorEventData aNewEventData)
{
	UDataTable* dataTable = FloorEventDatabase;
	int floorMaxIndex     = dataTable->GetRowMap().Num();

	dataTable->AddRow(FName(FString::FromInt(floorMaxIndex)),aNewEventData);
	dataTable->PostEditChange();
	dataTable->PostLoad();
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
			datatable->PostEditChange();
			datatable->PostLoad();
		}
	}
}
