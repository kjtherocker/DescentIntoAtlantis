// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"
#include "CombatGameModeBase.h"
#include "SkillFactorySubsystem.h"
#include "SkillsData.h"


void UCalculateDamage_Base::SetAttachedCombatEntity(UCombatEntity* aCombatEntity)
{
    AttachedCombatEntity = aCombatEntity;
}

int UCalculateDamage_Base::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    int decementBy = aSkill.damage;

    UCombatEntity* attachedCombatEntity = AttachedCombatEntity;
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

int UCalculateDamage_Fear::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return UCalculateDamage_Base::CalculateDamage(aAttacker, aSkill) * 2;
}

void UCombatEntity::SetTacticsEntity(USkillFactorySubsystem* aSkillFactory)
{
    abilityScoreMap.Add(EAbilityScoreTypes::Strength,  NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Magic,     NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Hit,       NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Evasion,   NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Defence,   NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Resistance,NewObject<UCombatAbilityStats>());

    combatEntityShell.calculateDamage = NewObject<UCalculateDamage_Base>();
    combatEntityShell.calculateDamage->AttachedCombatEntity(this);
    
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
    for (TTuple<EAbilityScoreTypes, UCombatAbilityStats*> abilityScore : abilityScoreMap)
    {
        abilityScore.Value->TurnEnd();
    }
}



void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

void UCombatEntity::InflictAilment(UAilmentShellTakeOver* aAliment)
{
    combatEntityShell.calculateDamage = NewObject<UCalculateDamage_Fear>();
    skillAliments.Add(aAliment);
}


int UCombatEntity::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    return combatEntityShell.calculateDamage->CalculateDamage(aAttacker,aSkill);
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

PressTurnReactions UCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    PressTurnReactions reaction = PressTurnReactions::Normal;
	    
    if (aSkill.elementalType == elementalWeakness)
    {
        reaction =  PressTurnReactions::Weak;
    }
    if (aSkill.elementalType ==  elementalStrength)
    {
        reaction =  PressTurnReactions::Strong;
    }

    currentHealth -= CalculateDamage(aAttacker,aSkill);
    DeathCheck();
    if(currentHealth < 0)
    {
        currentHealth = 0;
    }
    currentSync += 10;
    hasHealthOrManaValuesChanged.Broadcast();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }

  
    return reaction;
}


PressTurnReactions UCombatEntity::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
    int AmountOfHpToAdd =  aSkill.damage + (aHealer->abilityScoreMap[EAbilityScoreTypes::Magic]->GetAllStats() / ABILITYSCORE_CONVERSION_RATIO);
    currentHealth += AmountOfHpToAdd;
    
    if(currentHealth >= maxHealth)
    {
        currentHealth = maxHealth;
    }
    hasHealthOrManaValuesChanged.Broadcast();
    return PressTurnReactions::Normal;
}

PressTurnReactions UCombatEntity::ApplyBuff(UCombatEntity* aBuffer, FSkillsData aSkill)
{
     abilityScoreMap[aSkill.ablityScoreToBuffOrDebuff]->AttachAbilityScoreChange(aSkill.abilityScoreChangeDuration,true);


    return PressTurnReactions::Normal;
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
