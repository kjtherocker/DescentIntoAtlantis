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



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHasHealthValuesChanged);

UCLASS()
class DESENTINTOATLANTIS_API UHealth : public UObject
{
	GENERATED_BODY()
	
	
	UPROPERTY()
	FHealthData HealthData;

	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;

	UPROPERTY()
	UCombatEntityWrapper* inUseCombatWrapper;
	UPROPERTY()
	UCombatEntityWrapper* allDefaultCombatWrapper;

public:
	virtual void InitializeHealth(int aCurrentHealth,int aMaxHealth, UCombatEntity* aCombatEntity);
	virtual void InitializeHealth(FHealthData aHealthData, UCombatEntity* aCombatEntity);
	virtual void SetHealth(int aHealth);
	virtual int GetHealth();
	
	virtual FCombatLog_AttackDefense_Data DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual EPressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	
	virtual FCombatLog_AttackDefense_Data CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual void TurnEnd();
	virtual void SetAWrapperToDefault(ECombatEntityWrapperType aShellType);
	virtual void InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType);
	virtual UCombatEntity* GetAttachedCombatEntity();
	
	virtual float GetHealthPercentage();
	virtual float GetPotentialHealthPercentage(int aDamage);
	
	FResetOneWrapperToDefault          resetOneWrapperToDefault;
	FHasHealthOrManaValuesChanged      hasHealthValuesChanged;
};
