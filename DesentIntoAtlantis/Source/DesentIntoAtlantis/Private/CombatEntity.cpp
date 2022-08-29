// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillFactory.h"
#include "CombatEntity.h"


void FCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
    currentClass = NewObject<UCombatClass>(); 
    currentClass->InitializeDataTable(classDataTablePath, aSkillFactory,this);
}

void FCombatEntity::EndTurn()
{
}

int FCombatEntity::GetAllStrength()
{
    int TemporaryStat;

    TemporaryStat = currentClass->currentClassLevel->baseStrength + buffStrength + debuffStrength + domainStrength;

    return TemporaryStat;
}

int FCombatEntity::GetAllMagic()
{
    int TemporaryStat;

    TemporaryStat =  currentClass->currentClassLevel->baseMagic  + buffMagic + debuffMagic + domainMagic;

    return TemporaryStat;
}

int FCombatEntity::GetAllHit()
{
    int TemporaryStat;

    TemporaryStat = currentClass->currentClassLevel->baseHit + buffHit + debuffHit + domainHit;

    return TemporaryStat;
}

int FCombatEntity::GetAllEvasion()
{
    int TemporaryStat;

    TemporaryStat = currentClass->currentClassLevel->baseEvasion + buffEvasion + debuffEvasion + domainEvasion;

    return TemporaryStat;
}

int FCombatEntity::GetAllDefence()
{
    int TemporaryStat;

    TemporaryStat = currentClass->currentClassLevel->baseDefence + BuffDefence + DebuffDefence + DomainDefence;

    return TemporaryStat;
}

int FCombatEntity::GetAllResistance()
{
    int TemporaryMagic;

    TemporaryMagic = currentClass->currentClassLevel->BaseResistance + BuffResistance + DebuffResistance + DomainResistance;

    return TemporaryMagic;
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
    float currentValue = currentHealth;
    float maxValue     = currentClass->currentClassLevel->maxHealth;
    
    return currentValue / maxValue;
}

float FCombatEntity::GetManaPercentage()
{
    float currentValue = currentMana;
    float maxValue     = currentClass->currentClassLevel->maxMana;
    
    return currentValue / maxValue;
}
