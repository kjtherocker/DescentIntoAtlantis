// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "EnemyBeastiaryData.h"
#include "SkillBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

class UEnemyBestiaryData;
class UEnemyBehaviour;
class AEnemyPortraitElement;
class ACombatGameModeBase;
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
	UMaterialInterface* fullBodyCharacterPortrait;
	

	UPROPERTY( EditAnywhere )
	int experience;

	UPROPERTY( EditAnywhere )
	int ClassPoints;
	
	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString Behaviour;

	UPROPERTY( EditAnywhere )
	EElementalType ElementalStrength;
	
	UPROPERTY( EditAnywhere )
	EElementalType ElementalWeakness;

	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillIDS;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UEnemyCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
public:
	void SetAbilityScores();
	void SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition);
	virtual void Death() override;
	virtual float GetHealthPercentage() override;
	virtual EPressTurnReactions DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill) override;

	EEnemyCombatPositions portraitPosition;
	
	UPROPERTY()
	TArray<USkillBase*> enemySkills;

	UPROPERTY()
	UEnemyBehaviour* enemyBehaviour; 
	FEnemyBestiary* beastiaryData;
	
	FEnemyEntityData enemyEntityData;
};

