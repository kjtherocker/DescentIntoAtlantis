// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatInterruptData.h"
#include "PassiveSkillData.h"

#include "UObject/NoExportTypes.h"
#include "InterruptHandler.generated.h"



enum class EInterruptType         : uint8;

class UCombatInterrupt;
/**
 * 
 */


USTRUCT()
struct DESENTINTOATLANTIS_API FInterruptData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, Category = "Identity" )
	TArray<FCombatInterruptData> GenericInterruptTriggers;
	
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	TArray<FCombatInterruptData> HealthPercentageTriggers;
};


UCLASS()
class DESENTINTOATLANTIS_API UInterruptHandler : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FInterruptData InterruptData;
	UPROPERTY()
	UCombatEntity* ownedCombatEntity;
	UPROPERTY()
	UPersistentGameinstance* persistantGameInstance;

	UPROPERTY()
	TArray<UCombatInterrupt*> combatInterruptSkill;
public:
	UCombatInterrupt* CreateInterrupt(EInterruptType aInterruptType, FCombatInterruptData aCombatInterruptData);
	void InitializeInterruptHandler(UCombatEntity* aOwnedCombatEntity,UPersistentGameinstance* aPersistantGameInstance);
	void SetInterruptData(FInterruptData aInterruptData);

	void AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt);
	
	TArray<UCombatInterrupt*> CheckGenericTriggerInterrupts(EGenericTrigger aGenericTrigger);
	
	TArray<UCombatInterrupt*> CheckHealthRelatedInterrupt();
	TArray<UCombatInterrupt*> GetCombatInterrupts();
	
};
