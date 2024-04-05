#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  EDataTableTypes
{
	None             = 0,
	Enemys           = 1,
	EnemyGroups      = 2,
	PlayerCharacters = 3,
	Tutorial         = 4,
	Floor            = 5,
	FloorEvent       = 6,
	Dialogue         = 7,
};


UENUM()
enum class  EDataTableClasses
{
	None                 = 0,
	Paladin              = 1,
	DarkKnight           = 2,
	Dancer               = 3,
	SoulEater            = 4,
};


