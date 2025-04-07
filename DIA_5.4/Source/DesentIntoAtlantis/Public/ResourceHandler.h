// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntityWrapper.h"
#include "CombatLog_AttackDefense_Data.h"
#include "CombatToken_Ailment.h"
#include "ItemChargeHandler.h"
#include "PersistentGameinstance.h"
#include "SkillType.h"
#include "ResourceHandlerCompleteData.h"
#include "SyncHandler.h"
#include "UObject/NoExportTypes.h"
#include "ResourceHandler.generated.h"



class UCombatEntityWrapper;
class UCombatEntity;

class USyncHandler;
class UMana;
class UHealth;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FValidateLifeStatus);

UCLASS()
class DESENTINTOATLANTIS_API UResourceHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UCombatEntity* AttachedCombatEntity;

	UPROPERTY()
	bool isMarkedForDeath = false;

	UPROPERTY()
	UPersistentGameinstance* persistantGameInstance;
	
	UPROPERTY()
	TArray<FCombatLog_AttackDefense_Data> mostRecentAttacks;
public:

	UPROPERTY()
	FValidateLifeStatus ValidateLifeStatusEvent;
	
	FResourceHandlerCompleteData ResourceHandlerCompleteData;
	FResetOneWrapperToDefault          resetOneWrapperToDefault;

	UPROPERTY()
	FHasValuesUpdated hasValuesUpdated;
	
	UPROPERTY()
	UCombatEntityWrapper* inUseCombatWrapper;
	UPROPERTY()
	UCombatEntityWrapper* allDefaultCombatWrapper;

	void Initialize(UCombatEntity* aOwnedCombatEntity,UPersistentGameinstance* aPersistantGameInstance);
	virtual void SetResourceHandlerCompleteData(FResourceHandlerCompleteData aResourceHandlerCompleteData);

	UFUNCTION()
	virtual void ValidateLifeStatus();
	virtual bool DeathCheck();
	virtual void OnDeath();
	virtual void Resurrection();
	
	virtual void SetHealthandMana(FHealthData aHealthData, FManaData aManaData);

	virtual void LoadSavedCurrentResources(FResourceHandlerCompleteData aResourceHandlerCompleteData);


	virtual void SetToDefaultState();
	virtual void SetCombatWrapper(UCombatEntity* aCombatEntity);
	virtual void SetAWrapperToDefault(ECombatEntityWrapperType aShellType);
	virtual void InflictAilment(UWrapperTakeOver* aAliment,ECombatEntityWrapperType aCombatEntityWrapperType);

	virtual int DecrementResourceReturnOverFlow( EResource aResource,int aValue);
	virtual void IncrementResource( EResource aResource,int aValue);

	virtual FResourceHandlerCompleteData SaveAllResourcesAndReturn();

	virtual FCombatLog_AttackDefense_Data CalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);

	virtual FCombatLog_AttackDefense_Data AttackResource(EResource aResource,UCombatEntity* aAttacker, int aDecrementBy);
	
	virtual FCombatLog_AttackDefense_Data AttackResourceWithSkill(EResource aResource,UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual void StartDecrementResource(EResource aResource, int aDecrementBy);

	virtual void AddRecentAttackCombatLog(FCombatLog_AttackDefense_Data aCombatLog);
	
	virtual void DealDamage(int aResourceAmount);
	
	virtual int GetCurrentHealth();

	virtual void SpendSkillCost(FSkillsData skillData, EResource SkillResourceUsed,UCombatEntity* aSkillOwner);


	UPROPERTY()
	TArray<EResource> DefenceLayers;
	
	UPROPERTY()
	UHealth* healthHandler;
	UPROPERTY()
	UMana* manaHandler;
	
	UPROPERTY()
	USyncHandler* SyncHandler;
	UPROPERTY()
	UItemChargeHandler* ItemChargeHandler;

	
};
