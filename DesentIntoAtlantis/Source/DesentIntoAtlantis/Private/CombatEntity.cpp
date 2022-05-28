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

void UCombatEntity::DecrementHealth(int Decremenby)
{
    m_CurrentHealth -= Decremenby;
}

void UCombatEntity::DecrementHealth(int Decrementby, EElementalType elementalType, float TimeTillInitalDamage,
    float TimeTillHoveringUiElement, float TimeTillDamage)
{
    EElementalType AttackingElement = elementalType;
    EElementalType ElementalWeakness = m_ElementalWeakness;
    EElementalType ElementalStrength = m_ElementalStrength;
        
    int ArgumentReference = Decrementby;
    float ConvertToFloat = ArgumentReference / 1.5f;
    int ConvertToInt = (int)ConvertToFloat;
    Decrementby = ConvertToInt;

    if (AttackingElement == ElementalWeakness)
    {

    }
    if (AttackingElement == ElementalStrength)
    {

    }

    DecrementHealth(Decrementby);
    DeathCheck();
}

void UCombatEntity::IncrementHealth(int Increment)
{
    m_CurrentHealth += Increment;
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