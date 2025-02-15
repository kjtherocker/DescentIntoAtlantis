// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityHub.h"

#include "CombatLog_Hit_Data.h"
#include "ElementalHandler.h"
#include "EquipmentHandler.h"
#include "InterruptHandler.h"
#include "Inventory_Equipment.h"
#include "Inventory_Items.h"
#include "PartyManagerSubsystem.h"
#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"
#include "SkillData.h"

void UCombatEntityHub::InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,
                                                 UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem,
                                                 UPersistentGameinstance* aPersistentGameinstance)
{
	OwnedCombatEntity = aOwnedCombatEntity;
	passiveSkillFactorySubsystem = aPassiveSkillFactorySubsystem;
	
	passiveHandler     = NewObject<UPassiveHandler>();
	combatTokenHandler = NewObject<UCombatTokenHandler>();
	elementalHandler   = NewObject<UElementalHandler>();
	equipmentHandler   = NewObject<UEquipmentHandler>();
	InterruptHandler   = NewObject<UInterruptHandler>();
	
	persistentGameinstance = aPersistentGameinstance;
	
	elementalHandler->Initialize(aOwnedCombatEntity);
	passiveHandler->InitializePassiveHandler(aOwnedCombatEntity,aPassiveSkillFactorySubsystem);
	combatTokenHandler->InitializeCombatTokenHandler(aOwnedCombatEntity,aPassiveSkillFactorySubsystem);
	equipmentHandler->InitializeEquipmentHandler(passiveHandler,aOwnedCombatEntity,aPassiveSkillFactorySubsystem);
	InterruptHandler->InitializeInterruptHandler(aOwnedCombatEntity,persistentGameinstance);
}


TArray<FCombatLog_PassiveSkilData> UCombatEntityHub::CheckAttackDefencePassivesAndTokens(int& CurrentDamage,
                                                                                         UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	TArray<FCombatLog_PassiveSkilData> PassiveSkilDatas;

	for (FCombatLog_PassiveSkilData PassiveSkilData : passiveHandler->CheckAttackDefencePassives(CurrentDamage,aAttachedEntity,aAttacker,aSkill))
	{
		PassiveSkilDatas.Add(PassiveSkilData);
	}

	for (FCombatLog_PassiveSkilData tokenData : combatTokenHandler->CheckAttackDefenceTokens(CurrentDamage,aAttachedEntity,aAttacker,aSkill))
	{
		PassiveSkilDatas.Add(tokenData);
	}
	

	return PassiveSkilDatas;
}

void UCombatEntityHub::SpawnParticles(UNiagaraSystem* aNiagaraSystem)
{
	SpawnSkillParticles.Broadcast(aNiagaraSystem,OwnedCombatEntity);
}

void UCombatEntityHub::OnAttackEvaded(FCombatLog_Hit_Data aEvasionData)
{
	AttackEvaded.Broadcast(aEvasionData,OwnedCombatEntity);
}

void UCombatEntityHub::OnEvadedAttack(FCombatLog_Hit_Data aEvasionData)
{
	EvadedAttack.Broadcast(aEvasionData,OwnedCombatEntity);
}

int UCombatEntityHub::OnGetItemTier(EItemID ItemID)
{
	int currentItemTier =
		persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryItems()->GetBaseItemTier(ItemID);

	int FinalItemTier = currentItemTier;

	
	return FinalItemTier;
}
