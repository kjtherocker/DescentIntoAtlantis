// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillHandlerData.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.generated.h"


struct FCombatLog_PassiveSkilData;
class UPassiveSkillFactorySubsystem;
class UCombatClass;
struct FSkillsData;
class UPassiveSkills;
class UCombatEntity;


UCLASS()
class DESENTINTOATLANTIS_API UPassiveHandler : public UObject
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere )
	TArray<UPassiveSkills*> passiveSkills;

	UPROPERTY()
	UCombatEntity* ownedCombatEntity;
	
	UPROPERTY()
	FPassiveHandlerData PassiveHandlerData;

	UPROPERTY()
	UPassiveSkillFactorySubsystem* passiveSkillFactory;
	UPROPERTY()
	TArray< FCombatLog_PassiveSkilData> passiveSkillsUsed;


public:
	virtual void InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity,UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem);
	
	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefencePassives(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);

	//virtual void GetDamagePassive();
	//virtual void GetHitPassive();
	//virtual void GetHealPassive();
	//virtual void GetAilmentPassive();
	virtual void AddMainClassPassives(UCombatClass* aCombatClass);
	virtual bool TryActivatePassive(UPassiveSkills* aPassiveSkills);
	virtual void AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot);
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills);
	virtual void RemovePassiveBySlotType(EPassiveSkillSlotType passiveSkillSlot);
	virtual TArray<UPassiveSkills*> GetAllPassives();

	virtual FPassiveHandlerData GetPassiveHandlerData();
};
