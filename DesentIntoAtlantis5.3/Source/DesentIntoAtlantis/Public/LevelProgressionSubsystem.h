// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "FloorPawn.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelProgressionSubsystem.generated.h"

class FPlayerHasMoved;
class FNodeHasBeenWalkedOn;
enum class EFloorIdentifier;
class UFloorBase;
class UPersistentGameinstance;
/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FNodeMapData
{
	GENERATED_BODY()
	UPROPERTY()
	FVector2D positionInGrid;
	UPROPERTY()
	bool hasBeenRevealed = false;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FMapData
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FNodeMapData> revealedNodes; 
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteProgressionData
{
	GENERATED_BODY()
	
	UPROPERTY()
	TMap<EFloorIdentifier,FMapData> mapProgression;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapHasChanged,FCompleteProgressionData,playerFacingDirection);
UCLASS()
class DESENTINTOATLANTIS_API ULevelProgressionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPersistentGameinstance* persistentGameInstance;
	
	EFloorIdentifier currentFloorIdentifier;
	
	FCompleteProgressionData fogOfWar;
	TArray<FNodeMapData> currentFogOfWar;
	void CreateNewFogOfWar(UFloorBase* aFloor);


	bool lockUpdatesToCompleteFloorData = false;
	FCompleteFloorPawnData completeFloorPawnData;
public:
	FPlayerHasMoved PlayerHasMoved;
	FPlayerDirectionHasChanged playerDirectionHasChanged;
	
	FNodeHasBeenWalkedOn nodeHasBeenWalkedOn;
	FMapHasChanged mapHasChanged;

	FVector2D newFloorPlayerSpawnPosition = FVector2D(-1,-1);

	UFUNCTION()
	void SetCompleteFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawnData);

	void SetCompleteFloorPawnWithLockData(FCompleteFloorPawnData aCompleteFloorPawnData);
	
	void SetSubscribeFloorPawnDelegates(AFloorPawn* aFloorPawn);
	FCompleteFloorPawnData GetCurrentFloorPawnCompleteData();

	void SetNewFloorPlayerSpawnPosition(FVector2D aSpawnPosition);
	void SetCurrentFloorIdentifier(EFloorIdentifier aFloorIdentifier);
	
	EFloorIdentifier GetCurrentFlooridentifier();
	void LoadCompleteProgressionData(FCompleteProgressionData completeProgressionData);
	void SetCurrentMapFogOfWar(UFloorBase* floorBase);

	void RevealMapNode( int aLevelIndex);
	bool HasNodeBeenRevealed(int aLevelIndex);
	void InitializeSubsystem(UPersistentGameinstance* aPersistentGameinstance);
};
