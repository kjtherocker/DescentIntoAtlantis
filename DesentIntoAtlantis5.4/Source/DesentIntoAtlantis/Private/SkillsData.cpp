// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillsData.h"
#include "CombatEntity.h"
#include "CombatEntityWrapper.h"


void USkillBase::Initialize(FSkillsData aSkillData)
{
	skillData = aSkillData;
}

bool USkillBase::CalculateHit(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	int RandomNumbner =  FMath::RandRange(1, 100);
	RandomNumbner += (aAttacker->GetHit() - aVictim->GetEvasion()) / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
	RandomNumbner += skillData.SkillHit; 
	return RandomNumbner > 100;
}

void UAilment::Initialize(FSkillsData aSkillData)
{
}

void UAilment::ActivateAilment(UCombatEntity* aCombatEntity)
{
	aCombatEntity->AlimentDecrementHealth(10);
}

void UAilment_Fear::Initialize(FSkillsData aSkillData)
{
	Super::Initialize(aSkillData);
}

EPressTurnReactions USkillBase::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return EPressTurnReactions::Normal;
}

bool USkillAlimentAttack::CalculateAilmentInfliction(UCombatEntity* aAttacker, UCombatEntity* aVictim,EStatusAilments aAilment)
{
	AilmentHitCalculation =  FMath::RandRange(1, 100);
	AilmentHitCalculation += (aAttacker->GetAilmentInfliction(aAilment) - aVictim->GetAilmentResistance(aAilment));
	AilmentHitCalculation += skillData.AilmentHit; 
	return AilmentHitCalculation > 100;
}

// Each of these are structs that inherit from Skill_Base
EPressTurnReactions USkillAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	if(CalculateHit(aAttacker,  aVictim))
	{
		return aVictim->DecrementHealth(aAttacker,skillData);
	}
	else
	{
		return EPressTurnReactions::Dodge;
	}
}

EPressTurnReactions USyncSkill::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}




EPressTurnReactions USkillAlimentAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	if(CalculateHit(aAttacker, aVictim))
	{
		if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
		{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
		}
		return aVictim->DecrementHealth(aAttacker,skillData);
	}
	else
	{
		return EPressTurnReactions::Dodge;
	}
}

EPressTurnReactions USkillAlimentAttackFear::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	if(CalculateHit(aAttacker,  aVictim))
	{
		if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
		{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
		}
		return aVictim->DecrementHealth(aAttacker,skillData);
	}
	else
	{
		return EPressTurnReactions::Dodge;
	}
}



EPressTurnReactions USkillHeal::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->IncrementHealth(aAttacker, skillData);
}

EPressTurnReactions USkillBuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->ApplyBuff(aAttacker,skillData);
}

EPressTurnReactions USkillDebuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}


