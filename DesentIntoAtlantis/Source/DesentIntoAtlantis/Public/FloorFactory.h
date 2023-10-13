// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DesentIntoAtlantis/FloorBase.h"
#include "UObject/NoExportTypes.h"
#include "FloorFactory.generated.h"

class UDataTable;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UFloorFactory : public UObject
{
	GENERATED_BODY()

	UDataTable* FloorDatabase;
	UDataTable* FloorEventDatabase;

	const int REMOVED_INDEX_OFFSET = 1;
	
public:
	void InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEventDatabase);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void OverwriteFloorMapData(EFloorIdentifier aOverwrittenFloor, TArray<int> aNewMapData);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void OverwriteFloorEventData(int aFloorEventDataTableIndex, FFloorEventData aNewEventData);
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void CreateNewFloorEventRow(FFloorEventData aNewEventData);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
    void DeleteFloorEventRow(int aRowIndex);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void ReOrderFloorEventRow(int aRemovedIndex);
	
	UPROPERTY()
	TArray<FFloorData> floorData;

	UPROPERTY()
	TMap<int,FFloorEventData> floorEventData;

	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
};




