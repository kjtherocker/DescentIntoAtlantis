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

void USaveGameData::UpdateFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawn)
{
	completeFloorPawnData = aCompleteFloorPawn;
}

void USaveGameData::UpdateEnemyBestiaryData(FCompleteBestiaryData aCompleteBestiaryData)
{
	enemyBestiaryData = aCompleteBestiaryData;
}

void USaveGameData::SubscribeUpdateFloorPlayerCompleteData(AFloorPawn* aFloorPawn)
{
	aFloorPawn->playerhasMovedDelegate.AddDynamic(this,&USaveGameData::UpdateFloorPawnData);
	aFloorPawn->playerDirectionHasChanged.AddDynamic(this,&USaveGameData::UpdateFloorPawnData);
}

void USaveGameData::SubscribeUpdateCompleteProgressionData(ULevelProgressionSubsystem* aLevelProgressionSubsystem)
{
	aLevelProgressionSubsystem->mapHasChanged.AddDynamic(this,&USaveGameData::UpdateCompleteProgressionData);
}

void USaveGameData::SubScribeToUpdateLevelIdentifier(UPersistentGameinstance* aPersistentGameInstance)
{
	aPersistentGameInstance->levelHasChanged.AddDynamic(this,&USaveGameData::UpdateCurrentLevelIdentifier);
}

void USaveGameData::SubScribeToUpdateEnemyBestiary(UEnemyFactorySubSystem* aEnemyFactorySubsystem)
{
	aEnemyFactorySubsystem->bestiaryDataHasChanged.AddDynamic(this,&USaveGameData::UpdateEnemyBestiaryData);
}

void USaveGameData::AddPlayerCompleteDataSet(EPartyMembers aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	playerCompleteDataSet.Add(aPartyMember,aPlayerCompleteDataSet);
}
