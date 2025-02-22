// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaHandler.h"

#include "FloorPlayerPawn.h"
#include "StaminaAction.h"

void UStaminaHandler::InitializeStaminaHandler(FStaminaData aStaminaData,UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	partyManagerSubsystem = aPartyManagerSubsystem;
	
	StaminaData = aStaminaData;

	staminaAction = NewObject<UStaminaAction>();

	FStaminaActionData StaminaActionData;
	StaminaActionData.cost = 5;
	
	staminaAction->SetStaminaActionData(StaminaActionData,aPartyManagerSubsystem);
}

void UStaminaHandler::SetPlayerPosition(FCompleteFloorPawnData aFloorPawnData)
{
	if(!CheckIfStaminaIsAvaliable(staminaAction->GetStaminaCost()))
	{
		return;
	}

	if(!staminaAction->CheckIfStaminaActionCanBeUsed())
	{
		return;
	}

	staminaAction->UseStaminaAction();
	ConsumeStamina(staminaAction->GetStaminaCost());
}

void UStaminaHandler::RefilStaminaToMax()
{
	AddStamina(StaminaData.MaxStamina);
}

void UStaminaHandler::AddStamina(int aAddAmount)
{
	StaminaData.currentStamina += aAddAmount;

	if(StaminaData.currentStamina > StaminaData.MaxStamina)
	{
		StaminaData.currentStamina = StaminaData.MaxStamina;
	}

	StaminaData.StaminaPercentage = GetStaminaPercentage();

	StaminaValueChange.Broadcast(StaminaData);
}

void UStaminaHandler::ConsumeStamina(int aCost)
{
	StaminaData.currentStamina -= aCost;

	if(StaminaData.currentStamina < 0)
	{
		StaminaData.currentStamina = 0;
	}

	StaminaData.StaminaPercentage = GetStaminaPercentage();

	StaminaValueChange.Broadcast(StaminaData);
}

bool UStaminaHandler::CheckIfStaminaIsAvaliable(int aCost)
{
	return StaminaData.currentStamina > aCost;
}

void UStaminaHandler::SetFloorPawnDelegates(AFloorPlayerPawn* aPlayerHasMoved)
{
	aPlayerHasMoved->playerhasMovedDelegate.AddDynamic(this,&UStaminaHandler::SetPlayerPosition);
}

float UStaminaHandler::GetStaminaPercentage()
{
	return (float)StaminaData.currentStamina / (float)StaminaData.MaxStamina;
}
