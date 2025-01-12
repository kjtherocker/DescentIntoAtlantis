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
	PassiveSkills        = 13,
	CombatTokens         = 14,
	Equipment            = 15,
};


UENUM()
enum class  EClassID  : uint8
{
	None                 = 0,
	Banshee              = 1,
	AtlantianWarden      = 2,
	GemThief             = 3,
	LaidOffExecutioner   = 4,
};

UENUM()
enum class  EClassArchetype  : uint8
{
	None           = 0,
	DPS            = 1,
	Tank           = 2,
	Healer         = 3,
	Support        = 4,
};

UENUM()
enum class  EClassSubArchetype  : uint8
{
	None           = 0,
	Debuffer       = 1,
	Buffer         = 2,
	Evasion        = 3,
	Juggernaut     = 4,
	MagicResist    = 5,
	Shifter        = 6,
	PayOff         = 7,
};


UENUM()
enum class  EClassSlot  : uint8
{
	None                 = 0,
	Main                 = 1,
	Sub                  = 2,
};



UENUM()
enum class  EPartyMembers
{
	None                = 0,
	Kriede              = 1,
	Rain                = 2,
	Feienne             = 3,
	Gram                = 4,
};




