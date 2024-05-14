// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillsData.h"
#include "CombatEntity.h"



void USkillBase::Initialize(FSkillsData aSkillData)
{
	skillData = aSkillData;
}

PressTurnReactions USkillBase::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return PressTurnReactions::Normal;
}

// Each of these are structs that inherit from Skill_Base
PressTurnReactions USkillAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}

PressTurnReactions USyncSkill::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}

PressTurnReactions USkillAliment::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	aVictim->InflictAilment(this);
	return PressTurnReactions::Normal;
}

PressTurnReactions USkillHeal::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->IncrementHealth(aAttacker, skillData);
}

PressTurnReactions USkillBuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->ApplyBuff(aAttacker,skillData);
}

PressTurnReactions USkillDebuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}


