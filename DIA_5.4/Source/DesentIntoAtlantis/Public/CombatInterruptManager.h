// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatInterruptData.h"
#include "EntityInterruptHandler.h"
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
	UPROPERTY()
	UPersistentGameinstance* persistentGameInstance;
public:

	UPROPERTY()
	TArray<UEntityInterruptHandler*> currentInterruptHandlers;
	
	UPROPERTY()
	TArray<UCombatInterrupt*> CombatInterrupts;

	
	void SetGameModeBase(UPersistentGameinstance* aPersistentGameInstance,ACombatGameModeBase* aCombatGameModeBase);
	
	
	void SetAllInterruptHandlers(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,TArray<UEnemyCombatEntity*> aEnemyCombatEntitys );

	UCombatInterrupt* CreateInterrupt(FTriggeredInterruptData aCreatorName,EInterruptType aInterruptType, FCombatInterruptData aCombatInterruptData);
	UFUNCTION()
	void AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt);

	void ReOrderInterrupt();
	
	bool HasInterruptions(){return CombatInterrupts.Num() > 0;}

	void CheckGenericTriggerInerrptions(EGenericTrigger aGenericTrigger);
	void CheckAllEntitysForInterruptions();
	
	void SetInterruptionValueHardSet(UCombatInterrupt* aCombatInterrupt, int aValue){aCombatInterrupt->SetInterruptionValue(aValue); }
	void SetInterruptionValueByType(UCombatInterrupt* aCombatInterrupt);
	void SetInterruptionTriggerOrder();

	void StartTriggeringInterruptions();
	UFUNCTION()
	void TriggerInterruption();
	UFUNCTION()
	void CombatInterruptsEnd();
};
