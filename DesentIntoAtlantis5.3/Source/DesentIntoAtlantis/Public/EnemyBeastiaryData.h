// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyBeastiaryData.generated.h"

struct FEnemyEntityData;
enum class EElementalType;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyBestiaryData : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY()
	TMap<EElementalType,bool> enemyElementalInfo;
public:
	
	void InitializeEnemyIntoBestariary();

	void RevealElementalInfo(EElementalType aElementToReveal );

	bool GetRevealedElementalType(EElementalType aElementToReveal );
};