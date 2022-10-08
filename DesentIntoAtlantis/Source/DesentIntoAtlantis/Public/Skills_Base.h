// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EElementalType.h"
#include "PressTurnManager.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.generated.h"

struct FCombatEntity;
/**
 * 
 */
UENUM(BlueprintType)
enum ESkillType
{
	Attack,
	Heal,
	Defence,
	Domain,

};

UENUM()
enum class ESkillDamageType
{
	none     = 0,
	Strength = 1,
	Magic    = 2,
};


UENUM(BlueprintType)
enum EAilment
{
	None,
	Poison,
	Daze,
	Sleep,
	Rage,
};

UENUM()
enum class ESkillRange
{
	Single,
	Multi,
};




USTRUCT()
struct DESENTINTOATLANTIS_API FSkills_Base : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


public:

	UPROPERTY( EditAnywhere )
	EElementalType elementalType;

	UPROPERTY( EditAnywhere )
	ESkillDamageType skillDamageType;
	
	ESkillType      SkillType;
	EAilment        SkillAilment;
	
	UPROPERTY( EditAnywhere )
	FString skillName;
	UPROPERTY( EditAnywhere )
	FString skillDescription;

	UPROPERTY( EditAnywhere )
	int costToUse;
	UPROPERTY( EditAnywhere )
	int damage;
	UPROPERTY( EditAnywhere )
	ESkillRange skillRange;

	UPROPERTY( EditAnywhere )
	UTexture2D* skillIcon;
	
	virtual PressTurnReactions UseSkill(FCombatEntity* aAttacker, FCombatEntity* aVictim);
	
	virtual void Initialize();
	
};
