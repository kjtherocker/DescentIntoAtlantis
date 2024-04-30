// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "MapView.generated.h"

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

USTRUCT()
struct DESENTINTOATLANTIS_API FMapData
{
	GENERATED_BODY()

	TMap<EFloorIdentifier,FVector2d> revealedNodes;
};

UCLASS()
class DESENTINTOATLANTIS_API UMapView : public UBaseUserWidget
{
	GENERATED_BODY()
	const int MAP_NODE_POSITION_OFFSET = 0;
	
	void CreateGrid(UFloorBase* aFloor);
	void SpawnMapButton(int aRow, int aColumn, int aIndex);
	UUniformGridSlot* playerIconGridSlot;
public:

	UFUNCTION()
	void SetPlayerPosition(int aRow, int aColumn);

	void SetPlayerMovementDelegate(AFloorPawn* aPlayerHasMoved);
	void GenerateLevel(UFloorFactory* aFloorFactory);
	
	UPROPERTY()
	UFloorBase* CurrentFloor;
	UPROPERTY()
	EFloorIdentifier FloorIdentifier ;
	UPROPERTY()
	TArray<UMapButtonElement*> MapButtons;

		
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
