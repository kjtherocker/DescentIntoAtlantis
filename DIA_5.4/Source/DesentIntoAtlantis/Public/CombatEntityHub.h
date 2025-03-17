// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatLog_Hit_Data.h"
#include "CombatTokenHandler.h"
#include "ItemBase.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.h"
#include "CombatEntityHub.generated.h"

class USkillHandler;
class USyncHandler;
class UItemChargeHandler;
class UPersistentGameinstance;
class UInterruptHandler;
class UEquipmentHandler;
class UElementalHandler;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackEvaded,FCombatLog_Hit_Data, Evasion_Data,UCombatEntity*,CombatEntity);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvadedAttack,FCombatLog_Hit_Data, Evasion_Data,UCombatEntity*,CombatEntity);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnSkillParticles,UNiagaraSystem*, NiagaraSystem,UCombatEntity*,CombatEntity);
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntityHub : public UObject
{
	GENERATED_BODY()
private:

	UPROPERTY()
	UPassiveFactorySubsystem* passiveSkillFactorySubsystem;



	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;
	
public:
	virtual void InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem,UPersistentGameinstance* aPersistentGameinstance);
	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefencePassivesAndTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);

	FAttackEvaded                      AttackEvaded;
	FEvadedAttack                      EvadedAttack;
	FSpawnSkillParticles               SpawnSkillParticles;

	virtual bool doesEntityHaveATurn();
	virtual void OnTurnStart();
	virtual void SpawnParticles(UNiagaraSystem* aNiagaraSystem);
	virtual void OnAttackEvaded(FCombatLog_Hit_Data aEvasionData);
	virtual void OnEvadedAttack(FCombatLog_Hit_Data aEvasionData);
//	virtual TArray< FCombatLog_PassiveSkilData> CheckBaseDamagePassives(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	virtual int OnGetItemTier(EItemID ItemID);
	
	UPROPERTY()
	UPassiveHandler* passiveHandler;

	UPROPERTY()
	USkillHandler* skillHandler;

	UPROPERTY()
	UInterruptHandler* InterruptHandler;
	UPROPERTY()
	UCombatTokenHandler* combatTokenHandler;

	UPROPERTY()
	UElementalHandler* elementalHandler;

	UPROPERTY()
	UEquipmentHandler* equipmentHandler;
	UPROPERTY()
	UItemChargeHandler* ItemChargeHandler; 
	
	UPROPERTY()
	USyncHandler* SyncHandler;
	
};
