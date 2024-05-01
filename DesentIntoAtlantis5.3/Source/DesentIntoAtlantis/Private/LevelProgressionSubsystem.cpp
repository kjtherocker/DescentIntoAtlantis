// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelProgressionSubsystem.h"

#include "PersistentGameinstance.h"

void ULevelProgressionSubsystem::InitializeSubsystem(UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameInstance = aPersistentGameinstance;
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

void ULevelProgressionSubsystem::SetCurrentMapFogOfWar(UFloorBase* floorBase)
{
	currentFloorIdentifier = floorBase->floorData.floorIdentifier;
	if(!fogOfWar.mapProgression.Contains(currentFloorIdentifier))
	{
		CreateNewFogOfWar(floorBase);
	}
}

void ULevelProgressionSubsystem::RevealMapNode(int aLevelIndex)
{
	FMapData* currentMap = &fogOfWar.mapProgression[currentFloorIdentifier];
	currentMap->revealedNodes[aLevelIndex].hasBeenRevealed = true;
	mapHasChanged.Broadcast(fogOfWar);
}

bool ULevelProgressionSubsystem::HasNodeBeenRevealed(int aLevelIndex)
{
	FMapData* currentMap = &fogOfWar.mapProgression[currentFloorIdentifier];
	return currentMap->revealedNodes[aLevelIndex].hasBeenRevealed;
}


