// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "PassiveSkillData.h"
#include "PassiveSkills.generated.h"

/**
 * 
 */

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
	void InitializePassiveSkilData(FPassiveSkillData aPassiveSkillsData);
	void AttachPassiveToOwner(UCombatEntity* aCombatEntity);
	void RemovePassive();
	void ActivatePassive();

	virtual void ApplyEffect(UCombatEntity* aCombatEntity);
	virtual void RemoveEffect(UCombatEntity* aCombatEntity);
	


//	bool VerifyTriggers(DamageEvent* aDamageEvent);

	UPROPERTY()
	int EffectValue;

	FPassiveSkillData passiveSkillData;
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


