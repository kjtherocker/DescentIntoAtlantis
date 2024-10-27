// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESkillUsage  : uint8
{
	None      = 0,
	Opponents = 1,
	Comrades  = 2,
};
