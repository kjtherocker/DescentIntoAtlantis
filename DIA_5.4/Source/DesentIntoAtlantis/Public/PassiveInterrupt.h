// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatInterruptData.h"
#include "PassiveInterrupt.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPassiveInterrupt : public UActivatedTimerInterrupt
{
	GENERATED_BODY()
public:
	virtual void ActivateInterrupt() override;
};
