// Fill out your copyright notice in the Description page of Project Settings.

#include "PassiveSkills.h"

#include "ChallengeSubsystem.h"
#include "CombatStat.h"
#include "SkillBase.h"
#include "SkillDamageType.h"
#include "SkillRange.h"
#include "SkillType.h"
#include "CombatLog_PassiveSkilData.h"
#include "ItemChargeHandler.h"
#include "PlayerCombatStat.h"
#include "SkillUsage.h"


class UPlayerCombatStats;

void UPassiveSkills::InitializePassiveSkilData(FPassiveSkillData aPassiveSkillsData)
{
	passiveSkillData = aPassiveSkillsData;
}

void UPassives::AttachPassiveToOwner(UCombatEntity* aCombatEntity)
{
	attachedCombatEntity = aCombatEntity;
}

void UPassives::RemovePassive()
{
	attachedCombatEntity = nullptr;
}

void UPassives::ActivatePassive()
{
	if(isDisabled)
	{
		return;
	}
}

void UPassives::ApplyEffect(UCombatEntity* aCombatEntity)
{
}

void UPassives::RemoveEffect(UCombatEntity* aCombatEntity)
{
}


FCombatLog_PassiveSkilData UGenericTriggerPassive::ActivateGenericPassive_Implementation(UCombatEntity* aCombatEntity)
{
	return IOnGenericPassive::ActivateGenericPassive_Implementation(aCombatEntity);
}

bool UGenericTriggerPassive::IsPassiveTriggered_Implementation(EGenericTrigger aPassiveGenericTrigger)
{
	return passiveSkillData.triggerGeneric == aPassiveGenericTrigger;
}

FCombatLog_PassiveSkilData UGenericTriggerPassiveCombatToken::ActivateGenericPassive_Implementation(UCombatEntity* aCombatEntity)
{
	FCombatLog_PassiveSkilData PassiveSkilData;
	for (auto Element : PassiveSkilData.PassiveSkillData.combatTokensOnPassive)
	{
		PassiveSkilData.combatTokenData.combatTokenData.Add(aCombatEntity->combatEntityHub->combatTokenHandler->AddCombatToken(Element.combatTokenID,Element));
	}

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
		
			if (UPlayerCombatStats* combatStats = Cast<UPlayerCombatStats>(combatStat))
			{
				int totalStat = combatStats->base + combatStats->GetClassBases();
				statIncrease = totalStat * (passiveSkillData.passiveStats[aStatType] / 100.0f);
			}
			else
			{
				statIncrease = attachedCombatEntity->abilityScoreMap[aStatType]->base * (passiveSkillData.passiveStats[aStatType] / 100.0f);			
			}
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
	int DamageIncrease = aSkill.damage * (passiveSkillData.damagePercentageIncrease / 100.0f);

	CombatLog_PassiveSkilData.passiveResult = DamageIncrease;
	// Add the calculated increase to CurrentDamage
	CurrentDamage += DamageIncrease;
	
	return CombatLog_PassiveSkilData;
}

bool UMerchantsZeal::IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity,
	UCombatEntity* aAttacker, FSkillsData aSkill)
{

	if(aAttacker->combatEntityHub->ItemChargeHandler->HowManyChargesAreFull() == 0)
	{
		return false;
	}
	
	if(aSkill.skillType != ESkillType::Attack)
	{
		return false;
	}
	
	return true;
}

FCombatLog_PassiveSkilData UMerchantsZeal::ActivateAttackDefencePassive_Implementation(int& CurrentDamage,
	UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_PassiveSkilData CombatLog_PassiveSkilData;

	CombatLog_PassiveSkilData.PassiveSkillData = passiveSkillData;
	// Calculate the damage increase as a percentage of CurrentDamage
	int DamageIncrease = passiveSkillData.damageIncrease;

	int itemCharges = aAttacker->combatEntityHub->ItemChargeHandler->HowManyChargesAreFull();

	int FinalNumber = itemCharges * DamageIncrease;
	
	CombatLog_PassiveSkilData.passiveResult = FinalNumber;
	// Add the calculated increase to CurrentDamage
	CurrentDamage += FinalNumber;
	
	return CombatLog_PassiveSkilData;
}

