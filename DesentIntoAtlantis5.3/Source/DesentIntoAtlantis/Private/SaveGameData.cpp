// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameData.h"

#include "FloorPawn.h"


void USaveGameData::UpdateCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData)
{
	completeProgressionData = aCompleteProgressionData;
}

void USaveGameData::SubscribeUpdateCompleteProgressionData(ULevelProgressionSubsystem* aLevelProgressionSubsystem)
{
	aLevelProgressionSubsystem->mapHasChanged.AddDynamic(this,&USaveGameData::UpdateCompleteProgressionData);
}

void USaveGameData::SetTest(int Atest)
{
	test = Atest;
}

void USaveGameData::SetFloorPawn(AFloorPawn* Atest)
{
	playerPosition = Atest->currentNodePositionInGrid;
}

void USaveGameData::AddPlayerCompleteDataSet(EPartyMembers aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	playerCompleteDataSet.Add(aPartyMember,aPlayerCompleteDataSet);
}
