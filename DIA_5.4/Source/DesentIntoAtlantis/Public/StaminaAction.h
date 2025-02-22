// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PartyManagerSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "StaminaAction.generated.h"

/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FStaminaActionData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	int cost = 5;

	
};



UCLASS()
class DESENTINTOATLANTIS_API UStaminaAction : public UObject
{
	GENERATED_BODY()

protected:
	FStaminaActionData StaminaActionData;

	UPROPERTY()
	UPartyManagerSubsystem* partyManagerSubsystem;

public:

	void SetStaminaActionData(FStaminaActionData aStaminaActionData,UPartyManagerSubsystem* aPartyManagerSubsystem);

	void UseStaminaAction();
	bool CheckIfStaminaActionCanBeUsed();
	int GetStaminaCost(){ return StaminaActionData.cost;}
};
