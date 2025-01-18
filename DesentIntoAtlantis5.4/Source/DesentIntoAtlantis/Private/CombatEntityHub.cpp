// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityHub.h"

#include "ElementalHandler.h"
#include "EquipmentHandler.h"
#include "InterruptHandler.h"
#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"
#include "SkillData.h"

void UCombatEntityHub::InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,
                                                 UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem,
                                                 UPersistentGameinstance* aPersistentGameinstance)
{
	passiveSkillFactorySubsystem = aPassiveSkillFactorySubsystem;
	
	passiveHandler     = NewObject<UPassiveHandler>();
	combatTokenHandler = NewObject<UCombatTokenHandler>();
	elementalHandler   = NewObject<UElementalHandler>();
	equipmentHandler   = NewObject<UEquipmentHandler>();
	InterruptHandler   = NewObject<UInterruptHandler>();

	

	// Cast the game instance to your custom game instance class
	UPersistentGameinstance* persistentGameinstance = aPersistentGameinstance;
	
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
