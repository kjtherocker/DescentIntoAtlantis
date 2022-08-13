// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
enum EElementalTypes
{
	Null,
	Fire,
	Ice,
	Wind,
	Lighting,
	Shadow,
	Light
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

UCLASS()
class DESENTINTOATLANTIS_API USkills_Base : public UObject
{
	GENERATED_BODY()


public:

	EElementalTypes m_ElementalType;
	ESkillType      m_SkillType;
	ESkillRange     m_SkillFormation;
	EAilment        m_SkillAilment;
	
	UPROPERTY( EditAnywhere )
	FString SkillName;
	UPROPERTY( EditAnywhere )
	FString SkillDescription;

	UPROPERTY( EditAnywhere )
	int m_CostToUse;
	UPROPERTY( EditAnywhere )
	int m_Damage;
	UPROPERTY( EditAnywhere )
	int m_SkillRange;


	virtual void UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim);
	virtual void UseSkill(ACreature_Base* aAttacker, ACreature_Base* aVictim);
	
	virtual void Initialize();
	
};
