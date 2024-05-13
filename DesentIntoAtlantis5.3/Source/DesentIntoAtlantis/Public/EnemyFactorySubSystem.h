// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EnemyFactorySubSystem.generated.h"


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

USTRUCT()
struct FCompleteBestiaryData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY()
	TMap<FString,FEnemyBestiary>  enemyBestiaryData;
};


class UDataTable;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBestiaryDataHasChanged,FCompleteBestiaryData,bestiaryData);

UCLASS()
class DESENTINTOATLANTIS_API UEnemyFactorySubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FEnemyEntityData>  allEnemys;
	UPROPERTY()
	TArray<FEnemyGroupData>   allEnemysGroups;
	UPROPERTY()
	TMap<FString,FEnemyEntityData> enemyMap;
	TMap<FString,TArray<FString>>   enemyGroupMap;

	FCompleteBestiaryData completeBestiaryData;
public:

	FBestiaryDataHasChanged bestiaryDataHasChanged;
	void InitializeDatabase(UDataTable* aEnemys, UDataTable* aEnemyGroups);

	void BestiaryDataHasChangedBroadcast();

	FEnemyBestiary* GetBestiaryEntry(FString aCharacterName);
	
	void InitializeBestiary(FEnemyEntityData aEnemy);

	void LoadSavedBestiary(FCompleteBestiaryData aCompleteBestiaryData);
	
	FEnemyEntityData FEnemyEntityDataReturnEnemyEntityData(FString aEnemyName);

	TArray<FString>   ReturnEnemyGroupData(FString aGroupName);

	TArray<FEnemyGroupData> allEnemyGroupData;

};
