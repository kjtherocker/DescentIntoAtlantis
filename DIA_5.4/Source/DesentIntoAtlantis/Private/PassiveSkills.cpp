// Fill out your copyright notice in the Description page of Project Settings.

#include "PassiveSkills.h"

#include "ChallengeSubsystem.h"
#include "CombatInterruptManager.h"
#include "CombatStat.h"
#include "SkillBase.h"
#include "SkillDamageType.h"
#include "SkillRange.h"
#include "SkillType.h"
#include "CombatLog_PassiveSkilData.h"
#include "ItemChargeHandler.h"
#include "PlayerCombatStat.h"
#include "ResourceHandler.h"
#include "SkillResolveSubsystem.h"
#include "SkillUsage.h"


class UPlayerCombatStats;

void UBase_Passives::AttachOwnerCombatEntity(UCombatEntity* aCombatEntity)
{
	attachedCombatEntity = aCombatEntity;
}

void UBase_Passives::RemovePassive()
{
	attachedCombatEntity = nullptr;
}

void UBase_Passives::ActivatePassive()
{
	if(isDisabled)
	{
		return;
	}
}

void UBase_Passives::ApplyEffect(UCombatEntity* aCombatEntity)
{
}

void UBase_Passives::RemoveEffect(UCombatEntity* aCombatEntity)
{
}

void UPassiveSkills::CreatePassiveInterrupt()
{
	UCombatInterruptManager* CombatInterruptManager =
	attachedCombatEntity->combatEntityHub->InterruptHandler->GetCombatInterruptManager();

	FCombatInterruptData CombatInterruptData;
	CombatInterruptData.interruptType = EInterruptType::Passive;
	
	FPassiveActionData   PassiveActionData;

	PassiveActionData.PassiveOwner = attachedCombatEntity;
	PassiveActionData.PassiveSkill = this;
	
	CombatInterruptData.PassiveActionData = PassiveActionData;

	FTriggeredInterruptData triggered;

	triggered.Entity = attachedCombatEntity;
	triggered.Name   = attachedCombatEntity->GetEntityName();
	
	UCombatInterrupt* CombatInterrupt =
		CombatInterruptManager->
	CreateInterrupt(triggered,EInterruptType::Passive,CombatInterruptData);
	
	CombatInterruptManager->AddCombatInterrupt(CombatInterrupt);
}

void UPassiveSkills::InitializePassiveSkilData(FPassiveSkillData aPassiveSkillsData)
{
	passiveSkillData = aPassiveSkillsData;
}



FCombatLog_PassiveSkilData UGenericTriggerPassive::ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent)
{
	return IOnGenericPassive::ActivateGenericPassive_Implementation(WhoTriggeredEvent);
}



FSkillsData UGenericModifyPassive::ModifySkill_Implementation(FSkillsData aPassiveSkill)
{
	return IModifySkillPassive::ModifySkill_Implementation(aPassiveSkill);
}

bool UGenericTriggerPassive::IsPassiveTriggered_Implementation(EGenericTrigger aPassiveGenericTrigger)
{
	return passiveSkillData.triggerGeneric == aPassiveGenericTrigger;
}

FCombatLog_PassiveSkilData UGenericTriggerPassiveCombatToken::ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent)
{

	FCombatLog_PassiveSkilData PassiveSkilData;

	PassiveSkilData.PassiveSkillData = passiveSkillData;
	
	for(auto Element : PassiveSkilData.PassiveSkillData.combatTokensOnPassive)
	{
		Element.TokenCreator = attachedCombatEntity;
		attachedCombatEntity->combatEntityHub->combatTokenHandler->AddCombatToken(Element);		
	}
	

	CreatePassiveInterrupt();
	return PassiveSkilData;
}


int UGenericStatPassive::GetStatIncrease_Implementation(EStatTypes aStatType)
{
	int statIncrease = 0;

	switch (passiveSkillData.PassiveSkillStatType)
	{
	case EPassiveSkillStatType::None:
		break;
	case EPassiveSkillStatType::RawStat:
		statIncrease = passiveSkillData.passiveStats[aStatType];
		break;
	case EPassiveSkillStatType::Percentage:
		{
			UCombatStat* combatStat = attachedCombatEntity->abilityScoreMap[aStatType];
			statIncrease = combatStat->base * (passiveSkillData.passiveStats[aStatType] / 100.0f);			
			statIncrease = statIncrease >= 5 ? statIncrease: 5;
		}
		break;
	}
	
	return statIncrease;
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
	if(passiveSkillData.trigger5ElementalType != skillData.elementalType
		&& passiveSkillData.trigger5ElementalType != EElementalType::None)
	{
		return false;
	}
	return true;
}

FCombatLog_PassiveSkilData UGenericOnAttackPassive::ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity,
                                                                       UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_PassiveSkilData CombatLog_PassiveSkilData;

	CombatLog_PassiveSkilData.PassiveSkillData = passiveSkillData;
	// Calculate the damage increase as a percentage of CurrentDamage
	int DamageIncrease = aSkill.damage * (passiveSkillData.valuePercentage / 100.0f);

	CombatLog_PassiveSkilData.passiveResult = DamageIncrease;
	// Add the calculated increase to CurrentDamage
	CurrentDamage += DamageIncrease;
	
	return CombatLog_PassiveSkilData;
}

