// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"
#include "SkillFactory.h"
#include "Skills_Base.h"




void FCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
}

void FCombatEntity::EndTurn()
{
}



void FCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

PressTurnReactions FCombatEntity::DecrementHealth(int aDecremenby)
{
    currentHealth -= aDecremenby;
    return PressTurnReactions::Normal;
}

int FCombatEntity::CalculateDamage(FCombatEntity* aAttacker, FSkills_Base* aSkill)
{
    int decementBy = aSkill->damage;

    decementBy += aSkill->skillDamageType == ESkillDamageType::Strength ?
        aAttacker->StrengthAbilityScore.GetAllStats() / DAMAGE_CONVERSION_RATIO
      : aAttacker->MagicAbilityScore.GetAllStats()    / DAMAGE_CONVERSION_RATIO;
	
    if (aSkill->elementalType == ElementalWeakness)
    {
        decementBy = decementBy * WEAK_DAMAGE_INCREASE;
    }
    if (aSkill->elementalType == ElementalStrength)
    {
        decementBy = decementBy * STRONG_DAMAGE_REDUCTION;
    }
	
    return decementBy;
}

PressTurnReactions FCombatEntity::DecrementHealth(FCombatEntity* aAttacker, FSkills_Base* aSkill)
{
    PressTurnReactions reaction = PressTurnReactions::Normal;
	    
    if (aSkill->elementalType == ElementalWeakness)
    {
        reaction =  PressTurnReactions::Weak;
    }
    if (aSkill->elementalType ==  ElementalStrength)
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


void FCombatEntity::IncrementHealth(int Increment)
{
    currentHealth += Increment;
}

ECharactertype FCombatEntity::GetCharactertype()
{
    return characterType;
}

void FCombatEntity::Resurrection()
{
}

void FCombatEntity::DeathCheck()
{
    if(currentHealth <= 0)
    {
        isMarkedForDeath = true;
    }
}

void FCombatEntity::Death()
{
}

void FCombatEntity::ActivateDamageHitEffect()
{
}

float FCombatEntity::GetHealthPercentage()
{
    return 0;
}

float FCombatEntity::GetPotentialHealthPercentage(int aDamage)
{
    int tempCurrentHealth = currentHealth;
    tempCurrentHealth -= aDamage;

    return  (float)tempCurrentHealth / (float)maxHealth;
    
}

float FCombatEntity::GetManaPercentage()
{
    return 0;
}

bool FCombatEntity::GetIsMarkedForDeath()
{
    return isMarkedForDeath;
}
