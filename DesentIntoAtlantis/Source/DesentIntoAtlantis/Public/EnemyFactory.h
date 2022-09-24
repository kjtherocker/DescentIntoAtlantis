// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyFactory.generated.h"

struct FEnemyGroupData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyFactory : public UObject
{
	GENERATED_BODY()

	UEnemyFactory();
	TArray<FEnemyEntityData*>  allEnemys;
	TArray<FEnemyGroupData*>   allEnemysGroups;
	TMap<FString,FEnemyEntityData*> enemyMap;
	TMap<FString,TArray<FString>>   enemyGroupMap;
public:
	FEnemyEntityData* ReturnEnemyEntityData(FString enemyName);

	TArray<FString>   ReturnEnemyGroupData(FString groupName);

	TArray<FEnemyGroupData*> allEnemyGroupData;


};


USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyGroupData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	FString GroupName;

	UPROPERTY( EditAnywhere )
	FString EnemyName1;

	UPROPERTY( EditAnywhere )
	FString EnemyName2;

	UPROPERTY( EditAnywhere )
	FString EnemyName3;

	
};
