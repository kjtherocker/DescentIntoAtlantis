// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "CombatEntityWrapper.h"
#include "EElementalType.h"
#include "HealthData.h"

#include "PressTurnManager.h"

#include "Engine/DataTable.h"
#include "CombatEntity.generated.h"


class UPersistentGameinstance;
class UCombatEntityHub;
class UPassiveFactorySubsystem;
class UCombatStat;
class UPassiveHandler;
class UPassiveSkills;
struct FPassiveSkillData;
enum class EPassiveSkillID  : uint8;
enum class EPassiveSkillSlotType  : uint8;
enum class EClassID : uint8;
class UAilment;
class USkillAliment;
struct FSkillsData;
enum class EStatusAilments : uint8;
class ACombatGameModeBase;
class AEnemyPortraitElement;
class USkillFactorySubsystem;
/**
 * 
 */


UENUM()
enum class ERowType  : uint8
{
	None       = 0,
	FrontRow   = 1,
	BackRow    = 2,
};


UENUM()
enum class EStatTypes  : uint8
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

	UPROPERTY(EditAnywhere)
	FHealthData HealthData;
	
	UPROPERTY( EditAnywhere )
	int maxMana = 0;
	
	UPROPERTY( EditAnywhere )
	TMap< EStatTypes,int> baseStats;
	
	
//	UPROPERTY( EditAnywhere )
//	TMap<EPassiveSkillIDS, FPassiveSkillsData> passiveSkills;
};



UENUM()
enum class ECharactertype  : uint8
{
	Undefined,
	Ally,
	Enemy
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasDamaged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWasKilled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHasHealthOrManaValuesChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatEntityRoundEnd);
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntity : public UObject
{
	GENERATED_BODY()
protected:
	
	bool isMarkedForDeath = false;

	TArray<UAilment*> skillAliments;

	UPROPERTY( EditAnywhere )
	TArray<UPassiveSkills*> passiveSkills;


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
	FCombatEntityRoundEnd              OnRoundEnd;


	
	UFUNCTION()
	virtual void SetAWrapperToDefault(ECombatEntityWrapperType aShellType);
	virtual void SetCombatEntity(USkillFactorySubsystem*  aSkillFactory,UPassiveFactorySubsystem* aPassiveSkillFactory, UPersistentGameinstance* aPersistentGameinstance);
	
	virtual void SetTacticsEvents(ACombatGameModeBase* aCombatManager);

	UFUNCTION()
	virtual void StartTurn();
	UFUNCTION()
	virtual void EndTurn();

	//SetStatusEffect(StatusEffects aStatusEffect);
	virtual void InitializeStats(EStatTypes aAbilityScoreTypes);
	virtual void SetHealth(int aHealth);
	virtual void InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType);
	virtual FCombatLog_AttackDefense_Data CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual void Reset();
	virtual void AlimentDecrementHealth(int aDamage);
	virtual FCombatLog_AttackDefense_Data DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual EPressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	virtual EPressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);
	virtual void DecrementMana(int aDecrementBy);
	virtual void DecrementSync(int aDecrementBy);
	virtual ECharactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();
	virtual void PostDamage();

	
	
	virtual void ActivateDamageHitEffect();
	virtual void SetToDefaultState();

	virtual FString GetEntityName();
	
	virtual float GetHealthPercentage();
	virtual float GetPotentialHealthPercentage(int aDamage);
	virtual float GetManaPercentage();
	virtual float GetSyncPercentage();

	virtual int GetHit();
	virtual int GetEvasion();
	virtual int GetAilmentResistance(EStatusAilments aStatusAilment);
	virtual int GetAilmentInfliction(EStatusAilments aStatusAilment);

	
	virtual void AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot);
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills);

	virtual void SetCurrentRow(ERowType aRowTypes);
	
	bool GetIsMarkedForDeath();

	ECharactertype characterType;

	UPROPERTY()
	ERowType currentRow;
	
	UPROPERTY()
	UHealth* health;
	
	UPROPERTY()
	UCombatEntityHub* combatEntityHub;
	
	UPROPERTY()
	int maxMana;
	UPROPERTY()
	int currentMana;

	UPROPERTY()
	float currentSync = 100;
	
	UPROPERTY( EditAnywhere )
	TMap< EStatTypes,UCombatStat*> abilityScoreMap;

	

	int CurrentDomainpoints;
	int MaxDomainPoints = 3;

	int AmountOfTurns;
};



