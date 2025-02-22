// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaBarElement.h"

#include "PartyData.h"
#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"

void UStaminaBarElement::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	persistentGameinstance->partyManagerSubsystem->staminaHandler->
	StaminaValueChange.AddDynamic(this,&UStaminaBarElement::UpdateStaminaBar);
	
}

void UStaminaBarElement::UpdateStaminaBar(FStaminaData aStaminaData)
{
	BW_StaminaBar->SetPercent(aStaminaData.StaminaPercentage);
}
