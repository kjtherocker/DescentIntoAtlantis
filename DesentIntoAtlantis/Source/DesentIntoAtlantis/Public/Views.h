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
};


UENUM()
enum class  EViewElements
{
	None                     = 0,
	PartyStatusHealthbar     = 1,
};