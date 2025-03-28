// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESkillType  : uint8
{
	None,
	Attack,
	Heal,
	PositiveCombatToken,
	NegativeCombatToken,
	HealPositiveCombatToken,
	AttackNegativeCombatToken,
	Start,
	Unique

};

UENUM()
enum class EResource  : uint8
{
	None,
	Mana,
	Health,
	Sync,
	ItemCharges,
	Damage
};

