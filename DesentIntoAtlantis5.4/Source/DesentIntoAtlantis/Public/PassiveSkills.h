// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.generated.h"

/**
 * 
 */

enum class ESkillDamageType : uint8;
enum class ESkillRange : uint8;
enum class ESkillUsage : uint8;
enum class ESkillType : uint8;
struct FSkillsData;
enum class EAtlantisEvents : uint8;
enum class EStatTypes : uint8;
class FEventBase;
class UCombatEntity;

UENUM()
enum class EPassiveSkillIDS   : uint8
{
	None                 = 0,
	StatusAdept          = 1,
	DarkIncrease         = 2,
	DarkResist           = 3,
};



USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveSkillsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	EPassiveSkillIDS passiveSkillID;

	
	
	UPROPERTY( EditAnywhere )
	int damageIncrease;

	UPROPERTY( EditAnywhere )
	int damagePercentageIncrease;

    UPROPERTY( EditAnywhere )    
    ESkillType      trigger1SkillType;
    
    UPROPERTY( EditAnywhere )    
    ESkillUsage     trigger2SkillUsage;
    
    UPROPERTY( EditAnywhere )    
    ESkillRange trigger3SkillRange ;
    
    UPROPERTY( EditAnywhere )    
    ESkillDamageType trigger4DamageType;
    
  // UPROPERTY( EditAnywhere )    
  // EElementalType trigger5ElementalType = EElementalType::None;

	UPROPERTY()
	TMap< EStatTypes,int> passiveStats;
	
	UPROPERTY( EditAnywhere )
	FString passiveName;
	
	UPROPERTY( EditAnywhere )
	FString passiveDescription;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* passiveIcon;

	UPROPERTY( EditAnywhere )
	int abilityScoreChangeDuration;
};


// ISkillable.h
UINTERFACE(BlueprintType)
class UStatPassive : public UInterface
{
	GENERATED_BODY()
};


class IStatPassive
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	int GetStatIncrease(EStatTypes aStatType);
	
};

UINTERFACE(BlueprintType)
class UEventTriggerPassive : public UInterface
{
	GENERATED_BODY()
};

class IEventTriggerPassive
{
	GENERATED_BODY()

public:

	void EventListener(FEventBase* aEvent);
	EAtlantisEvents EventToListenTo;
};

UINTERFACE(BlueprintType)
class UOnAttackDefencePassive : public UInterface
{
	GENERATED_BODY()
};

class IOnAttackDefencePassive
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	void ActivateAttackDefencePassive(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	bool IsPassiveTriggered(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill);
};





UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkills : public UObject
{
	GENERATED_BODY()

public:
	void InitializePassiveSkilData(FPassiveSkillsData aPassiveSkillsData);
	void AttachPassiveToOwner(UCombatEntity* aCombatEntity);
	void RemovePassive();
	void ActivatePassive();

	virtual void ApplyEffect(UCombatEntity* aCombatEntity);
	virtual void RemoveEffect(UCombatEntity* aCombatEntity);
	


//	bool VerifyTriggers(DamageEvent* aDamageEvent);

	UPROPERTY()
	int EffectValue;

	FPassiveSkillsData passiveSkillData;
private:



	bool isDisabled = false;
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;
	
};

UCLASS()
class DESENTINTOATLANTIS_API UGenericStatPassive : public UPassiveSkills, public IStatPassive
{
	GENERATED_BODY()

public:
	
	virtual int GetStatIncrease_Implementation(EStatTypes aStatType) override;

	virtual void ApplyEffect(UCombatEntity* aCombatEntity) override;
	virtual void RemoveEffect(UCombatEntity* aCombatEntity) override;
};

UCLASS()
class DESENTINTOATLANTIS_API UGenericEventPassive : public UPassiveSkills, public IEventTriggerPassive
{
	GENERATED_BODY()

public:
	
	void EventListener_Implementation(FEventBase* aEvent);
};


UCLASS()
class DESENTINTOATLANTIS_API UGenericOnAttackPassive: public UPassiveSkills, public IOnAttackDefencePassive
{
	GENERATED_BODY()

public:
	virtual bool IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
	virtual void ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
};


