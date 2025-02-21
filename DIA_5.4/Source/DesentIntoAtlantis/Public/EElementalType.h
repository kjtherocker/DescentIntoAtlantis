// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EElementalType : uint8
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
enum class EElementalReaction: uint8
{
	None      = 0,
	Resist    = 1,
	Null      = 2,
	Weak      = 3,
	Normal    = 4,
};

UENUM()
enum class  EPressTurnReactions : uint8
{
	Normal,
	Weak,
	Strong,
	Dodge,
	Null,
	Pass
};
