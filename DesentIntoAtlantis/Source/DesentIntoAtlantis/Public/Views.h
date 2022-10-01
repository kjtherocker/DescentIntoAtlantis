// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  EViews
{
	None             = 0,
	CommandBoard     = 1,
	Healthbars       = 2,
	CombatBackground = 3,
	EnemySelection   = 4,
	SkillMenu        = 5,
	EnemyPortraits   = 6,
	TurnCounter      = 7,
	Dialogue         = 8,
};



UENUM()
enum class  EUiType
{
	None              = 0,
	ActiveUi          = 1,
	PersistentUi      = 2
};



UENUM()
enum class  EViewElements
{
	None                     = 0,
	PartyStatusHealthbar     = 1,
	SkillBar                 = 2,
	EnemySelectionElement    = 3,
	TurnCounterElement       = 4
};
