// Fill out your copyright notice in the Description page of Project Settings.


#include "Mana.h"

void UMana::InitializeMana(FManaData aManaData, UCombatEntity* aCombatEntity)
{
	ManaData = aManaData;
	CombatEntity = aCombatEntity;
}

void UMana::SetMana(FManaData aManaData)
{
	ManaData = aManaData;

	ManaData.ManaPercentage = GetManaPercentage();
	HasManaValuesChanged.Broadcast(ManaData);
}

void UMana::IncrementMana(int aIncrementBy)
{
	ManaData.CurrentMana += aIncrementBy;

	if(ManaData.CurrentMana > ManaData.MaxMana)
	{
		ManaData.CurrentMana = ManaData.MaxMana;
	}

	ManaData.ManaPercentage = GetManaPercentage();
	
	HasManaValuesChanged.Broadcast(ManaData);
}

void UMana::DecrementMana(int aDecrementBy)
{
	ManaData.CurrentMana -= aDecrementBy;

	if(ManaData.CurrentMana < 0)
	{
		ManaData.CurrentMana = 0;
	}

	ManaData.ManaPercentage = GetManaPercentage();
	
	HasManaValuesChanged.Broadcast(ManaData);
}

float UMana::GetManaPercentage()
{
	return (float)ManaData.CurrentMana / (float)ManaData.MaxMana;
}
