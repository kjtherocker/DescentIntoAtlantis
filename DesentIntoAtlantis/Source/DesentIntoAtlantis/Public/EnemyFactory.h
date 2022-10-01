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

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyBestiaryData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	TMap<FString, TMap<EElementalType,bool>> BestiaryInfo;

	void InitializeEnemyIntoBestariary(FEnemyEntityData* aEnemyToAdd)
	{
		TMap<EElementalType,bool> enemyElementalInfo;

		enemyElementalInfo.Add(EElementalType::Fire,false);
		enemyElementalInfo.Add(EElementalType::Ice,false);
		enemyElementalInfo.Add(EElementalType::Light,false);
		enemyElementalInfo.Add(EElementalType::Lighting,false);
		enemyElementalInfo.Add(EElementalType::Null,false);
		enemyElementalInfo.Add(EElementalType::Shadow,false);
		enemyElementalInfo.Add(EElementalType::Wind,false);
		enemyElementalInfo.Add(EElementalType::Earth,false);

		BestiaryInfo.Add(aEnemyToAdd->characterName, enemyElementalInfo);
		
	}

	void RevealElementalInfo(FEnemyEntityData* aEnemyToAdd,EElementalType aElementToReveal )
	{
		BestiaryInfo[aEnemyToAdd->characterName][aElementToReveal] = true;
	}

	bool GetRevealedElementalType(FEnemyEntityData* aEnemyToAdd,EElementalType aElementToReveal )
	{
		return BestiaryInfo[aEnemyToAdd->characterName][aElementToReveal];
	}

	
};


