// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTokenHandler.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.h"
#include "CombatEntityHub.generated.h"

class UEquipmentHandler;
class UElementalHandler;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntityHub : public UObject
{
	GENERATED_BODY()
private:

	UPassiveFactorySubsystem* passiveSkillFactorySubsystem;
	
public:
	virtual void InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem);
	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefencePassivesAndTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	UPROPERTY()
	UPassiveHandler* passiveHandler;

	UPROPERTY()
	UCombatTokenHandler* combatTokenHandler;

	UPROPERTY()
	UElementalHandler* elementalHandler;

	UPROPERTY()
	UEquipmentHandler* equipmentHandler;

	
};
