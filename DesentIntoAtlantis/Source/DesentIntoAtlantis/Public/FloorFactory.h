// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DesentIntoAtlantis/FloorBase.h"
#include "UObject/NoExportTypes.h"
#include "FloorFactory.generated.h"

class UDataTable;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UFloorFactory : public UObject
{
	GENERATED_BODY()
public:
	void InitializeDatabase(UDataTable* aFloorDatabase,UDataTable* aFloorEnemyDatabase);
	
	UPROPERTY()
	TArray<FFloorData> floorData;

	UPROPERTY()
	TArray<FFloorEventData> floorEnemyData;

	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
};
