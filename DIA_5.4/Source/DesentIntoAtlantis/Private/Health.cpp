// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

#include "CombatLog_AttackDefense_Data.h"
#include "CombatStat.h"
#include "SkillData.h"



void UHealth::InitializeHealth(int aCurrentHealth, int aMaxHealth, UCombatEntity* aCombatEntity)
{
	FHealthData newHealthData;
	FResourceBarInfo newHealthResourceInfo;

	newHealthResourceInfo.Current = aCurrentHealth;
	newHealthResourceInfo.Max     = aMaxHealth;

	newHealthData.ResourceBarInfo = newHealthResourceInfo;

	InitializeHealth(newHealthData,AttachedCombatEntity);
}

void UHealth::InitializeHealth(FHealthData aHealthData, UCombatEntity* aCombatEntity)
{
	InitializeResources(aHealthData.ResourceBarInfo,aCombatEntity);
}

int UHealth::DecrementHealth(int aAmountToRemove)
{
	lastAttackDefenceData.FinalDamageResult = aAmountToRemove;
	
	OnDecrementHealth.Broadcast(lastAttackDefenceData,AttachedCombatEntity);
	
	return DecrementValue(aAmountToRemove);
}

EPressTurnReactions UHealth::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
	int AmountOfHpToAdd =  aSkill.damage + (aHealer->abilityScoreMap[EStatTypes::Magic]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO);
    
	IncrementValue(AmountOfHpToAdd);
	
	return EPressTurnReactions::Normal;
}

FHealthData UHealth::GetHealthData()
{
	HealthData.ResourceBarInfo = ResourceBarInfo;
	
	return HealthData;
}

