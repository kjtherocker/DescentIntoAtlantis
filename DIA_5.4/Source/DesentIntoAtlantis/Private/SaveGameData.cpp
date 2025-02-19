// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameData.h"

#include "FloorPlayerPawn.h"
#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"


void USaveGameData::UpdateCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData)
{
	completeProgressionData = aCompleteProgressionData;
}

void USaveGameData::UpdateCurrentLevelIdentifier(EFloorID aFloorIdentifier)
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

void USaveGameData::UpdateChallengeManagerData(FChallengeManagerData aChallengeManagerData)
{
	completeChallengeManagerData = aChallengeManagerData;
}

void USaveGameData::UpdatePartyLevel(FCompletePartyManagerSubsystemData aPartyManagerSubsystem)
{
	completePartyManagerData = aPartyManagerSubsystem;
}

void USaveGameData::SubscribeUpdateFloorPlayerCompleteData(AFloorPlayerPawn* aFloorPawn)
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

void USaveGameData::SubScribeToUpdateChallengeManager(UChallengeSubsystem* aChallengeSubsystem)
{
	aChallengeSubsystem->ChallengeManagerHasChanged.AddDynamic(this,&USaveGameData::UpdateChallengeManagerData);
}

void USaveGameData::SubScribeToUpdateEnemyBestiary(UEnemyFactorySubSystem* aEnemyFactorySubsystem)
{
	aEnemyFactorySubsystem->bestiaryDataHasChanged.AddDynamic(this,&USaveGameData::UpdateEnemyBestiaryData);
}

void USaveGameData::SubscribeToUpdatePartyManager(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	aPartyManagerSubsystem->PartyManagerHasChanged.AddDynamic(this,&USaveGameData::UpdatePartyLevel);
}

void USaveGameData::AddPlayerCompleteDataSet(EPartyMembers aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	playerCompleteDataSet.Add(aPartyMember,aPlayerCompleteDataSet);
}
