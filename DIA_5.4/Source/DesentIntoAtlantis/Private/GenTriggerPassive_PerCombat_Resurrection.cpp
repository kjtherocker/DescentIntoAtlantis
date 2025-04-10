// Fill out your copyright notice in the Description page of Project Settings.


#include "GenTriggerPassive_PerCombat_Resurrection.h"


FCombatLog_PassiveSkilData UGenTriggerPassive_PerCombat_Resurrection::ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent)
{

	attachedCombatEntity->Resurrection();
	
	return Super::ActivateGenericPassive_Implementation(WhoTriggeredEvent);
}