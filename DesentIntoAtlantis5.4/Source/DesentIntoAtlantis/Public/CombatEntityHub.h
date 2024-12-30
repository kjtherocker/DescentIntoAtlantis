// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTokenHandler.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.h"
#include "CombatEntityHub.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntityHub : public UObject
{
	GENERATED_BODY()

public:
	virtual void InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem);

	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefencePassivesAndTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	UPROPERTY()
	UPassiveHandler* passiveHandler;

	UPROPERTY()
	UCombatTokenHandler* combatTokenHandler;
};
