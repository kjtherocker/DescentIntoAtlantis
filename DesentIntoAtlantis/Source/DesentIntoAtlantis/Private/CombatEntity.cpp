// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"
#include "SkillFactory.h"
#include "Skills_Base.h"




void UCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
}

void UCombatEntity::EndTurn()
{
}



void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

PressTurnReactions UCombatEntity::DecrementHealth(int aDecremenby)
{
    currentHealth -= aDecremenby;
    return PressTurnReactions::Normal;
}

int UCombatEntity::CalculateDamage(UCombatEntity* aAttacker, FSkills_Base aSkill)
{
    int decementBy = aSkill.damage;

    decementBy += aSkill.skillDamageType == ESkillDamageType::Strength ?
        aAttacker->StrengthAbilityScore.GetAllStats() / DAMAGE_CONVERSION_RATIO
      : aAttacker->MagicAbilityScore.GetAllStats()    / DAMAGE_CONVERSION_RATIO;
	
    if (aSkill.elementalType == ElementalWeakness)
    {
        decementBy = decementBy * WEAK_DAMAGE_INCREASE;
    }
    if (aSkill.elementalType == ElementalStrength)
    {
        decementBy = decementBy * STRONG_DAMAGE_REDUCTION;
    }
	
    return decementBy;
}

PressTurnReactions UCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkills_Base aSkill)
{
    PressTurnReactions reaction = PressTurnReactions::Normal;
	    
    if (aSkill.elementalType == ElementalWeakness)
    {
        reaction =  PressTurnReactions::Weak;
    }
    if (aSkill.elementalType ==  ElementalStrength)
    {
        reaction =  PressTurnReactions::Strong;
    }

    currentHealth -= CalculateDamage(aAttacker,aSkill);
    DeathCheck();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }
    return reaction;
}


void UCombatEntity::IncrementHealth(int Increment)
{
    currentHealth += Increment;
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
}

void UCombatEntity::ActivateDamageHitEffect()
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

bool UCombatEntity::GetIsMarkedForDeath()
{
    return isMarkedForDeath;
}
