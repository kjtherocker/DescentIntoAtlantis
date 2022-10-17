// Fill out your copyright notice in the Description page of Project Settings.


#include "Skills_Base.h"

#include "CombatEntity.h"

PressTurnReactions FSkills_Base::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	if(SkillType == ESkillType::Attack)
	{
		return aVictim->DecrementHealth(aAttacker,*this);
	}

	return PressTurnReactions::Normal;
}

void FSkills_Base::Initialize()
{
}
