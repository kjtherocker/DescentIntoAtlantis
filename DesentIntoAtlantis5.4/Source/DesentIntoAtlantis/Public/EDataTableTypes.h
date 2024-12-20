#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  EDataTableTypes
{
	None                 = 0,
	Enemys               = 1,
	EnemyGroups          = 2,
	PlayerCharacters     = 3,
	Tutorial             = 4,
	Floor                = 5,
	FloorEvent           = 6,
	Dialogue             = 7,
	Classes              = 8,
	Skills               = 9,
	DialogueActor        = 10,
	PartyExperienceTable = 11,
	ChallengeTable       = 12,
	PassiveSkills        = 13
};


UENUM()
enum class  EClasses  : uint8
{
	None                 = 0,
	Banshee              = 1,
	AtlantianWarden      = 2,
	GemThief             = 3,
	LaidOffExecutioner   = 4,
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




