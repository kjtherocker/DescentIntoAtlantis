// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatStat.h"

#include "PlayerCombatEntity.h"

int UPlayerCombatStats::GetAllStats()
{
	int classBase = GetClassBases();
	int GetAllStats =  base + buff + debuff + domain + GetAllPassive();
	auto  test = passives;
	return classBase + GetAllStats;
}

void UPlayerCombatStats::SetStat(FPlayerIdentityData aPlayerIdentityData, int aCurrentLevel)
{
	base = GetStatByLevel(aPlayerIdentityData,aCurrentLevel);
}

int UPlayerCombatStats::GetStatByLevel(FPlayerIdentityData aPlayerIdentityData, int aCurrentLevel)
{
	int baseGrowth = aPlayerIdentityData.playerStatGrowths.baseStats[StatType] ;
	int baseStat   = aPlayerIdentityData.playerStatBases.baseStats[StatType];
		
	return baseStat + (aCurrentLevel / baseGrowth);
}

void UPlayerCombatStats::AddClassStatBase(FCompleteClassData aCompleteClassData)
{
	classStatBases.Add(aCompleteClassData.classIdentifer,aCompleteClassData.classStatBase.baseStats[StatType]);
}

int UPlayerCombatStats::GetClassBases()
{
	int classBase = 0;

	if(classStatBases.Num() == 0)
	{
		return classBase;
	}
		
	for (TTuple<EClassID, int> Element : classStatBases)
	{
		classBase += Element.Value;
	}
		
	return classBase;
}
