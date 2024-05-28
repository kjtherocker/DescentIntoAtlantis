// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueView.h"
#include "EFloorIdentifier.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "FloorBase.generated.h"

class AFloor_EnemyPawn;
enum class EDialogueTriggers;
enum class ETutorialTriggers;
/**
 * 
 */

template<typename T>
struct FTestoData {
	T Data;
};

template<typename KeyType, typename ValueType>
using TGenericMap = TMap<KeyType, ValueType>;

// Define your map of maps with generics
template<typename KeyType, typename ValueType>
using TMapOfMaps = TMap<KeyType, TGenericMap<FVector2d, ValueType>>;

UCLASS()
class DESENTINTOATLANTIS_API UFloorBase : public UObject
{
	   GENERATED_BODY()
public:
	short GridDimensionX = 20;
	short GridDimensionY = 20;
	TArray<short> FloorBlueprint;
    //   bool FloorRevealed[20];
	TArray<FVector2D> EnemyStartPositions;

	FFloorData floorData;

	TMap<FVector2d ,FFloorEventData> floorEventData;

	TArray<FFloorEnemyPawnCompleteData> floorEnemyPawns;
	
	TArray<FDoorComplete> doorGimmicks;
	TMap<FVector2d ,FTeleporterGimmick> TeleporterGimmickData;
	TMap<FVector2d ,FForcedMovementGimmick> ForcedMovementGimmickData;
   
	FVector2D m_DefaultSpawnPosition;
   
	void Initialize();
	void SetTeleporterGimmickData(TArray<FTeleporterGimmick> aTeleporterGimmicks);
	void SetForcedMovementGimmickData(TArray<FForcedMovementGimmick> aForcedMovementGimmicks);
	int GetIndex(int aRow, int aColumn);

};
