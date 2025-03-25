// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraPassive.h"

#include "CombatEntityHub.h"

void UAuraPassive::AttachOwnerCombatEntity(UCombatEntity* aCombatEntity)
{
	aCombatEntity->OnTurnStart.AddDynamic(this,&UAuraPassive::SpendAuraCost);
}

void UAuraPassive::ApplyEffect(UCombatEntity* aCombatEntity)
{
	Super::ApplyEffect(aCombatEntity);

}

void UAuraPassive::RemoveEffect(UCombatEntity* aCombatEntity)
{
	Super::RemoveEffect(aCombatEntity);
}

void UAuraPassive::SpendAuraCost()
{
}
