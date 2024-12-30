// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_Base.h"

#include "CombatStat.h"
#include "CombatToken_Base_Data.h"

void UCombatToken_Base::SetCombatToken(FCombatToken_Base_Data combatToken)
{
	CombatToken_Base_Data = combatToken;
	turnsRemaining = combatToken.startingTokenTurnLength;
}

void UCombatToken_Base::RoundEnd()
{
	turnsRemaining--;

	if(turnsRemaining <= 0)
	{
		RemovePassive();
	}
	
}

void UCombatToken_Base::RemovePassive()
{
	Super::RemovePassive();
	CombatTokenEndEffect.Broadcast(this);
}

void UCombatToken_Base::ActivatePassive()
{
	Super::ActivatePassive();
}

void UCombatToken_Base::SameCombatTokenWasAdded()
{
	turnsRemaining = CombatToken_Base_Data.startingTokenTurnLength;
}

int UCombatToken_GenericStat::GetStatIncrease_Implementation(EStatTypes aStatType)
{
	return CombatToken_Base_Data.passiveStats[aStatType];
}

void UCombatToken_GenericStat::ApplyEffect(UCombatEntity* aCombatEntity)
{
	for (TTuple<EStatTypes, int> Element : CombatToken_Base_Data.passiveStats)
	{
		aCombatEntity->abilityScoreMap[Element.Key]->TryAddStatPassive(this);		
	}
}

void UCombatToken_GenericStat::RemoveEffect(UCombatEntity* aCombatEntity)
{
	for (TTuple<EStatTypes, int> Element : CombatToken_Base_Data.passiveStats)
	{
		aCombatEntity->abilityScoreMap[Element.Key]->TryRemoveStatPassive(this);		
	}
}
