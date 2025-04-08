// Fill out your copyright notice in the Description page of Project Settings.


#include "GenTriggerPassive_Resurrection.h"


FCombatLog_PassiveSkilData UGenTriggerPassive_Resurrection::ActivateGenericPassive_Implementation(UCombatEntity* WhoTriggeredEvent)
{

	attachedCombatEntity->Resurrection();
	
	return Super::ActivateGenericPassive_Implementation(WhoTriggeredEvent);
}