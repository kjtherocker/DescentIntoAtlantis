// Fill out your copyright notice in the Description page of Project Settings.

#include "ChallengeSubsystem.h"
#include "PassiveSkills.h"

#include "SkillsData.h"


void UPassiveSkills::InitializePassiveSkilData(FPassiveSkillsData aPassiveSkillsData)
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
	auto testo = aCombatEntity->abilityScoreMap[EStatTypes::Magic]->GetAllStats();
	aCombatEntity->abilityScoreMap[EStatTypes::Magic]->passive += 5;
	auto test2o = aCombatEntity->abilityScoreMap[EStatTypes::Magic]->GetAllStats();
}

void UPassiveSkills::RemoveEffect(UCombatEntity* aCombatEntity)
{
	aCombatEntity->abilityScoreMap[EStatTypes::Magic]->passive -= 5;
	attachedCombatEntity = nullptr;
}

//void UPassiveSkills::EventListener(EventBase* aEvent)
//{
//	if(aEvent == nullptr)
//	{
//		return;
//	}
//	
//	DamageEvent* damageEvent = static_cast<DamageEvent*>(aEvent);
//	if(damageEvent == nullptr)
//	{
//		return;
//	}
//
//	//if(VerifyTriggers(damageEvent))
//	//{
//	//	ActivatePassive();
//	//}
//}

//bool UPassiveSkills::VerifyTriggers(DamageEvent* aDamageEvent)
//{
//
//	USkillBase* SkillBase = aDamageEvent->GetSkill();
//
//	FSkillsData skillData = SkillBase->skillData;
//	
//	if(passiveSkillData.trigger1SkillType != skillData.skillType
//		&& passiveSkillData.trigger1SkillType != ESkillType::None )
//	{
//		return false;
//	}
//
//	if(passiveSkillData.trigger2SkillUsage != skillData.skillUsage
//		&& passiveSkillData.trigger2SkillUsage != ESkillUsage::None )
//	{
//		return false;
//	}
//
//	if(passiveSkillData.trigger3SkillRange != skillData.skillRange
//		&& passiveSkillData.trigger3SkillRange != ESkillRange::None )
//	{
//		return false;
//	}
//
//	if(passiveSkillData.trigger4DamageType != skillData.skillDamageType
//		&& passiveSkillData.trigger4DamageType != ESkillDamageType::None )
//	{
//		return false;
//	}
//
//	if(passiveSkillData.trigger5ElementalType != skillData.elementalType
//		&& passiveSkillData.trigger5ElementalType != EElementalType::None)
//	{
//		return false;
//	}
//	
//	return true;
//}
//