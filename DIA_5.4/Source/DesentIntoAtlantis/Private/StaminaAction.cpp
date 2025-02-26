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

	TArray<UPlayerCombatEntity*> activeParty = partyManagerSubsystem->ReturnActiveParty();

	if(activeParty.Num() == 0)
	{
		return false;
	}
	
	for (auto Element : activeParty)
	{
		if(Element == nullptr)
		{
			continue;
		}
		
		if(Element->GetHealthPercentage() != 1)
		{
			return true;
		}
	}

	for (auto Element : activeParty)
	{
		if(Element == nullptr)
		{
			continue;
		}
		
		if(Element->GetManaPercentage() != 1)
		{
			return true;
		}
	}

	return false;
}
