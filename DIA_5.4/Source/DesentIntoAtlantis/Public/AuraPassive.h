// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "AuraPassive.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UAuraPassive : public UPassiveSkills
{
	GENERATED_BODY()


public:
	virtual void AttachOwnerCombatEntity(UCombatEntity* aCombatEntity) override;
	virtual void ApplyEffect(UCombatEntity* aCombatEntity) override;
	virtual void RemoveEffect(UCombatEntity* aCombatEntity) override;

	UFUNCTION()
	virtual void SpendAuraCost();
	
};
