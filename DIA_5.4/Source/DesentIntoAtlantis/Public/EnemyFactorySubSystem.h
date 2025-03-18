// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBeastiaryData.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EnemyFactorySubSystem.generated.h"


enum class EEnemyCombatPositions;

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyRowData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	TMap<EEnemyCombatPositions,EEnemyLabelID> EnemysInRow;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyGroupData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	FString GroupName;

	UPROPERTY( EditAnywhere )
	TMap<ERowType,FEnemyRowData> Rows;
	
};

USTRUCT()
struct FCompleteBestiaryData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY()
	TMap<EEnemyLabelID,FEnemyBestiary>  enemyBestiaryData;
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
	TArray<FEnemyEntityCompleteData>  allEnemys;
	UPROPERTY()
	TArray<FEnemyGroupData>   allEnemysGroups;
	UPROPERTY()
	TMap<EEnemyLabelID,FEnemyEntityCompleteData> enemyMap;
	TMap<FString,FEnemyGroupData>   enemyGroupMap;

	FCompleteBestiaryData completeBestiaryData;
public:

	FBestiaryDataHasChanged bestiaryDataHasChanged;
	void InitializeDatabase(UDataTable* aEnemys, UDataTable* aEnemyGroups);

	void BestiaryDataHasChangedBroadcast();

	FEnemyBestiary* GetBestiaryEntry(EEnemyLabelID aCharacterName);
	
	void InitializeBestiary(FEnemyEntityCompleteData aEnemy);

	void LoadSavedBestiary(FCompleteBestiaryData aCompleteBestiaryData);
	
	FEnemyEntityCompleteData FEnemyEntityDataReturnEnemyEntityData(EEnemyLabelID aEnemyName);

	FEnemyGroupData   ReturnEnemyGroupData(FString aGroupName);

	TArray<FEnemyGroupData> allEnemyGroupData;

};
