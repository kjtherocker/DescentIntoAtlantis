// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityWrapper.h"

#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatStat.h"
#include "Health.h"
#include "PassiveHandler.h"
#include "SkillBase.h"
#include "FCombatLog_Damage_Data.h"
#include "CombatLog_Defense_Data.h"
#include "CombatLog_Evasion_Data.h"
#include "CombatLog_Hit_Data.h"
#include "ElementalHandler.h"
#include "SkillDamageType.h"


void UWrapperTakeOver::Initialize(UResourceHandler* aResourceHandler,ECombatEntityWrapperType aWrapperType)
{
    ailmentInfo.resetShellToDefault     = aResourceHandler->resetOneWrapperToDefault;
    ailmentInfo.combatEntityWrapperType = aWrapperType;
}

FCombatLog_AttackDefense_Data UWrapperTakeOver::CalculateDamage(FCombatLog_Damage_Data DamageLog,FCombatLog_Defense_Data DefenseLog)
{
    FCombatLog_AttackDefense_Data AttackDefense_Data;
    AttackDefense_Data.wasInitializedOnSkill = true;
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

    damageLog.SkillDamage = aSkill.damage;
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;

    int skillStat = aAttacker->abilityScoreMap[aSkill.skillScaleStat]->GetAllStats() /  UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    
    decementBy +=  skillStat;
    damageLog.StatsAddedToDamage = skillStat;

    int originalValuePreElementalConversion = decementBy;
    
    if (attachedCombatEntity->combatEntityHub->elementalHandler->GetElementalReaction(aSkill.elementalType) == EElementalReaction::Weak)
    {
        decementBy = decementBy * UCombatEntity::WEAK_DAMAGE_INCREASE;
        damageLog.DamageElementalConversion = decementBy - originalValuePreElementalConversion ;
    }
    if (attachedCombatEntity->combatEntityHub->elementalHandler->GetElementalReaction(aSkill.elementalType) == EElementalReaction::Resist)
    {
        decementBy = decementBy * UCombatEntity::STRONG_DAMAGE_REDUCTION;
        damageLog.DamageElementalConversion = decementBy - originalValuePreElementalConversion;
    }
    
    damageLog.passivesActivated = aAttacker->combatEntityHub->CheckAttackDefencePassivesAndTokens(decementBy,aAttachedEntity,aAttacker,aSkill);

    damageLog.FinalDamage = decementBy;
    return damageLog;
}

FCombatLog_Defense_Data UCalculateDamage_Base::DefenseLog(FCombatLog_Damage_Data DamageLog,
    UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{

    FCombatLog_Defense_Data Defense_Data;
    int decementBy = DamageLog.FinalDamage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;

    Defense_Data.DefaultDamageResistance =  aSkill.skillDamageType == ESkillDamageType::Physical ?
        attachedCombatEntity->abilityScoreMap[EStatTypes::Defence]->GetAllStats()    / UCombatStat::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EStatTypes::Resistance]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    
   Defense_Data.passivesActivated = aAttachedEntity->combatEntityHub->CheckAttackDefencePassivesAndTokens(decementBy,aAttachedEntity,aAttacker,aSkill);
    
    int MitagationLimit = DamageLog.FinalDamage * 0.8;
    int rawDefence = DamageLog.FinalDamage  * (Defense_Data.DefaultDamageResistance / 100.0f);
    Defense_Data.DamageMitigationLimit = MitagationLimit;
    
    Defense_Data.FinalDamageResistance = rawDefence > MitagationLimit ? MitagationLimit : rawDefence ;
    
    return Defense_Data;
}

FCombatLog_AttackDefense_Data UCalculateDamage_Base::CalculateDamage(const FCombatLog_Damage_Data DamageLog,
                                                                     const FCombatLog_Defense_Data DefenseLog)
{
    FCombatLog_AttackDefense_Data AttackDefense_Data;
    AttackDefense_Data.DamageData = DamageLog;
    AttackDefense_Data.DefenceData = DefenseLog;

    AttackDefense_Data.wasInitializedOnSkill = true;

    AttackDefense_Data.FinalDamageResult = DamageLog.FinalDamage - DefenseLog.FinalDamageResistance;

    if(AttackDefense_Data.FinalDamageResult < 0)
    {
        AttackDefense_Data.FinalDamageResult = 1;
    }
    
    return AttackDefense_Data;
}

