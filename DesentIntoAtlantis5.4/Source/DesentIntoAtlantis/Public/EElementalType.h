// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
UENUM()
enum class EElementalType
{
	None     = 0,
	Null     = 1,
	Fire     = 2,
	Ice      = 3,
	Wind     = 4,
	Lighting = 5,
	Shadow   = 6,
	Light    = 7,
	Earth    = 8
};

UENUM()
enum class  EPressTurnReactions
{
	Normal,
	Weak,
	Strong,
	Dodge,
	Null,
	Pass
};