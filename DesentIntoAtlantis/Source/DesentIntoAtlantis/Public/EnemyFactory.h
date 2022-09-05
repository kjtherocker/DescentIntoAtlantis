// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyFactory.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyFactory : public UObject
{
	GENERATED_BODY()

	UEnemyFactory();
	TArray<FEnemyEntityData*>  allEnemys;
	TMap<FString,FEnemyEntityData*> enemyMap;
public:
	FEnemyEntityData* ReturnEnemyEntityData(FString enemyName);
};
