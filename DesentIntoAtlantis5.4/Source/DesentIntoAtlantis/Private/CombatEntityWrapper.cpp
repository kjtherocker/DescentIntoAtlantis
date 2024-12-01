// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityWrapper.h"

#include "CombatEntity.h"
#include "CombatStat.h"
#include "Health.h"
#include "PassiveHandler.h"
#include "SkillBase.h"
#include "SkillDamageType.h"


void UWrapperTakeOver::Initialize(UHealth* aAttachedHealth,ECombatEntityWrapperType aWrapperType)
{
    ailmentInfo.resetShellToDefault     = aAttachedHealth->resetOneWrapperToDefault;
    ailmentInfo.combatEntityWrapperType = aWrapperType;
}

int UWrapperTakeOver::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return 0;
}

void UWrapperTakeOver::SetAilmentTurnLength(int aActiveTurnLength)
{
    ailmentInfo.ailmentLength = aActiveTurnLength;
}

void UWrapperTakeOver::TurnEnd()
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
    int strengthAllStats =  aAttacker->abilityScoreMap[EStatTypes::Strength]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    int magicAllStats    =  aAttacker->abilityScoreMap[EStatTypes::Magic]->GetAllStats();   // / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
    decementBy +=  magicAllStats;
	
    if (aSkill.elementalType == attachedCombatEntity->elementalWeakness)
    {
        decementBy = decementBy * UCombatEntity::WEAK_DAMAGE_INCREASE;
    }
    if (aSkill.elementalType == attachedCombatEntity->elementalStrength)
    {
        decementBy = decementBy * UCombatEntity::STRONG_DAMAGE_REDUCTION;
    }

    decementBy -=  aSkill.skillDamageType == ESkillDamageType::Strength ?
        attachedCombatEntity->abilityScoreMap[EStatTypes::Defence]->GetAllStats()    / UCombatStat::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EStatTypes::Resistance]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;

    aAttacker->passiveHandler->CheckAttackDefencePassives(decementBy,aAttachedEntity,aAttacker,aSkill);
    aAttachedEntity->passiveHandler->CheckAttackDefencePassives(decementBy,aAttachedEntity,aAttacker,aSkill);

    if(decementBy <= 0)
    {
        decementBy = 0;
    }
    
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

void UCombatEntityWrapper::SetAilment(UWrapperTakeOver* aAilment, ECombatEntityWrapperType aCombatEntityWrapperType)
{
    completeEntityWrapperInfo.ailments.Add(aCombatEntityWrapperType,&aAilment->ailmentInfo);
    switch (aCombatEntityWrapperType)
    {
    case ECombatEntityWrapperType::None:
        break;
    case ECombatEntityWrapperType::CalculateDamage:
        SetCalculateDamageWrapper( aAilment);
        break;
    }
}

void UCombatEntityWrapper::SetAttachedCombatEntity(UHealth*  aCombatEntity)
{
   aCombatEntity->resetOneWrapperToDefault.AddDynamic(this,&UCombatEntityWrapper::RemoveAilment);
    AttachedHealth = aCombatEntity;
}

void UCombatEntityWrapper::SetCalculateDamageDefault(UWrapperTakeOver* aCalculateDamageWrapper)
{
    UWrapperTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
    AttachedHealth->GetAttachedCombatEntity()->onStatusAilmentEnd.Broadcast(calculateDamage->ailmentInfo.statusAilment);
    calculateDamageTemp->Initialize(AttachedHealth,ECombatEntityWrapperType::CalculateDamage);
    calculateDamage = calculateDamageTemp;
}

void UCombatEntityWrapper::SetCalculateDamageWrapper(UWrapperTakeOver* aCalculateDamageWrapper)
{
    UWrapperTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
    calculateDamageTemp->Initialize(AttachedHealth,ECombatEntityWrapperType::CalculateDamage);
    calculateDamageTemp->SetAilmentTurnLength(3);
    calculateDamage = calculateDamageTemp;
}

int UCombatEntityWrapper::ExecuteCalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    resetOneWrapperToDefault = aAttacker->resetOneWrapperToDefault;
    return calculateDamage->CalculateDamage(AttachedHealth->GetAttachedCombatEntity(),aAttacker,aSkill);
}

UWrapperTakeOver* UCombatEntityWrapper::GetCalculateDamageWrapper()
{
    return calculateDamage;
}

void UCombatEntityWrapper::TurnEnd()
{
    calculateDamage->TurnEnd();
}
