// Fill out your copyright notice in the Description page of Project Settings.


#include "GenTriggerPassive_Counter.h"

#include "CombatEntityHub.h"
#include "SkillHandler.h"

FCombatLog_PassiveSkilData UGenTriggerPassive_Counter::ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent)
{
	int SkillIndex = FMath::RandRange(0,99);

	if(SkillIndex < 99)
	{
		TArray<UCombatEntity*> triggerer;

		triggerer.Add(WhoTriggeredEvent);
		
		attachedCombatEntity->combatEntityHub->skillHandler->SendSkillAction(triggerer, ESkillIDS::DefaultAttack);
	}
	
	
	return IOnGenericPassive::ActivateGenericPassive_Implementation(WhoTriggeredEvent);
}
