// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillsData.h"
#include "CombatEntity.h"
#include "CombatEntityWrapper.h"


void USkillBase::Initialize(FSkillsData aSkillData)
{
	skillData = aSkillData;
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

// Each of these are structs that inherit from Skill_Base
EPressTurnReactions USkillAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}

EPressTurnReactions USyncSkill::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}


EPressTurnReactions USkillAlimentAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
	return aVictim->DecrementHealth(aAttacker,skillData);
}

EPressTurnReactions USkillAlimentAttackFear::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	UCalculateDamage_Fear* calculateDamageFear = NewObject<UCalculateDamage_Fear>();
	calculateDamageFear->ailmentInfo.statusAilment = EStatusAilments::Fear;
	aVictim->InflictAilment(calculateDamageFear,ECombatEntityWrapperType::CalculateDamage);
	return aVictim->DecrementHealth(aAttacker,skillData);
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


