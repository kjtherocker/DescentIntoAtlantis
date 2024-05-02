// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelProgressionSubsystem.h"

#include "PersistentGameinstance.h"

void ULevelProgressionSubsystem::InitializeSubsystem(UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameInstance = aPersistentGameinstance;
}

void ULevelProgressionSubsystem::SetSubscribeFloorPawnDelegates(AFloorPawn* aFloorPawn)
{
	aFloorPawn->playerhasMovedDelegate.AddDynamic(this,&ULevelProgressionSubsystem::SetCompleteFloorPawnData);
	aFloorPawn->playerDirectionHasChanged.AddDynamic(this,&ULevelProgressionSubsystem::SetCompleteFloorPawnData);
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

void ULevelProgressionSubsystem::LoadCompleteProgressionData(FCompleteProgressionData completeProgressionData)
{
	fogOfWar = completeProgressionData;
}

void ULevelProgressionSubsystem::CreateNewFogOfWar(UFloorBase* aFloor)
{
	FNodeMapData nodeMapData;
	nodeMapData.hasBeenRevealed = false;
	
	TArray<FNodeMapData> newFogOfWar;
	newFogOfWar.Init(nodeMapData,aFloor->GridDimensionX * aFloor->GridDimensionY );
	
	FMapData entireMapFogData;
	entireMapFogData.revealedNodes = newFogOfWar;
	fogOfWar.mapProgression.Add(aFloor->floorData.floorIdentifier, entireMapFogData);
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
	if(!fogOfWar.mapProgression.Contains(currentFloorIdentifier))
	{
		CreateNewFogOfWar(floorBase);
	}
}

void ULevelProgressionSubsystem::RevealMapNode(int aLevelIndex)
{
	if(!fogOfWar.mapProgression.Contains(currentFloorIdentifier))
	{
		return;
	}
	FMapData* currentMap = &fogOfWar.mapProgression[currentFloorIdentifier];
	currentMap->revealedNodes[aLevelIndex].hasBeenRevealed = true;
	mapHasChanged.Broadcast(fogOfWar);
}

bool ULevelProgressionSubsystem::HasNodeBeenRevealed(int aLevelIndex)
{

	return true;
	if(!fogOfWar.mapProgression.Contains(currentFloorIdentifier))
	{
		return false;
	}
	
	FMapData* currentMap = &fogOfWar.mapProgression[currentFloorIdentifier];
	return currentMap->revealedNodes[aLevelIndex].hasBeenRevealed;
}


