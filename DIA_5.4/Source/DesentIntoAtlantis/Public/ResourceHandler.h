// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "ResourceHandlerCompleteData.h"
#include "UObject/NoExportTypes.h"
#include "ResourceHandler.generated.h"

enum class EResource : uint8;
class USyncHandler;
class UMana;
class UHealth;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UResourceHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;

public:

	FResourceHandlerCompleteData ResourceHandlerCompleteData;
	FResetOneWrapperToDefault          resetOneWrapperToDefault;
	
	UPROPERTY()
	UCombatEntityWrapper* inUseCombatWrapper;
	UPROPERTY()
	UCombatEntityWrapper* allDefaultCombatWrapper;

	void Initialize(UCombatEntity* aOwnedCombatEntity);
	virtual void SetResourceHandlerCompleteData(FResourceHandlerCompleteData aResourceHandlerCompleteData);

	virtual void SetHealthandMana(FHealthData aHealthData, FManaData aManaData);
	
	virtual void SetToDefaultState();
	virtual void SetCombatWrapper(UCombatEntity* aCombatEntity);
	virtual void SetAWrapperToDefault(ECombatEntityWrapperType aShellType);
	virtual void InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType);

	virtual void DecrementResource( EResource aResource,int aValue);
	virtual void IncrementResource( EResource aResource,int aValue);

	virtual FResourceHandlerCompleteData SaveAllResourcesAndReturn();

	virtual FCombatLog_AttackDefense_Data CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);

	virtual FCombatLog_AttackDefense_Data DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill);
	
	virtual int GetCurrentHealth();
	
	UPROPERTY()
	UHealth* healthHandler;
	UPROPERTY()
	UMana* manaHandler;
	
	UPROPERTY()
	USyncHandler* SyncHandler;
	
};
