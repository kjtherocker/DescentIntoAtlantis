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
	Classes          = 8,
};


UENUM()
enum class  EClasses
{
	None                 = 0,
	GraveKnight          = 1,
	WaterShaper          = 2,
	Thief                = 3,
	HydroArcher          = 4,
};


UENUM()
enum class  EPartyMembers
{
	None                = 0,
	Fide                = 1,
	Rain                = 2,
	Fienne              = 3,
	Gram                = 4,
};




