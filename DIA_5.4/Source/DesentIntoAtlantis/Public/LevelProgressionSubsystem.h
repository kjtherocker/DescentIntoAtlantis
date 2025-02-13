// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "FloorPlayerPawn.h"
#include "Gimmick_Base.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelProgressionSubsystem.generated.h"

class AFloor_EnemyPawn;
class AAtlantisGameModeBase;
class UInteractableView;
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
	FVector2D positionInGrid = FVector2d::Zero();
	UPROPERTY()
	bool hasBeenRevealed = false;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FInteractedEnemy
{
	GENERATED_BODY()
	UPROPERTY()
	FVector2D positionInGrid = FVector2d::Zero();
	UPROPERTY()
	bool hasBeenInteracted = false;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FMapData
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FNodeMapData> revealedNodes;

	UPROPERTY()
	TArray<FChestGimmickData> claimedChests; 
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteEnemyInteractionData
{
	GENERATED_BODY()
	UPROPERTY()
	EFloorIdentifier floorIdentifier = EFloorIdentifier::None;
	UPROPERTY()
	TMap<FVector2D,FInteractedEnemy> interactedEnemy;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteProgressionData
{
	GENERATED_BODY()
	
	UPROPERTY()
	TMap<EFloorIdentifier,FMapData> mapProgression;

	UPROPERTY()
	FCompleteEnemyInteractionData completeEnemyInteractionData;
	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapHasChanged,FCompleteProgressionData,playerFacingDirection);
UCLASS()
class DESENTINTOATLANTIS_API ULevelProgressionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	UPROPERTY()
	UPersistentGameinstance* persistentGameInstance;
	
	EFloorIdentifier currentFloorIdentifier;
	UPROPERTY()
	FCompleteProgressionData completeProgressionData;

	UPROPERTY()
	TMap<FVector2D,UGimmick_Interactable* > gimmickLocation;

	UPROPERTY()
	UGimmick_Interactable* currentInteractableGimmick;

	UPROPERTY()
	UInteractableView* interactableView;
	
	TArray<FNodeMapData> currentFogOfWar;
	void CreateNewFogOfWar(UFloorBase* aFloor);


	bool lockUpdatesToCompleteFloorData = false;
	FCompleteFloorPawnData completeFloorPawnData;

	UPROPERTY()
	AAtlantisGameModeBase* gameMode;
public:
	FPlayerHasMoved PlayerHasMoved;
	FPlayerDirectionHasChanged playerDirectionHasChanged;
	
	FNodeHasBeenWalkedOn nodeHasBeenWalkedOn;
	FMapHasChanged mapHasChanged;

	FVector2D newFloorPlayerSpawnPosition = FVector2D(-1,-1);
	
	void SetInteractableGimmick(FVector2D aPositionInGrid,UGimmick_Interactable* aInteractableGimmick);


	UFUNCTION()
	void OnInteractableGimmickActivated(FVector2D aPosition,UGimmick_Interactable* Gimmick);
	
	UFUNCTION()
	void ActivateCurrentNodesInteractableGimmick(FCompleteFloorPawnData aCompleteFloorPawnData);
	
	void SetGameMode(AAtlantisGameModeBase* aGameMode,UInteractableView* aInteractable);

	UFUNCTION()
	void SetCompleteFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawnData);

	void SetCompleteFloorPawnWithLockData(FCompleteFloorPawnData aCompleteFloorPawnData);
	
	void SetSubscribeFloorPawnDelegates(AFloorPlayerPawn* aFloorPawn);
	FCompleteFloorPawnData GetCurrentFloorPawnCompleteData();

	void SetNewFloorPlayerSpawnPosition(FVector2D aSpawnPosition);
	void SetCurrentFloorIdentifier(EFloorIdentifier aFloorIdentifier);
	
	EFloorIdentifier GetCurrentFlooridentifier();
	void LoadCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData);
	void SetCurrentMapFogOfWar(UFloorBase* floorBase);

	FCompleteEnemyInteractionData GetEnemyInteractionData(EFloorIdentifier aFloorIdentifier);
	void AddEnemyHasBeenInteracted(AFloor_EnemyPawn* aEnemyPawn);


	bool CheckIfChestIsClaimed(FVector2D aPositionInGrid);
	
	void RevealMapNode( int aLevelIndex);
	bool HasNodeBeenRevealed(int aLevelIndex);
	void InitializeSubsystem(UPersistentGameinstance* aPersistentGameinstance);
};
