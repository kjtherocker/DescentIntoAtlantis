// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaAction.h"

void UStaminaAction::SetStaminaActionData(FStaminaActionData aStaminaActionData,UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	StaminaActionData = aStaminaActionData;
	partyManagerSubsystem = aPartyManagerSubsystem;
}

void UStaminaAction::UseStaminaAction()
{
	for (auto Element : partyManagerSubsystem->playerCombatEntity)
	{
		Element->IncrementHealth(5);
	}

	for (auto Element : partyManagerSubsystem->playerCombatEntity)
	{
		Element->IncrementMana(3);
	}
}

bool UStaminaAction::CheckIfStaminaActionCanBeUsed()
{

	for (auto Element : partyManagerSubsystem->playerCombatEntity)
	{
		if(Element->GetHealthPercentage() != 1)
		{
			return true;
		}
	}

	for (auto Element : partyManagerSubsystem->playerCombatEntity)
	{
		if(Element->GetManaPercentage() != 1)
		{
			return true;
		}
	}

	return false;
}
