// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

class UEnemyPortraitElement;
struct FEnemyEntityData;

UENUM()
enum class  EEnemyCombatPositions
{
	Left   = 0,
	Middle = 1,
	Right  = 2
};

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyEntityData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;

	UPROPERTY( EditAnywhere )
	UEnemyPortraitElement*  imageBodyPortrait;

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
	virtual PressTurnReactions DecrementHealth(int aDecrementby, EElementalType aElementalType) override;

	virtual float GetHealthPercentage() override;
	
	FEnemyEntityData* enemyEntityData;

	EEnemyCombatPositions enemyCombatPosition;
};

