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

PressTurnReactions FCombatEntity::DecrementHealth(int aDecrementby, EElementalType aElementalType)
{
    return PressTurnReactions::Normal;
}

void FCombatEntity::IncrementHealth(int Increment)
{
    currentHealth += Increment;
}

FCombatEntity::Charactertype FCombatEntity::GetCharactertype()
{
    return characterType;
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
