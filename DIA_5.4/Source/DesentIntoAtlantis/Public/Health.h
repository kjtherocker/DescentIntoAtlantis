// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChallengeSubsystem.h"
#include "CombatLog_AttackDefense_Data.h"
#include "HealthData.h"

#include "UObject/NoExportTypes.h"
#include "Health.generated.h"

struct FSkillsData;
class UCombatEntity;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDecrementHealth,FCombatLog_AttackDefense_Data, combatlogFullData,UCombatEntity*,combatEntity);

UCLASS()
class DESENTINTOATLANTIS_API UHealth : public UResourceBar_Base
{
	GENERATED_BODY()
	
	
	UPROPERTY()
	FHealthData HealthData;

	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;
	
	UPROPERTY()
	FCombatLog_AttackDefense_Data lastAttackDefenceData;

public:
	virtual void InitializeHealth(int aCurrentHealth,int aMaxHealth, UCombatEntity* aCombatEntity);
	virtual void InitializeHealth(FHealthData aHealthData, UCombatEntity* aCombatEntity);
	
	virtual FCombatLog_AttackDefense_Data DecrementHealth(int aAmountToRemove);
	virtual EPressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);

	virtual FHealthData GetHealthData(){return  HealthData;}
	
	FOnDecrementHealth                 OnDecrementHealth;
};
