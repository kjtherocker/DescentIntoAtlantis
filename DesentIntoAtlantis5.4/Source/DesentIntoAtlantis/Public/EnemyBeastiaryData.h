// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyBeastiaryData.generated.h"

enum class EElementalType: uint8;
/**
 * 
 */

USTRUCT()
struct FEnemyBestiary
{
	GENERATED_BODY()
	UPROPERTY()
	TMap<EElementalType,bool> enemyElementalInfo;
	UPROPERTY()
	bool hasBeenInitialized = false;
	void InitializeBestiary();
	void RevealElementalInfo(EElementalType aElementToReveal );
	bool GetRevealedElementalType(EElementalType aElementToReveal );
};

UCLASS()
class DESENTINTOATLANTIS_API UEnemyBestiaryData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FEnemyBestiary enemyBestiary;
	
	void InitializeEnemyIntoBestariary();
};