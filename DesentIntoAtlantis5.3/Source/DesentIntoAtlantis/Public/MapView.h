// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "MapView.generated.h"

struct FNodeMapData;
class ULevelProgressionSubsystem;
enum class ECardinalNodeDirections;
class AFloorPawn;
class UUniformGridSlot;
class FPlayerHasMoved;
class UMapPlayerIconElement;
class UImage;
class UUniformGridPanel;
class UMapButtonElement;
class UFloorBase;
enum class EFloorIdentifier;
class UFloorFactory;
/**
 * 
 */

UCLASS()
class DESENTINTOATLANTIS_API UMapView : public UBaseUserWidget
{
	GENERATED_BODY()
	const int MAP_NODE_POSITION_OFFSET = 0;
	const int MAP_NODE_PLAYER_GRID_SIZE = 9;
	void CreateFullGrid(UFloorBase* aFloor);
	void CreatePlayerGrid(UFloorBase* aFloor);

	void SpawnMapButton(int aRow, int aColumn, int aIndex);
	UUniformGridSlot* playerIconGridSlot;
	UFloorBase* currentFloor;

	ULevelProgressionSubsystem* levelProgressionSubsystem;
public:

	UFUNCTION()
	void SetPlayerPosition(int aRow, int aColumn);
	UFUNCTION()
	void SetPlayerRotation(ECardinalNodeDirections aPlayerFacingDirection);


	void SetFloorPawnDelegates(AFloorPawn* aPlayerHasMoved);
	
	void GenerateLevel(UFloorFactory* aFloorFactory);
	
	UPROPERTY()
	UFloorBase* CurrentFloor;
	UPROPERTY()
	EFloorIdentifier FloorIdentifier ;
	UPROPERTY()
	TArray<UMapButtonElement*> MapButtons;


	//TMap<EFloorIdentifier, TArray<bool>> fogOfWar;

	TMap<EFloorIdentifier,TArray<FNodeMapData>> fogOfWar;
	
	TArray<FNodeMapData> currentFogOfWar;
		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUniformGridPanel * BW_UniformGrid;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUniformGridPanel * BW_UniformGrid2;
	UPROPERTY()
	UMapPlayerIconElement * mapPlayerIconElement;

	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MapButtonElement;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> BP_MapPlayerIconElement;
	
private:
	UFloorFactory* floorFactory;
	
};
