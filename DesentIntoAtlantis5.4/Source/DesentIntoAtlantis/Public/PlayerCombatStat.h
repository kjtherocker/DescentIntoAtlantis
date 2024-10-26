// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatStat.h"

#include "UObject/NoExportTypes.h"
#include "PlayerCombatStat.generated.h"

struct FCompleteClassData;
struct FPlayerIdentityData;
enum class EClasses;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatStats : public UCombatStat
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TMap<EClasses,int> classStatBases;
	
	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;

	int previousBase = 0;

	virtual int  GetAllStats() override;

	void SetStat(FPlayerIdentityData aPlayerIdentityData,int aCurrentLevel);

	int GetStatByLevel(FPlayerIdentityData aPlayerIdentityData,int aCurrentLevel);


	void AddClassStatBase(FCompleteClassData aCompleteClassData);

	
	int GetClassBases();
	
	
};