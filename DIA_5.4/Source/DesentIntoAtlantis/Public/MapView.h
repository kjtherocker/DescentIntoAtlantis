// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "LevelProgressionSubsystem.h"
#include "MapView.generated.h"


class UStaminaBarElement;
struct FCompleteFloorPawnData;
struct FNodeMapData;
class ULevelProgressionSubsystem;
enum class ECardinalNodeDirections;
class AFloorPlayerPawn;
class UUniformGridSlot;
class FPlayerHasMoved;
class UMapPlayerIconElement;
class UImage;
class UUniformGridPanel;
class UMapButtonElement;
class UFloorBase;
enum class EFloorID;
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
	UPROPERTY()
	UUniformGridSlot* playerIconGridSlot;
	

	UPROPERTY()
	ULevelProgressionSubsystem* levelProgressionSubsystem;
public:

	void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	UFUNCTION()
	void SetPlayerPosition(FCompleteFloorPawnData aFloorPawnData);
	UFUNCTION()
	void SetPlayerRotation(FCompleteFloorPawnData aPlayerFacingDirection);


	void SetFloorPawnDelegates(AFloorPlayerPawn* aPlayerHasMoved);
	
	void GenerateLevel(UFloorFactory* aFloorFactory,EFloorID aFloorIdentifier);
	
	UPROPERTY()
	UFloorBase* CurrentFloor;
	UPROPERTY()
	EFloorID FloorIdentifier ;
	UPROPERTY()
	TArray<UMapButtonElement*> MapButtons;


	//TMap<EFloorIdentifier, TArray<bool>> fogOfWar;

	TMap<EFloorID,TArray<FNodeMapData>> fogOfWar;
	UPROPERTY()
	TArray<FNodeMapData> currentFogOfWar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStaminaBarElement * BW_StaminaBarElement;
	
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
	UPROPERTY()
	UFloorFactory* floorFactory;
	
};
