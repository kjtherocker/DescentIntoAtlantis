// Fill out your copyright notice in the Description page of Project Settings.


#include "ResurrectionInterrupt.h"

#include "CombatGameModeBase.h"

void UResurrectionInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	GEngine->AddOnScreenDebugMessage(-1, 22.f, FColor::Yellow, FString::Printf(TEXT("Resurrected")));
	CombatGameModeBase->ResurrectEntity(CombatInterruptData.WhoTriggerInterruptData.Entity);
}

void UResurrectionInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance,
	ACombatGameModeBase* aCombatGameModeBase)
{
	Super::SetInterrupt(aPersistantGameInstance, aCombatGameModeBase);
	interruptTimer = UGameSettings::ENTITY_RESURRECTION_TIMER;
}

void UEntityDiedInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	GEngine->AddOnScreenDebugMessage(-1, 22.f, FColor::Yellow, FString::Printf(TEXT("Died")));
	
	CombatGameModeBase->EntityDied(CombatInterruptData.WhoTriggerInterruptData.Entity);
}

void UEntityDiedInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance,
	ACombatGameModeBase* aCombatGameModeBase)
{
	Super::SetInterrupt(aPersistantGameInstance, aCombatGameModeBase);
	interruptTimer = UGameSettings::ENTITY_DIED_INTERRUPT_TIMER;
}
