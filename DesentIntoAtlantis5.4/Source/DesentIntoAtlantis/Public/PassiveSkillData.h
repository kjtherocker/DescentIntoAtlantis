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

	UPROPERTY()
	EPassiveSkillSlotType passiveSkillPlacement;
	
	
	UPROPERTY( EditAnywhere , Category = "Trigger")    
	ESkillType      trigger1SkillType;
    
	UPROPERTY( EditAnywhere , Category = "Trigger")    
	ESkillUsage     trigger2SkillUsage;
    
	UPROPERTY( EditAnywhere , Category = "Trigger")    
	ESkillRange trigger3SkillRange ;
    
	UPROPERTY( EditAnywhere , Category = "Trigger")    
	ESkillDamageType trigger4DamageType;
    
	UPROPERTY( EditAnywhere , Category = "Trigger")    
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