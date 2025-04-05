// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatLog_PassiveSkilData.h"
#include "PassiveSkillData.h"
#include "SkillData.h"
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
	FCombatLog_PassiveSkilData ActivateAttackDefencePassive(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	bool IsPassiveTriggered(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill);
};




UINTERFACE(BlueprintType)
class UOnGenericPassive : public UInterface
{
	GENERATED_BODY()
};

class IOnGenericPassive
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	FCombatLog_PassiveSkilData ActivateGenericPassive(UCombatEntity* WhoTriggeredEvent);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	bool IsPassiveTriggered(EGenericTrigger aPassiveGenericTrigger);
};

UINTERFACE(BlueprintType)
class UModifySkillPassive : public UInterface
{
	GENERATED_BODY()
};


class IModifySkillPassive
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	FSkillsData ModifySkill(FSkillsData aPassiveSkill);
	
};



UCLASS()
class DESENTINTOATLANTIS_API UPassives : public UObject
{
	GENERATED_BODY()

public:
	virtual void AttachOwnerCombatEntity(UCombatEntity* aCombatEntity);
	virtual void RemovePassive();
	virtual void ActivatePassive();

	virtual void ApplyEffect(UCombatEntity* aCombatEntity);
	virtual void RemoveEffect(UCombatEntity* aCombatEntity);
	


	//	bool VerifyTriggers(DamageEvent* aDamageEvent);

	UPROPERTY()
	int EffectValue;

protected:



	bool isDisabled = false;
	
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkills : public UPassives
{
	GENERATED_BODY()

public:
	virtual void CreatePassiveInterrupt();
	
	void InitializePassiveSkilData(FPassiveSkillData aPassiveSkillsData);
	FPassiveSkillData passiveSkillData;
};

UCLASS()
class DESENTINTOATLANTIS_API UGenericTriggerPassive : public UPassiveSkills, public IOnGenericPassive
{
	GENERATED_BODY()

public:
	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;

};


UCLASS()
class DESENTINTOATLANTIS_API UCounterPassive : public UPassiveSkills, public IOnGenericPassive
{
	GENERATED_BODY()

public:
	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;

};



UCLASS()
class DESENTINTOATLANTIS_API UGenericModifyPassive : public UPassiveSkills, public IModifySkillPassive
{
	GENERATED_BODY()

public:
	virtual FSkillsData ModifySkill_Implementation(FSkillsData aPassiveSkill) override;

};

UCLASS()
class DESENTINTOATLANTIS_API UGenericTriggerPassiveCombatToken : public UGenericTriggerPassive
{
	GENERATED_BODY()

public:

	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;
	virtual bool IsPassiveTriggered_Implementation(EGenericTrigger aPassiveGenericTrigger) override;

};

UCLASS()
class DESENTINTOATLANTIS_API UResurrect : public UGenericTriggerPassive
{
	GENERATED_BODY()

public:

	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;
	virtual bool IsPassiveTriggered_Implementation(EGenericTrigger aPassiveGenericTrigger) override;

};



UCLASS()
class DESENTINTOATLANTIS_API UFelineAgility : public UGenericTriggerPassiveCombatToken
{
	GENERATED_BODY()

public:

	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;
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
	virtual FCombatLog_PassiveSkilData ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
};


UCLASS()
class DESENTINTOATLANTIS_API UMerchantsZeal: public UGenericOnAttackPassive
{
	GENERATED_BODY()

public:
	virtual bool IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
	virtual FCombatLog_PassiveSkilData ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
};


