// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EElementalType.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.generated.h"

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


UENUM(BlueprintType)
enum EAilment
{
	None,
	Poison,
	Daze,
	Sleep,
	Rage,
};

UENUM(BlueprintType)
enum ESkillRange
{
	Single,
	Multi,
};



class ACreature_Base;

USTRUCT()
struct DESENTINTOATLANTIS_API FSkills_Base : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


public:

	UPROPERTY( EditAnywhere )
	TEnumAsByte<EElementalType> ElementalType;
	
	ESkillType      SkillType;
	ESkillRange     SkillFormation;
	EAilment        SkillAilment;
	
	UPROPERTY( EditAnywhere )
	FString SkillName;
	UPROPERTY( EditAnywhere )
	FString SkillDescription;

	UPROPERTY( EditAnywhere )
	int CostToUse;
	UPROPERTY( EditAnywhere )
	int Damage;
	UPROPERTY( EditAnywhere )
	int SkillRange;

	UPROPERTY( EditAnywhere )
	UTexture2D* SkillIcon;


	virtual void UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim);
	virtual void UseSkill(ACreature_Base* aAttacker, ACreature_Base* aVictim);
	
	virtual void Initialize();
	
};
