// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "CombatClass.h"
#include "Components/Image.h"
#include "CombatEntity.generated.h"

class USkillFactory;
struct FSkills_Base;
/**
 * 
 */


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatEntityData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	int maxHealth;
	
	UPROPERTY( EditAnywhere )
	int maxMana;

	UPROPERTY( EditAnywhere )
	int baseStrength;

	UPROPERTY( EditAnywhere )
	int baseMagic;

	UPROPERTY( EditAnywhere )
	int baseHit;

	UPROPERTY( EditAnywhere )
	int baseEvasion;

	UPROPERTY( EditAnywhere )
	int baseDefence;

	UPROPERTY( EditAnywhere )
	int baseResistance;

	UPROPERTY( EditAnywhere )
	TEnumAsByte<EElementalType> ElementalStrength;
	UPROPERTY( EditAnywhere )
	TEnumAsByte<EElementalType> ElementalWeakness;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatAbilityStats :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	int base;
	int buff;
	int debuff;
	int domain;

	int GetAllStats()
	{
		return base + buff + debuff + domain;
	}
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatEntity : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	 enum Charactertype
	{
		Undefined,
        Ally,
        Enemy
    };

	 enum CreaturesAilment
	{
		None,
        Poison,
        Daze,
        Sleep,
        Rage,
    };


public:


	virtual void SetTacticsEntity(USkillFactory* aSkillFactory);
	void EndTurn();

	//SetStatusEffect(StatusEffects aStatusEffect);

	virtual void SetHealth(int aHealth);
	
	virtual PressTurnReactions DecrementHealth(int aDecremenby);
	virtual PressTurnReactions DecrementHealth(int aDecrementby, EElementalType aElementalType);

	virtual void IncrementHealth(int Increment);


	virtual Charactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();

	virtual float GetHealthPercentage();
	virtual float GetManaPercentage();
	
	Charactertype characterType;



	int currentHealth;
	int currentMana;

	FCombatAbilityStats StrengthAbilityScore;
	FCombatAbilityStats MagicAbilityScore;
	FCombatAbilityStats HitAbilityScore;
	FCombatAbilityStats EvasionAbilityScore;
	FCombatAbilityStats DefenceAbilityScore;
	FCombatAbilityStats ResistanceAbilityScore;
	

	int CurrentDomainpoints;
	int MaxDomainPoints = 3;

	int AmountOfTurns;
    
	bool m_IsAlive;
};



