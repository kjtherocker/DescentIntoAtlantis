// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



UENUM()
enum class EPartySlotType : uint8
{
	None          = 0,
	Active        = 1,
	Reserve       = 2,
	Inaccessible  = 3,
};

UENUM()
enum class ESlot : uint8
{
	None   = 0,
	Full   = 1,
	Slot1  = 2,
	Slot2  = 3,
	Slot3  = 4,
	Slot4  = 5,
};

UENUM()
enum class EPartyType : uint8
{
	None         = 0,
	Active       = 1,
	Reserve      = 2,
	InAccessible = 3,
};
