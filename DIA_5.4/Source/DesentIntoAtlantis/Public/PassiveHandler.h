// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillHandlerData.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.generated.h"


struct FCombatLog_PassiveSkilData;
class UPassiveFactorySubsystem;
class UCombatClass;
struct FSkillsData;
class UPassiveSkills;
class UCombatEntity;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSendPassiveTrigger,EGenericTrigger,combatToken);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPassiveAdded,UPassiveSkills*,passiveAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPassiveRemoved,UPassiveSkills*,passiveRemoved);
UCLASS()
class DESENTINTOATLANTIS_API UPassiveHandler : public UObject
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere )
	TArray<UPassiveSkills*> allPassiveSkills;

	UPROPERTY()
	UCombatEntity* ownedCombatEntity;
	
	UPROPERTY()
	FPassiveHandlerData PassiveHandlerData;

	UPROPERTY()
	UPassiveFactorySubsystem* passiveSkillFactory;
	UPROPERTY()
	TArray< FCombatLog_PassiveSkilData> passiveSkillsUsed;

public:

	UPROPERTY()
	FPassiveAdded PassiveAdded;

	UPROPERTY()
	FPassiveRemoved PassiveRemoved;
	
	UPROPERTY()
	UPassiveSlotHandler* PassiveSlotHandler;
	
	FSendPassiveTrigger sendPassiveTrigger;
	virtual void InitializeCombatArena();
	virtual void InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem);
	virtual void SetPassiveHandlerState(FPassiveHandlerData aPassiveHandler);
	UFUNCTION()
	virtual void CheckGenericTriggerPassives(EGenericTrigger aPassiveTrigger);
	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefencePassives(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	//virtual TArray< FCombatLog_PassiveSkilData> CheckBaseDamagePassives(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	
	virtual void AddMainClassPassives(UCombatClass* aCombatClass);
	virtual bool TryActivatePassive(UPassiveSkills* aPassiveSkills);
	virtual void AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot);
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills);
	virtual void RemovePassiveBySlotType(EPassiveSkillSlotType passiveSkillSlot);
	virtual TArray<UPassiveSkills*> GetAllPassives();
	virtual TArray<UPassiveSkills*> GetAllFreeSlotPassives();

	virtual FPassiveHandlerData GetPassiveHandlerData();
};