int UCalculateDamage_Base::CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill)
{
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = aAttachedEntity;
    
    int skillStat = aAttacker->abilityScoreMap[aSkill.skillScaleStat]->GetAllStats() /  UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
    
    decementBy +=  skillStat;
	
    if (attachedCombatEntity->combatEntityHub->elementalHandler->GetElementalReaction(aSkill.elementalType) == EElementalReaction::Weak)
    {
        decementBy = decementBy * UCombatEntity::WEAK_DAMAGE_INCREASE;
    }
    if (attachedCombatEntity->combatEntityHub->elementalHandler->GetElementalReaction(aSkill.elementalType) == EElementalReaction::Resist)
    {
        decementBy = decementBy * UCombatEntity::STRONG_DAMAGE_REDUCTION;
    }

    decementBy -=  aSkill.skillDamageType == ESkillDamageType::Physical ?
        attachedCombatEntity->abilityScoreMap[EStatTypes::Defence]->GetAllStats()    / UCombatStat::ABILITYSCORE_CONVERSION_RATIO :
        attachedCombatEntity->abilityScoreMap[EStatTypes::Resistance]->GetAllStats() / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;

    aAttacker->combatEntityHub->CheckAttackDefencePassivesAndTokens(decementBy,aAttachedEntity,aAttacker,aSkill);
    aAttachedEntity->combatEntityHub->CheckAttackDefencePassivesAndTokens(decementBy,aAttachedEntity,aAttacker,aSkill);

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

void UCombatEntityWrapper::SetAttachedCombatEntity(UResourceHandler* ResourceHandler,UCombatEntity*  aCombatEntity)
{
   aCombatEntity->resetOneWrapperToDefault.AddDynamic(this,&UCombatEntityWrapper::RemoveAilment);
    resourceHandler = ResourceHandler;
    attachedCombatEntity = aCombatEntity;
    
}

void UCombatEntityWrapper::SetCalculateDamageDefault(UWrapperTakeOver* aCalculateDamageWrapper)
{
    UWrapperTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
   attachedCombatEntity->onStatusAilmentEnd.Broadcast(calculateDamage->ailmentInfo.statusAilment);
    calculateDamageTemp->Initialize(resourceHandler,ECombatEntityWrapperType::CalculateDamage);
    calculateDamage = calculateDamageTemp;
}

void UCombatEntityWrapper::SetCalculateDamageWrapper(UWrapperTakeOver* aCalculateDamageWrapper)
{
    UWrapperTakeOver* calculateDamageTemp = aCalculateDamageWrapper;
    calculateDamageTemp->Initialize(resourceHandler,ECombatEntityWrapperType::CalculateDamage);
    calculateDamageTemp->SetAilmentTurnLength(3);
    calculateDamage = calculateDamageTemp;
}

FCombatLog_AttackDefense_Data UCombatEntityWrapper::ExecuteCalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    resetOneWrapperToDefault = aAttacker->resetOneWrapperToDefault;
    FCombatLog_Damage_Data DamageLog = calculateDamage->DamageLog( attachedCombatEntity, aAttacker,aSkill);
    FCombatLog_Defense_Data DefenceLog = calculateDamage->DefenseLog(DamageLog, attachedCombatEntity, aAttacker,aSkill);
    FCombatLog_AttackDefense_Data attackDefence = calculateDamage->CalculateDamage(DamageLog,DefenceLog);
    return attackDefence;
}

UWrapperTakeOver* UCombatEntityWrapper::GetCalculateDamageWrapper()
{
    return calculateDamage;
}

void UCombatEntityWrapper::TurnEnd()
{
    calculateDamage->TurnEnd();
}
