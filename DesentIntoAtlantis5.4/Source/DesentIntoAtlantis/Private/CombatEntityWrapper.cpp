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

FCombatLog_AttackDefense_Data UWrapperTakeOver::CalculateDamage(FCombatLog_Damage_Data DamageLog,FCombatLog_Defense_Data DefenseLog)
{
    FCombatLog_AttackDefense_Data AttackDefense_Data;
    AttackDefense_Data.DamageData = DamageLog;
    AttackDefense_Data.DefenceData = DefenseLog;
    return AttackDefense_Data;
}

FCombatLog_Damage_Data UWrapperTakeOver::DamageLog(UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker,
    FSkillsData aSkill)
{
    FCombatLog_Damage_Data damagelog;
    return  damagelog;
}

FCombatLog_Defense_Data UWrapperTakeOver::DefenseLog(FCombatLog_Damage_Data DamageLog, UCombatEntity* aAttachedEntity,
    UCombatEntity* aAttacker, FSkillsData aSkill)
{
    FCombatLog_Defense_Data defenseLog;
    return  defenseLog;
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

FCombatLog_Damage_Data UCalculateDamage_Base::DamageLog(UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker,
    FSkillsData aSkill)
{
    FCombatLog_Damage_Data damageLog;
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;
    int strengthAllStats =  aAttacker->abilityScoreMap[EStatTypes::Strength]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    int magicAllStats    =  aAttacker->abilityScoreMap[EStatTypes::Magic]->GetAllStats();   // / UCombatAbilityStats::ABILITYSCORE_CONVERSION_RATIO;
    
    decementBy +=  magicAllStats;
    damageLog.StatsAddedToDamage = magicAllStats;
    
    if (aSkill.elementalType == attachedCombatEntity->elementalWeakness)
    {
        decementBy = decementBy * UCombatEntity::WEAK_DAMAGE_INCREASE;
    }
    if (aSkill.elementalType == attachedCombatEntity->elementalStrength)
    {
        decementBy = decementBy * UCombatEntity::STRONG_DAMAGE_REDUCTION;
    }

    damageLog.DamageElementalConversion = decementBy;
    
    aAttacker->passiveHandler->CheckAttackDefencePassives(decementBy,aAttachedEntity,aAttacker,aSkill);

    damageLog.FinalDamage = decementBy;
    return damageLog;
}

FCombatLog_Defense_Data UCalculateDamage_Base::DefenseLog(FCombatLog_Damage_Data DamageLog,
    UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{

    FCombatLog_Defense_Data Defense_Data;
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;

    Defense_Data.DefaultDamageResistance =  aSkill.skillDamageType == ESkillDamageType::Strength ?
        attachedCombatEntity->abilityScoreMap[EStatTypes::Defence]->GetAllStats()    / UCombatStat::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EStatTypes::Resistance]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    
    aAttachedEntity->passiveHandler->CheckAttackDefencePassives(decementBy,aAttachedEntity,aAttacker,aSkill);
    
    return Defense_Data;
}

FCombatLog_AttackDefense_Data UCalculateDamage_Base::CalculateDamage(FCombatLog_Damage_Data DamageLog,
    FCombatLog_Defense_Data DefenseLog)
{
    FCombatLog_AttackDefense_Data AttackDefense_Data;
    AttackDefense_Data.DamageData = DamageLog;
    AttackDefense_Data.DefenceData = DefenseLog;

    AttackDefense_Data.FinalDamageResult = DamageLog.FinalDamage - DefenseLog.DefaultDamageResistance;

    if(AttackDefense_Data.FinalDamageResult < 0)
    {
        AttackDefense_Data.FinalDamageResult = 0;
    }
    
    return AttackDefense_Data;
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

FCombatLog_AttackDefense_Data UCalculateDamage_Fear::CalculateDamage(FCombatLog_Damage_Data DamageLog,
    FCombatLog_Defense_Data DefenseLog)
{
    FCombatLog_AttackDefense_Data FinalResult = UCalculateDamage_Base::CalculateDamage(DamageLog, DefenseLog);
    FinalResult.FinalDamageResult = FinalResult.FinalDamageResult * 1.4;
    return FinalResult;
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

FCombatLog_AttackDefense_Data UCombatEntityWrapper::ExecuteCalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    resetOneWrapperToDefault = aAttacker->resetOneWrapperToDefault;
    FCombatLog_Damage_Data DamageLog = calculateDamage->DamageLog( AttachedHealth->GetAttachedCombatEntity(), aAttacker,aSkill);
    FCombatLog_Defense_Data DefenceLog = calculateDamage->DefenseLog(DamageLog, AttachedHealth->GetAttachedCombatEntity(), aAttacker,aSkill);
    return calculateDamage->CalculateDamage(DamageLog,DefenceLog);
}

UWrapperTakeOver* UCombatEntityWrapper::GetCalculateDamageWrapper()
{
    return calculateDamage;
}

void UCombatEntityWrapper::TurnEnd()
{
    calculateDamage->TurnEnd();
}
