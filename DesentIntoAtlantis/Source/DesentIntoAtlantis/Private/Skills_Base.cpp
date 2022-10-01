// Fill out your copyright notice in the Description page of Project Settings.


#include "Skills_Base.h"

#include "CombatEntity.h"

PressTurnReactions FSkills_Base::UseSkill(FCombatEntity* aAttacker, FCombatEntity* aVictim)
{
	if(SkillType == ESkillType::Attack)
	{
		int damage = (aAttacker->StrengthAbilityScore.GetAllStats()/3) + Damage;
		return aVictim->DecrementHealth(damage,ElementalType);
	}

	return PressTurnReactions::Normal;
}

void FSkills_Base::Initialize()
{
}
