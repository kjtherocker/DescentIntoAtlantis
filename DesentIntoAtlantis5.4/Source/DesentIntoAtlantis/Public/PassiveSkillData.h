// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillData.generated.h"



enum class ESkillDamageType : uint8;
enum class ESkillRange      : uint8;
enum class ESkillUsage      : uint8;
enum class ESkillType       : uint8;
enum class EAtlantisEvents  : uint8;
enum class EStatTypes       : uint8;
enum class EElementalType   : uint8;
class FEventBase;



UENUM()
enum class ECombatTokenID   : uint8
{
	None               = 0,
	DarkWeakness       = 1,
	Evade              = 2,
	InFlame            = 3,
	StrengthUp         = 4,
	StrengthDown       = 5,
	MagicUp            = 6,
	MagicDown          = 7,
	HitUp              = 8,
	HitDown            = 9,
	EvasionUp          = 10,
	EvasionDown        = 11,
	DefenceUp          = 12,
	DefenceDown        = 13,
	ResistanceUp       = 14,
	ResistanceDown     = 15,
};


UENUM()
enum class ECombatTokenType   : uint8
{
	None               = 0,
	Positive           = 1,
	Neutral            = 2,
	Negative           = 3,
	PositiveNegative   = 4,
};

UENUM()
enum class EPassiveSkillID   : uint8
{
	None                 = 0,
	StatusAdept          = 1,
	DarkIncrease         = 2,
	DarkResist           = 3,
};

UENUM()
enum class EPassiveSkillSlotType   : uint8
{
	None                 = 0,
	Equip                = 1,
	MainClass            = 2,
	SubClass             = 3,
	Equipment            = 4,
	Debug                = 5,
};

UENUM()
enum class EPassiveSkillStatType : uint8
{
	None       = 0,
	RawStat    = 1,
	Percentage = 2,
};

UENUM()
enum class EPassiveGenericTrigger : uint8
{
	None       = 0,
	Start      = 1,
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatTokenStackData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	ECombatTokenID combatTokenID;

	UPROPERTY(EditAnywhere)
	int stackAmount = 1;
	UPROPERTY(EditAnywhere)
	int TurnLength  = 3;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveSkillData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere , Category = "Identity")
	EPassiveSkillID passiveSkillID;

	UPROPERTY( EditAnywhere , Category = "Identity")
	FString passiveName;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	FString passiveDescription;
	
	UPROPERTY( EditAnywhere , Category = "Identity")
	UTexture2D* passiveIcon;
	
	UPROPERTY( EditAnywhere, Category = "Damage" )
	int damageIncrease;

	UPROPERTY( EditAnywhere , Category = "Damage")
	int damagePercentageIncrease;

	UPROPERTY(EditAnywhere, Category = "Stat")
	EPassiveSkillStatType PassiveSkillStatType;
	
	UPROPERTY(EditAnywhere, Category = "Stat")
	TMap< EStatTypes,int> passiveStats;

	UPROPERTY(EditAnywhere, Category = "CombatTriggers" )
	TArray<FCombatTokenStackData> combatTokensOnPassive;
	
	UPROPERTY()
	EPassiveSkillSlotType passiveSkillPlacement;

	UPROPERTY( EditAnywhere , Category = "General Trigger")    
	EPassiveGenericTrigger  triggerGeneric;
	
	UPROPERTY( EditAnywhere , Category = "Attack Triggers")    
	ESkillType      trigger1SkillType;
    
	UPROPERTY( EditAnywhere , Category = "Attack Triggers")    
	ESkillUsage     trigger2SkillUsage;
    
	UPROPERTY( EditAnywhere , Category = "Attack Triggers")    
	ESkillRange trigger3SkillRange ;
    
	UPROPERTY( EditAnywhere , Category = "Attack Triggers")    
	ESkillDamageType trigger4DamageType;
    
	UPROPERTY( EditAnywhere , Category = "Attack Triggers")    
	EElementalType trigger5ElementalType;

};


USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveSkillClassData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	EPassiveSkillID passiveSkillID;

	UPROPERTY(EditAnywhere)
	int CPCost;

	UPROPERTY()
	bool isPassiveOwned = false;
};