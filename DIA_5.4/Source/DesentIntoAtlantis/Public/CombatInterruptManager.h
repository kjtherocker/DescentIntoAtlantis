// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatInterruptData.h"
#include "InterruptHandler.h"
#include "UObject/NoExportTypes.h"
#include "CombatInterruptManager.generated.h"

class UEnemyCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatInterruptManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	ACombatGameModeBase* CombatGameModeBase;
	
public:

	UPROPERTY()
	TArray<UInterruptHandler*> currentInterruptHandlers;
	
	UPROPERTY()
	TArray<UCombatInterrupt*> CombatInterrupts;

	
	void InitializeCombatInterruptHandler(ACombatGameModeBase* aCombatGameModeBase);

	void SetAllInterruptHandlers(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,TArray<UEnemyCombatEntity*> aEnemyCombatEntitys );
	
	UFUNCTION()
	void AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt);

	bool HasInterruptions(){return CombatInterrupts.Num() > 0;}

	void CheckGenericTriggerInerrptions(EGenericTrigger aGenericTrigger);
	void CheckAllEntitysForInterruptions();
	
	void SetInterruptionValueHardSet(UCombatInterrupt* aCombatInterrupt, int aValue){aCombatInterrupt->SetInterruptionValue(aValue); }
	void SetInterruptionValueByType(UCombatInterrupt* aCombatInterrupt);
	void SetInterruptionTriggerOrder();

	void StartTriggeringInterruptions();
	void TriggerInterruption();
	UFUNCTION()
	void CombatInterruptsEnd();
};
