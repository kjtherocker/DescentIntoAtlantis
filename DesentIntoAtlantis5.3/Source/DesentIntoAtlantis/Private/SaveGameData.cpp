// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameData.h"

#include "FloorPawn.h"

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
