// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"

#include "CombatEntityHub.h"
#include "CombatEntityWrapper.h"
#include "CombatGameModeBase.h"
#include "CombatStat.h"
#include "EElementalType.h"
#include "Health.h"
#include "PassiveHandler.h"
#include "PassiveSkills.h"
#include "SkillFactorySubsystem.h"
#include "SkillBase.h"


void UCombatEntity::SetAWrapperToDefault(ECombatEntityWrapperType aShellType)
{
    health->SetAWrapperToDefault(aShellType);
}

void UCombatEntity::SetCombatEntity(USkillFactorySubsystem* aSkillFactory,UPassiveFactorySubsystem* aPassiveSkillFactory, UPersistentGameinstance* aPersistentGameinstance)
{

    for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
    {
        EStatTypes Value = static_cast<EStatTypes>(i);
        InitializeStats(Value);
    }

    resetOneWrapperToDefault.AddDynamic(this,&UCombatEntity::SetAWrapperToDefault);

    combatEntityHub          = NewObject<UCombatEntityHub>();
    combatEntityHub->InitializeCombatEntityHub(this,aPassiveSkillFactory,aPersistentGameinstance);
    health                  = NewObject<UHealth>();
    mana                    = NewObject<UMana>();
}


void UCombatEntity::InitializeStats(EStatTypes aAbilityScoreTypes)
{
    abilityScoreMap.Add(aAbilityScoreTypes,  NewObject<UCombatStat>());
    abilityScoreMap[aAbilityScoreTypes]->SetStatType(aAbilityScoreTypes);
}


void UCombatEntity::SetTacticsEvents(ACombatGameModeBase* aCombatManager)
{
    aCombatManager->OnRoundEndDelegate.AddDynamic(this,&UCombatEntity::EndTurn);
}

void UCombatEntity::StartTurn()
{
    for(int i =0 ;i < skillAliments.Num();i++)
    {
        skillAliments[i]->ActivateAilment(this);
    }
}

void UCombatEntity::EndTurn()
{
    OnRoundEnd.Broadcast();
    for (TTuple<EStatTypes, UCombatStat*> abilityScore : abilityScoreMap)
    {
        abilityScore.Value->TurnEnd();
    }
    health->TurnEnd();
   
}


void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

void UCombatEntity::InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType)
{
    onStatusAilmentStart.Broadcast(aAliment->ailmentInfo.statusAilment);
    health->InflictAilment(aAliment,aCombatEntityWrapperType);
}


void UCombatEntity::AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot)
{
    if(aPassiveSkills == nullptr)
    {
        return;
    }
    
    combatEntityHub->passiveHandler->AddPassive(aPassiveSkills,passiveSkillSlot);
}

void UCombatEntity::RemovePassive(UPassiveSkills* aPassiveSkills)
{
    if(aPassiveSkills == nullptr)
    {
        return;
    }
    
    combatEntityHub->passiveHandler->RemovePassive(aPassiveSkills);
}

void UCombatEntity::SetCurrentRow(ERowType aRowTypes)
{
    if(aRowTypes == ERowType::None)
    {
        return;
    }

    currentRow = aRowTypes;
}


FCombatLog_AttackDefense_Data UCombatEntity::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return  health->CalculateDamage(aAttacker,aSkill);
}

void UCombatEntity::Reset()
{
    
}

void UCombatEntity::AlimentDecrementHealth(int aDamage)
{
//    currentHealth -= aDamage;
//    DeathCheck();
//    if(currentHealth < 0)
//    {
//        currentHealth = 0;
//    }
//    hasHealthOrManaValuesChanged.Broadcast();
//    if(!isMarkedForDeath)
//    {
//        ActivateDamageHitEffect();
//    }
}

FCombatLog_AttackDefense_Data UCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return health->DecrementHealth(aAttacker,aSkill);
}


EPressTurnReactions UCombatEntity::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
    return health->IncrementHealth(aHealer,aSkill);
}

void UCombatEntity::IncrementHealth(int aIncrease)
{
    health->IncrementHealth(aIncrease);
}

void UCombatEntity::IncrementMana(int aIncrease)
{
    mana->IncrementMana(aIncrease);
}

EPressTurnReactions UCombatEntity::ApplyBuff(UCombatEntity* aBuffer, FSkillsData aSkill)
{
   //  abilityScoreMap[aSkill.ablityScoreToBuffOrDebuff]->AttachAbilityScoreChange(aSkill.abilityScoreChangeDuration,true);


    return EPressTurnReactions::Normal;
}

void UCombatEntity::DecrementMana(int aDecrementBy)
{
    mana->DecrementMana(aDecrementBy);
    hasHealthOrManaValuesChanged.Broadcast();
}

void UCombatEntity::DecrementSync(int aDecrementBy)
{
    currentSync -= aDecrementBy;
    hasHealthOrManaValuesChanged.Broadcast();
}

ECharactertype UCombatEntity::GetCharactertype()
{
    return characterType;
}

void UCombatEntity::Resurrection()
{
}

void UCombatEntity::DeathCheck()
{
    if(health->GetCurrentHealth() <= 0)
    {
        isMarkedForDeath = true;
    }
}

void UCombatEntity::Death()
{
    wasKilled.Broadcast();
}

void UCombatEntity::PostDamage()
{
    DeathCheck();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }
}

int UCombatEntity::GetHit()
{
    return abilityScoreMap[EStatTypes::Hit]->GetAllStats();
}

int UCombatEntity::GetEvasion()
{
    return abilityScoreMap[EStatTypes::Evasion]->GetAllStats();
}

int UCombatEntity::GetAilmentResistance(EStatusAilments aStatusAilment)
{
    int AilmentResistance = 0;
   // for (auto Element : passiveSkills)
   // {
   //     if(Element->)
   //     Element->
   // }
    return AilmentResistance;
}

int UCombatEntity::GetAilmentInfliction(EStatusAilments aStatusAilment)
{
    return 0;
}


void UCombatEntity::ActivateDamageHitEffect()
{
    wasDamaged.Broadcast();
}

void UCombatEntity::SetToDefaultState()
{
}

FString UCombatEntity::GetEntityName()
{
    return "NOT INITIALIZED";
}

float UCombatEntity::GetHealthPercentage()
{
    return health->GetHealthPercentage();
}

float UCombatEntity::GetPotentialHealthPercentage(int aDamage)
{
    return health->GetPotentialHealthPercentage(aDamage);
}

float UCombatEntity::GetManaPercentage()
{
    return  mana->GetManaPercentage();
}

float UCombatEntity::GetSyncPercentage()
{
    return 0;
}

bool UCombatEntity::GetIsMarkedForDeath()
{
    return isMarkedForDeath;
}

//Related But not combatentity


