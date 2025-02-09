// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"


UENUM()
enum class  EAtlantisEvents : uint8
{
	Empty         = 0,
	SpecificEvent = 1,
	AnotherEvent  = 2,
	Damage        = 3,
	MAX           = 4
};

UENUM()
enum class  EGodType : uint8
{
	None          = 0,
	Chrysalis     = 1,
	Amaros        = 2,
	Max           = 3
};
