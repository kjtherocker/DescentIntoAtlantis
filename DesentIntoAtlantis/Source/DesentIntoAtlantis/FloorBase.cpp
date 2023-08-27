// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorBase.h"


void UFloorBase::Initialize()
{
    GridDimensionX = 20;
    GridDimensionY = 20;
}

int UFloorBase::GetIndex(int aRow, int aColumn)
{
    return aRow * GridDimensionX + aColumn;
}

