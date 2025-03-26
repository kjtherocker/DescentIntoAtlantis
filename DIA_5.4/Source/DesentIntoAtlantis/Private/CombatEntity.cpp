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
#include "ResourceHandler.h"
#include "SkillFactorySubsystem.h"
#include "SkillBase.h"


void UCombatEntity::SetAWrapperToDefault(ECombatEntityWrapperType aShellType)
{
    ResourceHandler->SetAWrapperToDefault(aShellType);
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

    ResourceHandler = NewObject<UResourceHandler>();
    ResourceHandler->Initialize(this);
}


void UCombatEntity::InitializeStats(EStatTypes aAbilityScoreTypes)
{
    abilityScoreMap.Add(aAbilityScoreTypes,  NewObject<UCombatStat>());
    abilityScoreMap[aAbilityScoreTypes]->SetStatType(aAbilityScoreTypes);
}


void UCombatEntity::SetTacticsEvents(ACombatGameModeBase* aCombatManager)
{
    aCombatManager->OnRoundEndDelegate.AddDynamic(this,&UCombatEntity::RoundEnd);
    aCombatManager->OnTeamTurnFinished.AddDynamic(this,&UCombatEntity::TeamTurnFinished);
}

void UCombatEntity::TeamTurnFinished(ECharactertype ACharactertype)
{
    if(characterType != ACharactertype)
    {
        return;
    }

    OnTeamTurnEnded.Broadcast();
}


void UCombatEntity::StartTurn()
{
    for(int i =0 ;i < skillAliments.Num();i++)
    {
        skillAliments[i]->ActivateAilment(this);
    }

    combatEntityHub->OnTurnStart();
    OnTurnStart.Broadcast();
}

void UCombatEntity::EndTurn()
{
    OnTurnEnd.Broadcast();
}

void UCombatEntity::RoundEnd()
{
    OnRoundEnd.Broadcast();
}

void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

void UCombatEntity::InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType)
{
    onStatusAilmentStart.Broadcast(aAliment->ailmentInfo.statusAilment);
    ResourceHandler->InflictAilment(aAliment,aCombatEntityWrapperType);
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
    return  ResourceHandler->CalculateDamage(aAttacker,aSkill);
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

FCombatLog_AttackDefense_Data UCombatEntity::AttackResource(EResource aResource, UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return ResourceHandler->AttackResourceWithSkill(aResource,aAttacker,aSkill);
}


EPressTurnReactions UCombatEntity::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
    return ResourceHandler->healthHandler->IncrementHealth(aHealer,aSkill);
}

void UCombatEntity::IncrementHealth(int aIncrease)
{
    ResourceHandler->IncrementResource(EResource::Health,aIncrease);
}

void UCombatEntity::IncrementMana(int aIncrease)
{
    ResourceHandler->IncrementResource(EResource::Mana,aIncrease);
}

EPressTurnReactions UCombatEntity::ApplyBuff(UCombatEntity* aBuffer, FSkillsData aSkill)
{
   //  abilityScoreMap[aSkill.ablityScoreToBuffOrDebuff]->AttachAbilityScoreChange(aSkill.abilityScoreChangeDuration,true);


    return EPressTurnReactions::Normal;
}

void UCombatEntity::DecrementMana(int aDecrementBy)
{
    ResourceHandler->DecrementResourceReturnOverFlow(EResource::Mana,aDecrementBy);
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
    if(ResourceHandler->GetCurrentHealth() <= 0)
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
    return ResourceHandler->healthHandler->GetPercentage();
}

float UCombatEntity::GetPotentialHealthPercentage(int aDamage)
{
    return ResourceHandler->healthHandler->GetPotentialPercentage(aDamage,true);
}

float UCombatEntity::GetManaPercentage()
{
    return  ResourceHandler->manaHandler->GetPercentage();
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


