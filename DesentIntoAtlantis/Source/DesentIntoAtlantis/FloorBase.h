// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloorBase.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UFloorBase : public UObject
{
	   GENERATED_BODY()
public:
   
       short GridDimensionX = 10;
       short GridDimensionY = 10;
       TArray<short> FloorBlueprint;
       bool FloorRevealed[20];
   
       float EnemySpawnRate;
   
       FVector2D m_DefaultSpawnPosition;
   
       void Initialize();
       int GetIndex(int aRow, int aColumn);

};
