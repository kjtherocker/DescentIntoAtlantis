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

void FCombatEntity::DecrementHealth(int aDecremenby)
{
    currentHealth -= aDecremenby;
}

void FCombatEntity::DecrementHealth(int aDecrementby, EElementalType aElementalType, float aTimeTillInitalDamage,
    float aTimeTillHoveringUiElement, float TimeTillDamage)
{
    EElementalType AttackingElement = aElementalType;
   // EElementalType ElementalWeakness = m_ElementalWeakness;
   // EElementalType ElementalStrength = m_ElementalStrength;
   //     
//
   // if (AttackingElement == ElementalWeakness)
   // {
//
   // }
   // if (AttackingElement == ElementalStrength)
   // {
//
   // }

    DecrementHealth(aDecrementby);
    DeathCheck();
}

void FCombatEntity::IncrementHealth(int Increment)
{
    currentHealth += Increment;
}

FCombatEntity::Charactertype FCombatEntity::GetCharactertype()
{
    return m_Charactertype;
}

void FCombatEntity::Resurrection()
{
}

void FCombatEntity::DeathCheck()
{
}

void FCombatEntity::Death()
{
}

float FCombatEntity::GetHealthPercentage()
{
    return 0;
}

float FCombatEntity::GetManaPercentage()
{
    return 0;
}
