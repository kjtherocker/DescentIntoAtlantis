// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntityWrapper.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "PressTurnManager.h"

#include "Components/Image.h"
#include "Engine/DataTable.h"
#include "CombatEntity.generated.h"


enum class EClasses;
class UAilment;
class USkillAliment;
struct FSkillsData;
enum class EStatusAilments;
class ACombatGameModeBase;
class AEnemyPortraitElement;
class USkillFactorySubsystem;
/**
 * 
 */

UENUM()
enum class EStatTypes
{
	None       = 0,
	Strength   = 1,
	Magic      = 2,
	Hit        = 3,
	Evasion    = 4,
	Defence    = 5,
	Resistance = 6,
	Max        = 7,
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
	TMap< EStatTypes,int> baseStats; 
};




UCLASS()
class DESENTINTOATLANTIS_API UCombatAbilityStats : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	EStatTypes StatType;
	
	UPROPERTY( EditAnywhere )
	int base    			= 0;
	UPROPERTY( EditAnywhere )
	int buff    			= 0;
	UPROPERTY( EditAnywhere )
	int debuff  			= 0;
	UPROPERTY( EditAnywhere )
	int domain  			= 0;
	UPROPERTY( EditAnywhere )
	int buffTimeRemaining   = 0;
	UPROPERTY( EditAnywhere )
	int debuffTimeRemaining = 0;
	
	void SetStatType(EStatTypes aStatType)
	{
		StatType = aStatType;
	}

	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;
	virtual int GetAllStats()
	{
		return base + buff + debuff + domain;
	}
	
	virtual void AttachAbilityScoreChange(int timeLimit,bool isBuff)
	{
		if(isBuff)
		{
			buffTimeRemaining = timeLimit;
			buff              = base * ABILITYSCORE_CONVERSION_RATIO;
		}
		else
		{
			debuffTimeRemaining = timeLimit;
			debuff              = base * ABILITYSCORE_CONVERSION_RATIO;
		}
	}

	virtual void ResetAbilityscore()
	{
		buff   = 0;
		debuff = 0;
		domain = 0;
	}

	virtual void TurnEnd()
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


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasDamaged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasKilled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHasHealthOrManaValuesChanged);

UCLASS()
class DESENTINTOATLANTIS_API UCombatEntity : public UObject
{
	GENERATED_BODY()
protected:
	
	bool isMarkedForDeath = false;

	TArray<UAilment*> skillAliments;
	UPROPERTY()
	UCombatEntityWrapper* inUseCombatWrapper;
	UPROPERTY()
	UCombatEntityWrapper* allDefaultCombatWrapper;
public:
	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;
	inline static const float ABILITYSCORE_BUFF_MULTIPLIER  = 2;
	inline static const float STRONG_DAMAGE_REDUCTION       = 0.6f;
	inline static const float WEAK_DAMAGE_INCREASE          = 1.5f;
	inline static const float MAX_SYNC                      = 100;
	
	FOnStatusAilmentStart              onStatusAilmentStart;
	FOnStatusAilmentEnd                onStatusAilmentEnd;
	FWasKilled                         wasKilled;
	FWasDamaged					       wasDamaged;
	FHasHealthOrManaValuesChanged      hasHealthOrManaValuesChanged;
	FResetOneWrapperToDefault          resetOneWrapperToDefault;
 
	UFUNCTION()
	virtual void SetAWrapperToDefault(ECombatEntityWrapperType aShellType);
	virtual void SetTacticsEntity(USkillFactorySubsystem*  aSkillFactory);
	
	virtual void SetTacticsEvents(ACombatGameModeBase* aCombatManager);

	UFUNCTION()
	virtual void StartTurn();
	UFUNCTION()
	virtual void EndTurn();

	//SetStatusEffect(StatusEffects aStatusEffect);
	virtual void InitializeStats(EStatTypes aAbilityScoreTypes);
	virtual void SetHealth(int aHealth);
	virtual void InflictAilment(UAilmentShellTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType);
	
	virtual int CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual void Reset();
	virtual void AlimentDecrementHealth(int aDamage);
	virtual PressTurnReactions DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual PressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	virtual PressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);
	virtual void DecrementMana(int aDecrementBy);
	virtual ECharactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();

	virtual void ActivateDamageHitEffect();
	virtual void SetToDefaultState();
	virtual float GetHealthPercentage();
	virtual float GetPotentialHealthPercentage(int aDamage);
	virtual float GetManaPercentage();
	virtual float GetSyncPercentage();

	bool GetIsMarkedForDeath();

	
	EElementalType elementalStrength;
	
	EElementalType elementalWeakness;
	
	ECharactertype characterType;
	
	
	UPROPERTY()
	int maxHealth;
	UPROPERTY()
	int currentHealth;
	UPROPERTY()
	int maxMana;
	UPROPERTY()
	int currentMana;

	UPROPERTY()
	float currentSync = 100;
	
	UPROPERTY( EditAnywhere )
	TMap< EStatTypes,UCombatAbilityStats*> abilityScoreMap;

	

	int CurrentDomainpoints;
	int MaxDomainPoints = 3;

	int AmountOfTurns;
};



