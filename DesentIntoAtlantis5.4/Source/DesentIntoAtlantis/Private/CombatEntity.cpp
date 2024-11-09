// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"

#include "CombatEntityWrapper.h"
#include "CombatGameModeBase.h"
#include "CombatStat.h"
#include "EElementalType.h"
#include "PassiveHandler.h"
#include "PassiveSkills.h"
#include "SkillFactorySubsystem.h"
#include "SkillBase.h"


void UCombatEntity::SetAWrapperToDefault(ECombatEntityWrapperType aShellType)
{
    switch (aShellType)
    {
        case ECombatEntityWrapperType::None:
            
        break;
        case ECombatEntityWrapperType::CalculateDamage:
            inUseCombatWrapper->SetCalculateDamageDefault(allDefaultCombatWrapper->GetCalculateDamageWrapper());
        break;
    }
}

void UCombatEntity::SetCombatEntity(USkillFactorySubsystem* aSkillFactory,UPassiveSkillFactorySubsystem* aPassiveSkillFactory)
{

    for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
    {
        EStatTypes Value = static_cast<EStatTypes>(i);
        InitializeStats(Value);
    }

    resetOneWrapperToDefault.AddDynamic(this,&UCombatEntity::SetAWrapperToDefault);

    passiveHandler          = NewObject<UPassiveHandler>();
    passiveHandler->InitializePassiveHandler(this,aPassiveSkillFactory);

    
    inUseCombatWrapper      = NewObject<UCombatEntityWrapper>();
    allDefaultCombatWrapper = NewObject<UCombatEntityWrapper>();
    allDefaultCombatWrapper->SetAttachedCombatEntity(this);
    allDefaultCombatWrapper->SetCalculateDamageAilment(NewObject<UCalculateDamage_Base>());
    
    inUseCombatWrapper->SetAttachedCombatEntity(this);
    inUseCombatWrapper->SetCalculateDamageAilment(allDefaultCombatWrapper->GetCalculateDamageWrapper());
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
    for (TTuple<EStatTypes, UCombatStat*> abilityScore : abilityScoreMap)
    {
        abilityScore.Value->TurnEnd();
    }
    inUseCombatWrapper->TurnEnd();
}


void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

void UCombatEntity::InflictAilment(UAilmentShellTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType)
{
    onStatusAilmentStart.Broadcast(aAliment->ailmentInfo.statusAilment);
    inUseCombatWrapper->SetAilment(aAliment,aCombatEntityWrapperType);
}


void UCombatEntity::AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot)
{
    if(aPassiveSkills == nullptr)
    {
        return;
    }
    
    passiveHandler->AddPassive(aPassiveSkills,passiveSkillSlot);
}

void UCombatEntity::RemovePassive(UPassiveSkills* aPassiveSkills)
{
    if(aPassiveSkills == nullptr)
    {
        return;
    }
    
    passiveHandler->RemovePassive(aPassiveSkills);
}


int UCombatEntity::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return inUseCombatWrapper->ExecuteCalculateDamage(aAttacker,aSkill);
}

void UCombatEntity::Reset()
{
    
}

void UCombatEntity::AlimentDecrementHealth(int aDamage)
{
    currentHealth -= aDamage;
    DeathCheck();
    if(currentHealth < 0)
    {
        currentHealth = 0;
    }
    hasHealthOrManaValuesChanged.Broadcast();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }
}

EPressTurnReactions UCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    EPressTurnReactions reaction = EPressTurnReactions::Normal;
	    
    if (aSkill.elementalType == elementalWeakness)
    {
        reaction =  EPressTurnReactions::Weak;
    }
    if (aSkill.elementalType ==  elementalStrength)
    {
        reaction =  EPressTurnReactions::Strong;
    }

    currentHealth -= CalculateDamage(aAttacker,aSkill);
    DeathCheck();
    if(currentHealth < 0)
    {
        currentHealth = 0;
    }
    currentSync += 30;
    hasHealthOrManaValuesChanged.Broadcast();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }

  
    return reaction;
}


EPressTurnReactions UCombatEntity::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
    int AmountOfHpToAdd =  aSkill.damage + (aHealer->abilityScoreMap[EStatTypes::Magic]->GetAllStats() / ABILITYSCORE_CONVERSION_RATIO);
    currentHealth += AmountOfHpToAdd;
    
    if(currentHealth >= maxHealth)
    {
        currentHealth = maxHealth;
    }
    hasHealthOrManaValuesChanged.Broadcast();
    return EPressTurnReactions::Normal;
}

EPressTurnReactions UCombatEntity::ApplyBuff(UCombatEntity* aBuffer, FSkillsData aSkill)
{
     abilityScoreMap[aSkill.ablityScoreToBuffOrDebuff]->AttachAbilityScoreChange(aSkill.abilityScoreChangeDuration,true);


    return EPressTurnReactions::Normal;
}

void UCombatEntity::DecrementMana(int aDecrementBy)
{
    currentMana -= aDecrementBy;
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
    if(currentHealth <= 0)
    {
        isMarkedForDeath = true;
    }
}

void UCombatEntity::Death()
{
    wasKilled.Broadcast();
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

float UCombatEntity::GetHealthPercentage()
{
    return 0;
}

float UCombatEntity::GetPotentialHealthPercentage(int aDamage)
{
    int tempCurrentHealth = currentHealth;
    tempCurrentHealth -= aDamage;

    return  (float)tempCurrentHealth / (float)maxHealth;
    
}

float UCombatEntity::GetManaPercentage()
{
    return 0;
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


