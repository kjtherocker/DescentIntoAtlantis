// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESkillType  : uint8
{
	None,
	Attack,
	Heal,
	Buff,
	Debuff,
	HealBuff,
	AttackDebuff,
	Start

};
