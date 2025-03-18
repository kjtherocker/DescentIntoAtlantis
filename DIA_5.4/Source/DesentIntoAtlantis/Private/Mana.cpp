// Fill out your copyright notice in the Description page of Project Settings.


#include "Mana.h"

void UMana::InitializeMana(FManaData aManaData, UCombatEntity* aCombatEntity)
{
	ManaData = aManaData;
	CombatEntity = aCombatEntity;
	
	Initialize(ManaData.ResourceBarInfo,aCombatEntity);
}

