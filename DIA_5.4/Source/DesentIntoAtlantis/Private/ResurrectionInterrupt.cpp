// Fill out your copyright notice in the Description page of Project Settings.


#include "ResurrectionInterrupt.h"

#include "CombatGameModeBase.h"

void UResurrectionInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();

	CombatGameModeBase->ResurrectEntity(CombatInterruptData.whoTriggeredInterrupt.Entity);
}
