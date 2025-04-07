// Fill out your copyright notice in the Description page of Project Settings.


#include "ResurrectionInterrupt.h"

#include "CombatGameModeBase.h"

void UResurrectionInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	GEngine->AddOnScreenDebugMessage(-1, 22.f, FColor::Yellow, FString::Printf(TEXT("Resurrected")));
	CombatGameModeBase->ResurrectEntity(CombatInterruptData.WhoTriggerInterruptData.Entity);
}

void UEntityDiedInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	GEngine->AddOnScreenDebugMessage(-1, 22.f, FColor::Yellow, FString::Printf(TEXT("Died")));
	
	CombatGameModeBase->EntityDied(CombatInterruptData.WhoTriggerInterruptData.Entity);
}
