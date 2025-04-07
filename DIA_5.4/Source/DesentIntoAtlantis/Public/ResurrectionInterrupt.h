// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatInterruptData.h"
#include "ResurrectionInterrupt.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UResurrectionInterrupt : public UActivatedTimerInterrupt
{
	GENERATED_BODY()

	
	virtual void ActivateInterrupt() override;
};


UCLASS()
class DESENTINTOATLANTIS_API UEntityDiedInterrupt : public UActivatedTimerInterrupt
{
	GENERATED_BODY()

	
	virtual void ActivateInterrupt() override;
};