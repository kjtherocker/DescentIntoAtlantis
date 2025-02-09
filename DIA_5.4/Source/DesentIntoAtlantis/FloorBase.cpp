// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorBase.h"


void UFloorBase::Initialize()
{
    GridDimensionX = 20;
    GridDimensionY = 20;
}

void UFloorBase::SetTeleporterGimmickData(TArray<FTeleporterGimmick> aTeleporterGimmicks)
{
    for(int i = 0 ; i < aTeleporterGimmicks.Num();i++)
    {
        FTeleporterGimmick teleporterGimmick = aTeleporterGimmicks[i];
        TeleporterGimmickData.Add(teleporterGimmick.positionInGrid,teleporterGimmick);
    }
}

void UFloorBase::SetForcedMovementGimmickData(TArray<FForcedMovementGimmick> aForcedMovementGimmicks)
{
    for(int i = 0 ; i < aForcedMovementGimmicks.Num();i++)
    {
        FForcedMovementGimmick forcedMovementGimmick = aForcedMovementGimmicks[i];
        ForcedMovementGimmickData.Add(forcedMovementGimmick.positionInGrid,forcedMovementGimmick);
    }
}

int UFloorBase::GetIndex(int aRow, int aColumn)
{
    return aRow * GridDimensionX + aColumn;
}

