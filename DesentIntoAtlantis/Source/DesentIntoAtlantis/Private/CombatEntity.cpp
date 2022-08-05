// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntity.h"

void UCombatEntity::SetTacticsEntity()
{
}

void UCombatEntity::EndTurn()
{
}

int UCombatEntity::GetAllStrength()
{
    int TemporaryStat;

    TemporaryStat = m_BuffStrength + m_DebuffStrength + m_BaseStrength + m_DomainStrength;

    return TemporaryStat;
}

int UCombatEntity::GetAllMagic()
{
    int TemporaryStat;

    TemporaryStat = m_BuffMagic + m_DebuffMagic + m_BaseMagic + m_DomainMagic;

    return TemporaryStat;
}

int UCombatEntity::GetAllHit()
{
    int TemporaryStat;

    TemporaryStat = m_BuffHit + m_DebuffHit + m_BaseHit + m_DomainHit;

    return TemporaryStat;
}

int UCombatEntity::GetAllEvasion()
{
    int TemporaryStat;

    TemporaryStat = m_BuffEvasion+ m_DebuffEvasion + m_BaseEvasion + m_DomainEvasion;

    return TemporaryStat;
}

int UCombatEntity::GetAllDefence()
{
    int TemporaryStat;

    TemporaryStat = m_BuffDefence + m_DebuffDefence + m_BaseDefence + m_DomainDefence;

    return TemporaryStat;
}

int UCombatEntity::GetAllResistance()
{
    int TemporaryMagic;

    TemporaryMagic = m_BuffResistance + m_DebuffResistance + m_BaseResistance + m_DomainResistance;

    return TemporaryMagic;
}

void UCombatEntity::SetHealth(int aHealth)
{
    maxHealth = aHealth;
    currentHealth = maxHealth;
}

void UCombatEntity::DecrementHealth(int aDecremenby)
{
    currentHealth -= aDecremenby;
}

void UCombatEntity::DecrementHealth(int aDecrementby, EElementalType aElementalType, float aTimeTillInitalDamage,
    float aTimeTillHoveringUiElement, float TimeTillDamage)
{
    EElementalType AttackingElement = aElementalType;
    EElementalType ElementalWeakness = m_ElementalWeakness;
    EElementalType ElementalStrength = m_ElementalStrength;
        

    if (AttackingElement == ElementalWeakness)
    {

    }
    if (AttackingElement == ElementalStrength)
    {

    }

    DecrementHealth(aDecrementby);
    DeathCheck();
}

void UCombatEntity::IncrementHealth(int Increment)
{
    currentHealth += Increment;
}

UCombatEntity::Charactertype UCombatEntity::GetCharactertype()
{
    return m_Charactertype;
}

void UCombatEntity::Resurrection()
{
}

void UCombatEntity::DeathCheck()
{
}

void UCombatEntity::Death()
{
}

float UCombatEntity::GetHealthPercentage()
{
    float tempCurrentHealth = currentHealth;
    float tempMaxHealth     = maxHealth;
    
    return tempCurrentHealth / tempMaxHealth;
}
