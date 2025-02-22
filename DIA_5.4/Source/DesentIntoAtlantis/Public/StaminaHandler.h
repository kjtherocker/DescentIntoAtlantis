// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PartyData.h"
#include "UObject/NoExportTypes.h"
#include "StaminaHandler.generated.h"

class UStaminaAction;
class AFloorPlayerPawn;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaValueChange,FStaminaData,StaminaData);

UCLASS()
class DESENTINTOATLANTIS_API UStaminaHandler : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY()
	FStaminaData StaminaData;

	UPROPERTY()
	UPartyManagerSubsystem* partyManagerSubsystem;
	
	UPROPERTY()
	UStaminaAction* staminaAction; 
public:

	FOnStaminaValueChange StaminaValueChange;
	
	void InitializeStaminaHandler(FStaminaData aStaminaData,UPartyManagerSubsystem* aPartyManagerSubsystem);
	UFUNCTION()
	void SetPlayerPosition(FCompleteFloorPawnData aFloorPawnData);

	void RefilStaminaToMax();
	void AddStamina(int aAddAmount);
	void ConsumeStamina(int aCost);
	bool CheckIfStaminaIsAvaliable(int aCost);

	void SetFloorPawnDelegates(AFloorPlayerPawn* aPlayerHasMoved);

	float GetStaminaPercentage();

	FStaminaData GetStaminaData(){return StaminaData;}
};
