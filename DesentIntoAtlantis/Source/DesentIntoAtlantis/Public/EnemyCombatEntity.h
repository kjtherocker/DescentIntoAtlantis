// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

struct FEnemyEntityData;

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyEntityData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;

	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString Behaviour;

	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyCombatEntity : public FCombatEntity
{
	GENERATED_BODY()
public:
	void SetAbilityScores();
	void SetEnemyEntityData(FEnemyEntityData* AEnemyEntityData);

	virtual float GetHealthPercentage() override;
	
	FEnemyEntityData* enemyEntityData;
};

