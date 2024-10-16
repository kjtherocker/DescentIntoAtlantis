// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityWrapper.h"

#include "CombatEntity.h"
#include "SkillsData.h"


void UAilmentShellTakeOver::Initialize(UCombatEntity* aAttachedEntity,ECombatEntityWrapperType aWrapperType)
{
    ailmentInfo.resetShellToDefault     = aAttachedEntity->resetOneWrapperToDefault;
    ailmentInfo.combatEntityWrapperType = aWrapperType;
}

int UAilmentShellTakeOver::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return 0;
}

void UAilmentShellTakeOver::SetAilmentTurnLength(int aActiveTurnLength)
{
    ailmentInfo.ailmentLength = aActiveTurnLength;
}

void UAilmentShellTakeOver::TurnEnd()
{
    ailmentInfo.ailmentLength--;
    if(ailmentInfo.ailmentLength <= 0)
    {
        ailmentInfo.resetShellToDefault.Broadcast(ailmentInfo.combatEntityWrapperType);
        ailmentInfo.ailmentLength = 0;
    }
    
}

int UCalculateDamage_Base::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;
    int strengthAllStats =  aAttacker->abilityScoreMap[EStatTypes::Strength]->GetAllStats() / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
    int magicAllStats    =  aAttacker->abilityScoreMap[EStatTypes::Magic]->GetAllStats() / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
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
        attachedCombatEntity->abilityScoreMap[EStatTypes::Defence]->GetAllStats()    / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EStatTypes::Resistance]->GetAllStats() / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
	
    return decementBy;
}

void UCalculateDamage_Base::TurnEnd()
{
    ailmentInfo.ailmentLength--;
    if(ailmentInfo.ailmentLength <= 0)
    {
        ailmentInfo.resetShellToDefault.Broadcast(ailmentInfo.combatEntityWrapperType);
        ailmentInfo.ailmentLength = 0;
    }
}

int UCalculateDamage_Fear::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return UCalculateDamage_Base::CalculateDamage(aAttachedEntity,aAttacker, aSkill) * 1.4;
}

void UCalculateDamage_Fear::TurnEnd()
{
    Super::TurnEnd();
}

void UCombatEntityWrapper::Initialize()
{
    //allPossibleAilments.Add(EStatusAilments::Fear,NewObject<UCalculateDamage_Fear>());
}

void UCombatEntityWrapper::RemoveAilment(ECombatEntityWrapperType aCombatEntityWrapperType)
{
    completeEntityWrapperInfo.ailments.Remove(aCombatEntityWrapperType);
}

void UCombatEntityWrapper::SetAilment(UAilmentShellTakeOver* aAilment, ECombatEntityWrapperType aCombatEntityWrapperType)
{
    completeEntityWrapperInfo.ailments.Add(aCombatEntityWrapperType,&aAilment->ailmentInfo);
    switch (aCombatEntityWrapperType)
    {
    case ECombatEntityWrapperType::None:
        break;
    case ECombatEntityWrapperType::CalculateDamage:
        SetCalculateDamageAilment( aAilment);
        break;
    }
}

void UCombatEntityWrapper::SetAttachedCombatEntity(UCombatEntity* aCombatEntity)
{
   aCombatEntity->resetOneWrapperToDefault.AddDynamic(this,&UCombatEntityWrapper::RemoveAilment);
    AttachedCombatEntity = aCombatEntity;
}

void UCombatEntityWrapper::SetCalculateDamageDefault(UAilmentShellTakeOver* aCalculateDamageWrapper)
{
    UAilmentShellTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
    AttachedCombatEntity->onStatusAilmentEnd.Broadcast(calculateDamage->ailmentInfo.statusAilment);
    calculateDamageTemp->Initialize(AttachedCombatEntity,ECombatEntityWrapperType::CalculateDamage);
    calculateDamage = calculateDamageTemp;
}

void UCombatEntityWrapper::SetCalculateDamageAilment(UAilmentShellTakeOver* aCalculateDamageWrapper)
{
    UAilmentShellTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
    calculateDamageTemp->Initialize(AttachedCombatEntity,ECombatEntityWrapperType::CalculateDamage);
    calculateDamageTemp->SetAilmentTurnLength(3);
    calculateDamage = calculateDamageTemp;
}

int UCombatEntityWrapper::ExecuteCalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    resetOneWrapperToDefault = aAttacker->resetOneWrapperToDefault;
    return calculateDamage->CalculateDamage(AttachedCombatEntity,aAttacker,aSkill);
}

UAilmentShellTakeOver* UCombatEntityWrapper::GetCalculateDamageWrapper()
{
    return calculateDamage;
}

void UCombatEntityWrapper::TurnEnd()
{
    calculateDamage->TurnEnd();
}
