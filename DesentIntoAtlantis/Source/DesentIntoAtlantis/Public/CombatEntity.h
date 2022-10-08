// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "CombatClass.h"
#include "Components/Image.h"
#include "CombatEntity.generated.h"

class UEnemyPortraitElement;
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
	EElementalType ElementalStrength;
	
	UPROPERTY( EditAnywhere )
	EElementalType ElementalWeakness;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatAbilityStats :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	int base    = 0;
	int buff    = 0;
	int debuff  = 0;
	int domain  = 0;

	int GetAllStats()
	{
		return base + buff + debuff + domain;
	}
};

UENUM()
enum class ECharactertype
{
	Undefined,
	Ally,
	Enemy
};

//UENUM()
//class enum ECreaturesAilment
//{
//	None,
//	Poison,
//	Daze,
//	Sleep,
//	Rage,
//};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatEntity : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()





protected:
	inline static const float DAMAGE_CONVERSION_RATIO = 3;
	inline static const float STRONG_DAMAGE_REDUCTION = 0.6f;
	inline static const float WEAK_DAMAGE_INCREASE    = 1.5f;
	
	bool isMarkedForDeath = false;
	
public:
	

	virtual void SetTacticsEntity(USkillFactory* aSkillFactory);
	void EndTurn();

	//SetStatusEffect(StatusEffects aStatusEffect);

	virtual void SetHealth(int aHealth);
	
	virtual PressTurnReactions DecrementHealth(int aDecremenby);
	virtual int CalculateDamage(FCombatEntity* aAttacker,FSkills_Base* aSkill);
	virtual PressTurnReactions DecrementHealth(FCombatEntity* aAttacker, FSkills_Base* aSkill);
	
	virtual void IncrementHealth(int Increment);


	virtual ECharactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();

	virtual void ActivateDamageHitEffect();

	virtual float GetHealthPercentage();
	virtual float GetPotentialHealthPercentage(int aDamage);
	virtual float GetManaPercentage();

	bool GetIsMarkedForDeath();

	
	EElementalType ElementalStrength;
	
	EElementalType ElementalWeakness;
	
	ECharactertype characterType;

	UEnemyPortraitElement*  imageBodyPortrait;

	int maxHealth;
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
};



