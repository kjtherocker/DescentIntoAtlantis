// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityHub.h"

#include "CombatGameModeBase.h"
#include "CombatInterruptManager.h"
#include "CombatLog_Hit_Data.h"
#include "ElementalHandler.h"
#include "EquipmentHandler.h"
#include "EntityInterruptHandler.h"
#include "Inventory_Equipment.h"
#include "Inventory_Items.h"
#include "PartyManagerSubsystem.h"
#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PersistentGameinstance.h"
#include "SkillData.h"
#include "SkillHandler.h"
#include "SyncHandler.h"

void UCombatEntityHub::InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,
                                                 UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem,
                                                 UPersistentGameinstance* aPersistentGameinstance)
{
	AttachedCombatEntity = aOwnedCombatEntity;
	passiveSkillFactorySubsystem = aPassiveSkillFactorySubsystem;
	
	passiveHandler     = NewObject<UPassiveHandler>();
	combatTokenHandler = NewObject<UCombatTokenHandler>();
	elementalHandler   = NewObject<UElementalHandler>();
	equipmentHandler   = NewObject<UEquipmentHandler>();
	InterruptHandler   = NewObject<UEntityInterruptHandler>();
	skillHandler       = NewObject<USkillHandler>();


	persistentGameinstance = aPersistentGameinstance;
	
	elementalHandler->Initialize(aOwnedCombatEntity);
	skillHandler->Initialize(aOwnedCombatEntity,persistentGameinstance->skillFactorySubsystem,passiveHandler);
	
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

bool UCombatEntityHub::DoesEntityHaveATurn()
{
	if(skillHandler->isSkillCharging())
	{
		return false;
	}

	return true;
}

void UCombatEntityHub::SpawnParticles(UNiagaraSystem* aNiagaraSystem)
{
	SpawnSkillParticles.Broadcast(aNiagaraSystem,AttachedCombatEntity);
}

void UCombatEntityHub::OnAttackEvaded(UCombatEntity* WhoTriggeredEvent,FCombatLog_Hit_Data aEvasionData)
{
	SendGenericTrigger(WhoTriggeredEvent,EGenericTrigger::OnAttackEvaded);
	AttackEvaded.Broadcast(aEvasionData,AttachedCombatEntity);
}

void UCombatEntityHub::OnEvadedAttack(UCombatEntity* WhoTriggeredEvent,FCombatLog_Hit_Data aEvasionData)
{
	SendGenericTrigger(WhoTriggeredEvent,EGenericTrigger::OnEvadedAttack);
	EvadedAttack.Broadcast(aEvasionData,AttachedCombatEntity);
}

void UCombatEntityHub::OnDeath(UCombatEntity* WhoTriggeredEvent)
{
	combatTokenHandler->RemoveAllCombatTokens();
	AttachedCombatEntity->ResourceHandler->OnDeath();
	skillHandler->OnDeath();
	SendGenericTrigger(WhoTriggeredEvent,EGenericTrigger::OnDeath);
	persistentGameinstance->SkillResolveSubsystem->CreateEntityDiedInterrupt(AttachedCombatEntity);
}

void UCombatEntityHub::OnCombatStart(ACombatGameModeBase* aCombatGameMode)
{
	skillHandler->InitializeCombat(persistentGameinstance->SkillResolveSubsystem,aCombatGameMode);
}

void UCombatEntityHub::SendGenericTrigger(UCombatEntity* WhoTriggeredEvent,EGenericTrigger aGenericTrigger)
{
	passiveHandler->SendGenericTrigger(WhoTriggeredEvent,aGenericTrigger);
	
}

int UCombatEntityHub::GetAilmentResistance()
{
	int returnedAilmentResistance = AttachedCombatEntity->GetBaseAilmentResistance();
	
	return returnedAilmentResistance;
}

//TArray<FCombatLog_PassiveSkilData> UCombatEntityHub::CheckBaseDamagePassives(UCombatEntity* aAttachedEntity,
//	UCombatEntity* aAttacker, FSkillsData aSkill)
//{
//}

int UCombatEntityHub::OnGetItemTier(EItemID ItemID)
{
	int currentItemTier =
		persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryItems()->GetBaseItemTier(ItemID);

	int FinalItemTier = currentItemTier;

	
	return FinalItemTier;
}

void UCombatEntityHub::OnTurnStart()
{
	skillHandler->OnTurnStart();
}
