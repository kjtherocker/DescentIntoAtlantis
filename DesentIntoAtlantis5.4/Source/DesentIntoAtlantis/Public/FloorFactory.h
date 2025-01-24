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

UENUM()
enum class ETileSets
{
	None,
	Prison
};

UENUM()
enum class ETileVariants
{
	None,
	Default,
	Variant1,
	Variant2,
	Variant3,
	Variant4,
	Variant5
};

USTRUCT()
struct DESENTINTOATLANTIS_API FTileData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorNode;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FTileVariantData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TMap<ECardinalNodeDirections,FTileData> TileVariant;
};



USTRUCT()
struct DESENTINTOATLANTIS_API FTileSetCompleteData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	TMap<ETileVariants,FTileVariantData> TileSet;

};



USTRUCT()
struct DESENTINTOATLANTIS_API FAllFloorTileSet : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	TMap<ETileSets,FTileSetCompleteData> tileSetData;
};

UCLASS()
class DESENTINTOATLANTIS_API UFloorFactory : public UObject
{
	GENERATED_BODY()

	UPROPERTY()
	UDataTable* FloorDatabase;
	UPROPERTY()
	UDataTable* FloorEventDatabase;

	const int REMOVED_INDEX_OFFSET = 1;
	
public:
	void InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEventDatabase,UDataTable* aAllFloorTileSet);

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
	FAllFloorTileSet allFloorTileSet;

	UPROPERTY()
	TMap<int,FFloorEventData> floorEventData;

	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
};




