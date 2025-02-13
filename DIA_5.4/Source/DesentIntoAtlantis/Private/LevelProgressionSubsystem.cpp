// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelProgressionSubsystem.h"

#include "AtlantisGameModeBase.h"
#include "Floor_EnemyPawn.h"
#include "InteractableView.h"
#include "PersistentGameinstance.h"

void ULevelProgressionSubsystem::InitializeSubsystem(UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameInstance = aPersistentGameinstance;
}

void ULevelProgressionSubsystem::SetSubscribeFloorPawnDelegates(AFloorPlayerPawn* aFloorPawn)
{
	aFloorPawn->playerhasMovedDelegate.AddDynamic(this,&ULevelProgressionSubsystem::SetCompleteFloorPawnData);
	aFloorPawn->playerhasMovedDelegate.AddDynamic(this,&ULevelProgressionSubsystem::ActivateCurrentNodesInteractableGimmick);
	
	aFloorPawn->playerDirectionHasChanged.AddDynamic(this,&ULevelProgressionSubsystem::SetCompleteFloorPawnData);
	aFloorPawn->playerDirectionHasChanged.AddDynamic(this,&ULevelProgressionSubsystem::ActivateCurrentNodesInteractableGimmick);
}

FCompleteFloorPawnData ULevelProgressionSubsystem::GetCurrentFloorPawnCompleteData()
{
	lockUpdatesToCompleteFloorData = false;
	return completeFloorPawnData;
}

void ULevelProgressionSubsystem::SetNewFloorPlayerSpawnPosition(FVector2D aSpawnPosition)
{
	newFloorPlayerSpawnPosition = aSpawnPosition;
}

void ULevelProgressionSubsystem::SetCurrentFloorIdentifier(EFloorIdentifier aFloorIdentifier)
{
	currentFloorIdentifier = aFloorIdentifier;
}

EFloorIdentifier ULevelProgressionSubsystem::GetCurrentFlooridentifier()
{
	return currentFloorIdentifier;
}

void ULevelProgressionSubsystem::LoadCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData)
{
	completeProgressionData = aCompleteProgressionData;
}

void ULevelProgressionSubsystem::CreateNewFogOfWar(UFloorBase* aFloor)
{
	FNodeMapData nodeMapData;
	nodeMapData.hasBeenRevealed = false;
	
	TArray<FNodeMapData> newFogOfWar;
	newFogOfWar.Init(nodeMapData,aFloor->GridDimensionX * aFloor->GridDimensionY );
	
	FMapData entireMapFogData;
	entireMapFogData.revealedNodes = newFogOfWar;
	completeProgressionData.mapProgression.Add(aFloor->floorData.floorIdentifier, entireMapFogData);
}

void ULevelProgressionSubsystem::SetInteractableGimmick(FVector2D aPositionInGrid,
	UGimmick_Interactable* aInteractableGimmick)
{
	gimmickLocation.Add(aPositionInGrid,aInteractableGimmick);
}

void ULevelProgressionSubsystem::ActivateCurrentNodesInteractableGimmick(FCompleteFloorPawnData aCompleteFloorPawnData)
{
	currentInteractableGimmick = nullptr;
	FVector2D                currentPlayerPosition = aCompleteFloorPawnData.currentNodePositionInGrid;
	ECardinalNodeDirections currentPlayerDirection = aCompleteFloorPawnData.currentFacingDirection;
	
	if(gimmickLocation.Contains(currentPlayerPosition))
	{
		currentInteractableGimmick = gimmickLocation[currentPlayerPosition];
		if(currentInteractableGimmick->GetInteractableData().interactDirection == currentPlayerDirection
			&& currentInteractableGimmick->GetInteractableData().isInteractable)
		{
			interactableView->SetGimmick(currentInteractableGimmick);
		}
		else
		{
			interactableView->ResetInteractiveView();
		}
	}
	else
	{
		interactableView->ResetInteractiveView();
	}
	
}

void ULevelProgressionSubsystem::SetGameMode(AAtlantisGameModeBase* aGameMode, UInteractableView* aInteractable)
{
	gimmickLocation.Empty();
    gameMode = aGameMode;
	interactableView = aInteractable;
}




void ULevelProgressionSubsystem::SetCompleteFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawnData)
{
	if(!lockUpdatesToCompleteFloorData)
	{
		completeFloorPawnData = aCompleteFloorPawnData;
	}
}

void ULevelProgressionSubsystem::SetCompleteFloorPawnWithLockData(FCompleteFloorPawnData aCompleteFloorPawnData)
{
	lockUpdatesToCompleteFloorData = false;
	SetCompleteFloorPawnData(aCompleteFloorPawnData);
	lockUpdatesToCompleteFloorData = true;
}

void ULevelProgressionSubsystem::SetCurrentMapFogOfWar(UFloorBase* floorBase)
{
	if(!completeProgressionData.mapProgression.Contains(currentFloorIdentifier))
	{
		CreateNewFogOfWar(floorBase);
	}
}

FCompleteEnemyInteractionData ULevelProgressionSubsystem::GetEnemyInteractionData(EFloorIdentifier aFloorIdentifier)
{
	EFloorIdentifier interactionDataFloor = completeProgressionData.completeEnemyInteractionData.floorIdentifier;
	
	if(aFloorIdentifier != interactionDataFloor)
	{
		completeProgressionData.completeEnemyInteractionData.interactedEnemy.Empty();
	}

	completeProgressionData.completeEnemyInteractionData.floorIdentifier = aFloorIdentifier;
	
	return completeProgressionData.completeEnemyInteractionData;
}

void ULevelProgressionSubsystem::AddEnemyHasBeenInteracted(AFloor_EnemyPawn* aEnemyPawn)
{
	FInteractedEnemy interactedEnemy;

	FVector2D startPosition = aEnemyPawn->enemyPawnCompleteData.enemyPatrolPath.StartPath;
	interactedEnemy.hasBeenInteracted = true;
	interactedEnemy.positionInGrid    = startPosition;
	
	completeProgressionData.completeEnemyInteractionData.interactedEnemy.Add(startPosition,interactedEnemy);
	mapHasChanged.Broadcast(completeProgressionData);
}

void ULevelProgressionSubsystem::RevealMapNode(int aLevelIndex)
{
	if(!completeProgressionData.mapProgression.Contains(currentFloorIdentifier))
	{
		return;
	}
	FMapData* currentMap = &completeProgressionData.mapProgression[currentFloorIdentifier];
	currentMap->revealedNodes[aLevelIndex].hasBeenRevealed = true;
	mapHasChanged.Broadcast(completeProgressionData);
}

bool ULevelProgressionSubsystem::HasNodeBeenRevealed(int aLevelIndex)
{
	if(!completeProgressionData.mapProgression.Contains(currentFloorIdentifier))
	{
		return false;
	}
	
	FMapData* currentMap = &completeProgressionData.mapProgression[currentFloorIdentifier];
	return currentMap->revealedNodes[aLevelIndex].hasBeenRevealed;
}


