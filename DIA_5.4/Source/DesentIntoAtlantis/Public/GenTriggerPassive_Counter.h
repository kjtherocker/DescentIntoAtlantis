// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "GenTriggerPassive_Counter.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGenTriggerPassive_Counter : public UGenericTriggerPassiveCombatToken
{
	GENERATED_BODY()

	virtual FCombatLog_PassiveSkilData ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent) override;
};
