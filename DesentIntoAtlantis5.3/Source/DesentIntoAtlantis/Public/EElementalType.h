// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
UENUM()
enum class EElementalType
{
	Null     = 0,
	Fire     = 1,
	Ice      = 2,
	Wind     = 3,
	Lighting = 4,
	Shadow   = 5,
	Light    = 6,
	Earth    = 7
};

UENUM()
enum class  PressTurnReactions
{
	Normal,
	Weak,
	Strong,
	Dodge,
	Null,
	Pass
};