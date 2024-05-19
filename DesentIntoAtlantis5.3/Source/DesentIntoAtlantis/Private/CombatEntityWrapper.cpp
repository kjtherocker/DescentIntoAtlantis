// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityWrapper.h"

#include "CombatEntity.h"
#include "SkillsData.h"


void UAilmentShellTakeOver::Initialize(UCombatEntity* aAttachedEntity,ECombatEntityWrapperType aWrapperType)
{
    resetShellToDefault     = aAttachedEntity->resetOneWrapperToDefault;
    combatEntityWrapperType = aWrapperType;
}

int UAilmentShellTakeOver::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return 0;
}

void UAilmentShellTakeOver::SetAilmentTurnLength(int aActiveTurnLength)
{
    ailmentLength = aActiveTurnLength;
}

void UAilmentShellTakeOver::TurnEnd()
{
    ailmentLength--;
    if(ailmentLength <= 0)
    {
        resetShellToDefault.Broadcast(combatEntityWrapperType);
        ailmentLength = 0;
    }
    
}

int UCalculateDamage_Base::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;
    int strengthAllStats =  aAttacker->abilityScoreMap[EAbilityScoreTypes::Strength]->GetAllStats() / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
    int magicAllStats    =  aAttacker->abilityScoreMap[EAbilityScoreTypes::Magic]->GetAllStats()    / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
    decementBy += aSkill.skillDamageType == ESkillDamageType::Strength ? strengthAllStats : magicAllStats;
	
    if (aSkill.elementalType == attachedCombatEntity->elementalWeakness)
    {
        decementBy = decementBy * UCombatEntity::WEAK_DAMAGE_INCREASE;
    }
    if (aSkill.elementalType == attachedCombatEntity->elementalStrength)
    {
        decementBy = decementBy * UCombatEntity::STRONG_DAMAGE_REDUCTION;
    }

    decementBy -=  aSkill.skillDamageType == ESkillDamageType::Strength ?
        attachedCombatEntity->abilityScoreMap[EAbilityScoreTypes::Defence]->GetAllStats()    / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EAbilityScoreTypes::Resistance]->GetAllStats() / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
	
    return decementBy;
}

void UCalculateDamage_Base::TurnEnd()
{
}

int UCalculateDamage_Fear::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return UCalculateDamage_Base::CalculateDamage(aAttachedEntity,aAttacker, aSkill) * 2;
}

void UCombatEntityWrapper::SetAttachedCombatEntity(UCombatEntity* aCombatEntity)
{
    AttachedCombatEntity = aCombatEntity;
}

void UCombatEntityWrapper::SetCalculateDamageWrapper(UCalculateDamage_Base* aCalculateDamageWrapper)
{
    UCalculateDamage_Base* calculateDamageTemp = aCalculateDamageWrapper;
    calculateDamageTemp->Initialize(AttachedCombatEntity,ECombatEntityWrapperType::CalculateDamage);
    calculateDamageTemp->SetAilmentTurnLength(2);
    calculateDamage = calculateDamageTemp;
}

int UCombatEntityWrapper::ExecuteCalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    resetOneWrapperToDefault = aAttacker->resetOneWrapperToDefault;
    return calculateDamage->CalculateDamage(AttachedCombatEntity,aAttacker,aSkill);
}

UCalculateDamage_Base* UCombatEntityWrapper::GetCalculateDamageWrapper()
{
    return calculateDamage;
}

void UCombatEntityWrapper::TurnEnd()
{
    calculateDamage->TurnEnd();
}
