// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

#include "CombatLog_AttackDefense_Data.h"
#include "CombatStat.h"
#include "SkillData.h"


void UHealth::InitializeHealth(int aCurrentHealth, int aMaxHealth, UCombatEntity* aCombatEntity)
{
	HealthData.currentHealth = aCurrentHealth;
	HealthData.maxHealth = aMaxHealth;
	OwnedCombatEntity = aCombatEntity;

	inUseCombatWrapper      = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper->SetAttachedCombatEntity(this);
	allDefaultCombatWrapper->SetCalculateDamageWrapper(NewObject<UCalculateDamage_Base>());
    
	inUseCombatWrapper->SetAttachedCombatEntity(this);
	inUseCombatWrapper->SetCalculateDamageWrapper(allDefaultCombatWrapper->GetCalculateDamageWrapper());
}

void UHealth::InitializeHealth(FHealthData aHealthData, UCombatEntity* aCombatEntity)
{
	InitializeHealth(aHealthData.currentHealth, aHealthData.maxHealth,aCombatEntity);
}

void UHealth::GiveMaxHp()
{
	HealthData.currentHealth = HealthData.maxHealth;
}

void UHealth::SetHealth(FHealthData aHealthData)
{
	HealthData = aHealthData;
	HealthData.currentHealth = HealthData.maxHealth;
}

void UHealth::SetCurrentHealth(int aHealth)
{
	HealthData.currentHealth = aHealth;
}

int UHealth::GetCurrentHealth()
{
	return HealthData.currentHealth;
}

FCombatLog_AttackDefense_Data UHealth::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	EPressTurnReactions reaction = EPressTurnReactions::Normal;
	    
	//if (aSkill.elementalType == OwnedCombatEntity->elementalWeakness)
	//{
	//	reaction =  EPressTurnReactions::Weak;
	//}
	//if (aSkill.elementalType ==  OwnedCombatEntity->elementalStrength)
	//{
	//	reaction =  EPressTurnReactions::Strong;
	//}

	lastAttackDefenceData = CalculateDamage(aAttacker,aSkill); 
	int totalDamage = lastAttackDefenceData.FinalDamageResult;
	HealthData.currentHealth -= totalDamage;

	if(HealthData.currentHealth < 0)
	{
		HealthData.currentHealth = 0;
	}
	
	OwnedCombatEntity->PostDamage();
	OnDecrementHealth.Broadcast(lastAttackDefenceData,OwnedCombatEntity);
	hasHealthValuesChanged.Broadcast();

  
	return lastAttackDefenceData;
}

EPressTurnReactions UHealth::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
	int AmountOfHpToAdd =  aSkill.damage + (aHealer->abilityScoreMap[EStatTypes::Magic]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO);
	HealthData.currentHealth += AmountOfHpToAdd;
    
	if(HealthData.currentHealth >= HealthData.maxHealth)
	{
		HealthData.currentHealth = HealthData.maxHealth;
	}
	hasHealthValuesChanged.Broadcast();
	return EPressTurnReactions::Normal;
}

void UHealth::IncrementHealth(int aIncease)
{
	HealthData.currentHealth += aIncease;
    
	if(HealthData.currentHealth >= HealthData.maxHealth)
	{
		HealthData.currentHealth = HealthData.maxHealth;
	}
	
	hasHealthValuesChanged.Broadcast();
}

FCombatLog_AttackDefense_Data UHealth::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	return inUseCombatWrapper->ExecuteCalculateDamage(aAttacker,aSkill);
}

void UHealth::TurnEnd()
{
	inUseCombatWrapper->TurnEnd();
}

void UHealth::SetAWrapperToDefault(ECombatEntityWrapperType aShellType)
{
	switch (aShellType)
	{
	case ECombatEntityWrapperType::None:
            
		break;
	case ECombatEntityWrapperType::CalculateDamage:
		inUseCombatWrapper->SetCalculateDamageDefault(allDefaultCombatWrapper->GetCalculateDamageWrapper());
		break;
	}
}

void UHealth::InflictAilment(UWrapperTakeOver* aAliment, ECombatEntityWrapperType aCombatEntityWrapperType)
{
	inUseCombatWrapper->SetAilment(aAliment,aCombatEntityWrapperType);
}

UCombatEntity* UHealth::GetAttachedCombatEntity()
{
	return OwnedCombatEntity;
}

float UHealth::GetHealthPercentage()
{
	return  (float) HealthData.currentHealth / (float)HealthData.maxHealth;
}

float UHealth::GetPotentialHealthPercentage(int aDamage)
{
	int tempCurrentHealth = HealthData.currentHealth;
	tempCurrentHealth -= aDamage;

	return  (float)tempCurrentHealth / (float)HealthData.maxHealth;
}
