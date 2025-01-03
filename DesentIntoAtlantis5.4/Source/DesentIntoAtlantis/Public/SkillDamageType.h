// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UENUM()
enum class ESkillDamageType : uint8
{
	None     = 0,
	Physical = 1,
	Magic    = 2,
	Almighty = 3
};
