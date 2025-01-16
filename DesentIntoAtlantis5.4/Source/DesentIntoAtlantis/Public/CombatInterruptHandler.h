// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatInterruptData.h"
#include "UObject/NoExportTypes.h"
#include "CombatInterruptHandler.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatInterruptHandler : public UObject
{
	GENERATED_BODY()

public:

	
	
	UPROPERTY()
	TArray<UCombatInterrupt*> CombatInterrupts;
	
	UFUNCTION()
	void AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt);

	bool HasInterruptions(){return CombatInterrupts.Num() > 0; }

	void SetInterruptionValueHardSet(UCombatInterrupt* aCombatInterrupt, int aValue){aCombatInterrupt->SetInterruptionValue(aValue); }
	void SetInterruptionValueByType(UCombatInterrupt* aCombatInterrupt);
	void SetInterruptionTriggerOrder();

	void StartTriggeringInterruptions();
	void TriggerInterruption();
};
