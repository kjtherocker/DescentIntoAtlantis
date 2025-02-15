// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"


UENUM()
enum class  EFloorIdentifier
{
    None               =  0,
    Test               =  1,
    PrizonZ_Floor1     =  2,
    PrisonZ_Floor2     =  3,
    PrisonZ_Floor3     =  4,
    PrisonZ_Combat     =  5,
    PrisonZ_Annex      = 6,
};
