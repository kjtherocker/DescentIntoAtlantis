// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  ECardinalNodeDirections
{
	Empty = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
    AllSidesOpen = 5,
    UpDown = 6,
    UpLeft = 7,
    Upright = 8,
    LeftDown = 9,
    RightDown = 10,
    LeftRight = 11,
    UpLeftRight = 12,
    UpLeftDown = 13,
    UpRightDown = 14,
    DownLeftRight = 15,
	BeyondMap     = 16,
};
