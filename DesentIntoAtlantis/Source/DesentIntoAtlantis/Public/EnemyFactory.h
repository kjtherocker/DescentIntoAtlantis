// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyFactory.generated.h"



class UEnemyBestiaryData;
/**
 * 
 */

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

UCLASS()
class DESENTINTOATLANTIS_API UEnemyFactory : public UObject
{
	GENERATED_BODY()

	UEnemyFactory();
	UPROPERTY()
	TArray<FEnemyEntityData>  allEnemys;
	UPROPERTY()
	TArray<FEnemyGroupData>   allEnemysGroups;
	UPROPERTY()
	TMap<FString,FEnemyEntityData> enemyMap;
	TMap<FString,TArray<FString>>   enemyGroupMap;
	UPROPERTY()
	TMap<FString,UEnemyBestiaryData*>  enemyBestiaryData;
public:
	void InitializeDatabase(UDataTable* aEnemys, UDataTable* aEnemyGroups);

	UEnemyBestiaryData* GetBestiaryEntry(FString aCharacterName);
	
	void InitializeBestiary(FEnemyEntityData aEnemy);
	
	FEnemyEntityData ReturnEnemyEntityData(FString enemyName);

	TArray<FString>   ReturnEnemyGroupData(FString groupName);

	TArray<FEnemyGroupData> allEnemyGroupData;


};




