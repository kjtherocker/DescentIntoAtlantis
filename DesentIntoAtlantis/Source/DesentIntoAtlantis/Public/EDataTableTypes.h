#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  EDataTableTypes
{
	None             = 0,
	Skills           = 1,
	Enemys           = 2,
	EnemyGroups      = 3,
	Party            = 4,
	Tutorial         = 5,
	Floor            = 6,
	FloorEvent       = 7,
	Dialogue         = 8,
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


