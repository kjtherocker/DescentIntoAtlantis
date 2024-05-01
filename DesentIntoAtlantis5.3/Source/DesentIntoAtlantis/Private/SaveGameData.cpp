// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameData.h"

#include "FloorPawn.h"
#include "PersistentGameinstance.h"


void USaveGameData::UpdateCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData)
{
	completeProgressionData = aCompleteProgressionData;
}

void USaveGameData::UpdateCurrentLevelIdentifier(EFloorIdentifier aFloorIdentifier)
{
	currentLevel = aFloorIdentifier;
}

void USaveGameData::SubscribeUpdateCompleteProgressionData(ULevelProgressionSubsystem* aLevelProgressionSubsystem)
{
	aLevelProgressionSubsystem->mapHasChanged.AddDynamic(this,&USaveGameData::UpdateCompleteProgressionData);
}

void USaveGameData::SubScribeToUpdateLevelIdentifier(UPersistentGameinstance* aPersistentGameInstance)
{
	aPersistentGameInstance->levelHasChanged.AddDynamic(this,&USaveGameData::UpdateCurrentLevelIdentifier);
}


void USaveGameData::SetFloorPawn(AFloorPawn* Atest)
{
	playerPosition = Atest->currentNodePositionInGrid;
}

void USaveGameData::AddPlayerCompleteDataSet(EPartyMembers aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	playerCompleteDataSet.Add(aPartyMember,aPlayerCompleteDataSet);
}
