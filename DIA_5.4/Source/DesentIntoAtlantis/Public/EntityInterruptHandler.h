// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatInterruptData.h"
#include "PassiveSkillData.h"

#include "UObject/NoExportTypes.h"
#include "EntityInterruptHandler.generated.h"


class UCombatInterruptManager;
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
class DESENTINTOATLANTIS_API UEntityInterruptHandler : public UObject
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
	UCombatInterruptManager* CombatInterruptHandler;

	UPROPERTY()
	TArray<UCombatInterrupt*> combatInterruptSkill;
public:
	
	void InitializeInterruptHandler(UCombatEntity* aOwnedCombatEntity,UPersistentGameinstance* aPersistantGameInstance);
	void InitializeCombatInterruptManager(UCombatInterruptManager* aCombatInterruptHandler);
	void SetInterruptData(FInterruptData aInterruptData);

	void AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt);
	
	TArray<UCombatInterrupt*> CheckGenericTriggerInterrupts(EGenericTrigger aGenericTrigger);
	
	TArray<UCombatInterrupt*> CheckHealthRelatedInterrupt();
	TArray<UCombatInterrupt*> GetCombatInterrupts();
	
};
