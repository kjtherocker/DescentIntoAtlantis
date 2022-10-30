// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "PressTurnManager.h"
#include "Components/Image.h"
#include "Engine/DataTable.h"
#include "CombatEntity.generated.h"

struct FSkillsData;
class UCombatManager;
class UEnemyPortraitElement;
class USkillFactory;
/**
 * 
 */

UENUM()
enum class EAbilityScoreTypes
{
	Undefined,
	Strength,
	Magic,
	Hit,
	Evasion,
	Defence,
	Resistance
};


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

UCLASS()
class DESENTINTOATLANTIS_API UCombatAbilityStats : public UObject
{
	GENERATED_BODY()
public:
	int base    			= 0;
	int buff    			= 0;
	int debuff  			= 0;
	int domain  			= 0;
	int buffTimeRemaining   = 0;
	int debuffTimeRemaining = 0;

	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;
	int GetAllStats()
	{
		return base + buff + debuff + domain;
	}
	void AttachAbilityScoreChange(int timeLimit,bool isBuff)
	{
		if(isBuff)
		{
			buffTimeRemaining = timeLimit;
			buff              = base * ABILITYSCORE_CONVERSION_RATIO*10;
		}
		else
		{
			debuffTimeRemaining = timeLimit;
			debuff              = base * ABILITYSCORE_CONVERSION_RATIO;
		}
	}

	void TurnEnd()
	{
		buffTimeRemaining--;
		if(buffTimeRemaining <= 0)
		{
			buff = 0;
		}
		
		debuff--;
		if(debuffTimeRemaining <= 0)
		{
			debuff = 0;
		}
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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasDamaged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasKilled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHasHealthOrManaValuesChanged);
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntity : public UObject
{
	GENERATED_BODY()
protected:
	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;
	inline static const float ABILITYSCORE_BUFF_MULTIPLIER  = 2;
	inline static const float STRONG_DAMAGE_REDUCTION       = 0.6f;
	inline static const float WEAK_DAMAGE_INCREASE          = 1.5f;
	
	bool isMarkedForDeath = false;
	
public:
	FWasKilled                        wasKilled;
	FWasDamaged					      wasDamaged;
	FHasHealthOrManaValuesChanged     hasHealthOrManaValuesChanged;
	virtual void SetTacticsEntity(USkillFactory*  aSkillFactory);
	virtual void SetTacticsEvents(UCombatManager* aCombatManager);

	UFUNCTION()
	virtual void EndTurn();

	//SetStatusEffect(StatusEffects aStatusEffect);

	virtual void SetHealth(int aHealth);
	
	virtual int CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	
	virtual PressTurnReactions DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual PressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	virtual PressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);

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
	

	int maxHealth;
	int currentHealth;
	int currentMana;

	TMap< EAbilityScoreTypes,UCombatAbilityStats*> abilityScoreMap;

	

	int CurrentDomainpoints;
	int MaxDomainPoints = 3;

	int AmountOfTurns;
};



