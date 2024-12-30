// Fill out your copyright notice in the Description page of Project Settings.

#include "PassiveSkills.h"

#include "ChallengeSubsystem.h"
#include "CombatStat.h"
#include "SkillBase.h"
#include "SkillDamageType.h"
#include "SkillRange.h"
#include "SkillType.h"
#include "CombatLog_PassiveSkilData.h"
#include "SkillUsage.h"


void UPassiveSkills::InitializePassiveSkilData(FPassiveSkillData aPassiveSkillsData)
{
	passiveSkillData = aPassiveSkillsData;
}

void UPassiveSkills::AttachPassiveToOwner(UCombatEntity* aCombatEntity)
{
	attachedCombatEntity = aCombatEntity;
}

void UPassiveSkills::RemovePassive()
{
	attachedCombatEntity = nullptr;
}

void UPassiveSkills::ActivatePassive()
{
	if(isDisabled)
	{
		return;
	}
}

void UPassiveSkills::ApplyEffect(UCombatEntity* aCombatEntity)
{
}

void UPassiveSkills::RemoveEffect(UCombatEntity* aCombatEntity)
{
}


int UGenericStatPassive::GetStatIncrease_Implementation(EStatTypes aStatType)
{
	return passiveSkillData.passiveStats[aStatType];
}

void UGenericStatPassive::ApplyEffect(UCombatEntity* aCombatEntity)
{
	for (TTuple<EStatTypes, int> Element : passiveSkillData.passiveStats)
	{
		aCombatEntity->abilityScoreMap[Element.Key]->TryAddStatPassive(this);		
	}

}

void UGenericStatPassive::RemoveEffect(UCombatEntity* aCombatEntity)
{
	for (TTuple<EStatTypes, int> Element : passiveSkillData.passiveStats)
	{
		aCombatEntity->abilityScoreMap[Element.Key]->TryRemoveStatPassive(this);		
	}
}

void UGenericEventPassive::EventListener_Implementation(FEventBase* aEvent)
{
	if(aEvent == nullptr)
	{
		return;
	}
	
	DamageEvent* damageEvent = static_cast<DamageEvent*>(aEvent);
	if(damageEvent == nullptr)
	{
		return;
	}
}

bool UGenericOnAttackPassive::IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity,
                                                                UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FSkillsData skillData = aSkill;
	
	if(passiveSkillData.trigger1SkillType != skillData.skillType
		&& passiveSkillData.trigger1SkillType != ESkillType::None )
	{
		return false;
	}
	if(passiveSkillData.trigger2SkillUsage != skillData.skillUsage
		&& passiveSkillData.trigger2SkillUsage != ESkillUsage::None )
	{
		return false;
	}
	if(passiveSkillData.trigger3SkillRange != skillData.skillRange
		&& passiveSkillData.trigger3SkillRange != ESkillRange::None )
	{
		return false;
	}
	if(passiveSkillData.trigger4DamageType != skillData.skillDamageType
		&& passiveSkillData.trigger4DamageType != ESkillDamageType::None )
	{
		return false;
	}
	//if(passiveSkillData.trigger5ElementalType != skillData.elementalType
	//	&& passiveSkillData.trigger5ElementalType != EElementalType::None)
	//{
	//	return false;
	//}
	return true;
}

FCombatLog_PassiveSkilData UGenericOnAttackPassive::ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity,
                                                                       UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_PassiveSkilData CombatLog_PassiveSkilData;

	CombatLog_PassiveSkilData.PassiveSkillData = passiveSkillData;
	// Calculate the damage increase as a percentage of CurrentDamage
	int DamageIncrease = aSkill.damage * (passiveSkillData.damagePercentageIncrease / 100.0f);

	CombatLog_PassiveSkilData.passiveResult = DamageIncrease;
	// Add the calculated increase to CurrentDamage
	CurrentDamage += DamageIncrease;
	
	return CombatLog_PassiveSkilData;
}

