// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatStat.h"

#include "PassiveSkills.h"

int UCombatStat::GetAllStats()
{
	int total =  base + buff + debuff + domain + GetAllPassive();
	return total;
}

void UCombatStat::SetStatType(EStatTypes aStatType)
{
	StatType = aStatType;
}

void UCombatStat::TryAddStatPassive(UPassiveSkills* aPassiveSkills)
{
	if(aPassiveSkills == nullptr)
	{
		return;
	}
	
	if (IStatPassive* SkillableActor = Cast<IStatPassive>(aPassiveSkills))
	{
		FString passiveSkillID = aPassiveSkills->passiveSkillData.passiveName;
		if(!passives.Contains(passiveSkillID))
		{
			passives.Add(passiveSkillID,aPassiveSkills);
		}	
	}
}

void UCombatStat::TryRemoveStatPassive(UPassiveSkills* aPassiveSkills)
{
	if(aPassiveSkills == nullptr)
	{
		return;
	}

	FString passiveSkillID = aPassiveSkills->passiveSkillData.passiveName;
	if(passives.Contains(passiveSkillID))
	{
		passives.Remove(passiveSkillID);
	}	
	
}


int UCombatStat::GetAllPassive()
{
	if(passives.Num() == 0)
	{
		return 0;
	}
	
	int PassiveValue = 0;
	
	for (TTuple<FString, UPassiveSkills*> Element : passives)
	{
		if (IStatPassive* SkillableActor = Cast<IStatPassive>(Element.Value))
		{
			PassiveValue += SkillableActor->Execute_GetStatIncrease(Element.Value,StatType);
		}
		
	}
	
	return PassiveValue;
}

void UCombatStat::AttachAbilityScoreChange(int timeLimit, bool isBuff)
{
	if(isBuff)
	{
		buffTimeRemaining = timeLimit;
		buff              = base * ABILITYSCORE_CONVERSION_RATIO;
	}
	else
	{
		debuffTimeRemaining = timeLimit;
		debuff              = base * ABILITYSCORE_CONVERSION_RATIO;
	}
}

void UCombatStat::ResetAbilityscore()
{
	buff   = 0;
	debuff = 0;
	domain = 0;
}

void UCombatStat::TurnEnd()
{
	buffTimeRemaining--;
	if(buffTimeRemaining <= 0)
	{
		buff = 0;
	}
	     	  
	debuff--;
	if(debuffTimeRemaining <= 0)
	{
		debuff = 0;
	}
}

void UCombatStat::SetStat(FPlayerIdentityData aPlayerIdentityData, int aCurrentLevel)
{
	base = GetStatByLevel(aPlayerIdentityData,aCurrentLevel);
}

int UCombatStat::GetStatByLevel(FPlayerIdentityData aPlayerIdentityData, int aCurrentLevel)
{
	int baseGrowth = aPlayerIdentityData.playerStatGrowths.baseStats[StatType] ;
	int baseStat   = aPlayerIdentityData.playerStatBases.baseStats[StatType];
		
	return baseStat + (aCurrentLevel / baseGrowth);
}

void UCombatStat::AddClassStatBase(FCompleteClassData aCompleteClassData)
{
	classStatBases.Add(aCompleteClassData.classIdentifer,aCompleteClassData.classStatBase.baseStats[StatType]);
}

int UCombatStat::GetClassBases()
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
