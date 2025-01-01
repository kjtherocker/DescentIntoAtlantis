// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_Base.h"

#include "CombatStat.h"
#include "CombatToken_Base_Data.h"

void UCombatToken_Base::ValidateStackState()
{
	//TODO: Make a thing that checks the max with passives added if there is any
	int PassiveBonus = 0;

	int MaxStackWithPassive = CombatToken_Base_Data.MaxStack + PassiveBonus;
	
	if(CombatTokenStateInfo.currentTokenStack >= MaxStackWithPassive)
	{
		CombatTokenStateInfo.currentTokenStack = MaxStackWithPassive;
	}

	if(CombatTokenStateInfo.currentTokenStack <= 0 )
	{
		RemovePassive();
	}

	BroadCastCombatTokenChange();
}

void UCombatToken_Base::AddNewTokenStack(int aAddedTokens)
{
	CombatTokenStateInfo.currentTokenStack += aAddedTokens;

	ValidateStackState();
}

void UCombatToken_Base::RemoveTokenFromStack(int aRemovedToken)
{
	CombatTokenStateInfo.currentTokenStack -= aRemovedToken;

	ValidateStackState();
}

bool UCombatToken_Base::CanConsumeStack()
{
	return CombatTokenStateInfo.currentTokenStack > 0;
}

void UCombatToken_Base::SetCombatToken(FCombatToken_Base_Data combatToken,UCombatEntity* aCombatEntity)
{
	CombatToken_Base_Data = combatToken;
	aCombatEntity->OnRoundEnd.AddDynamic(this,&UCombatToken_Base::RoundEnd);
	CombatTokenStateInfo.turnsRemaining = combatToken.startingTokenTurnLength;
	CombatTokenStateInfo.currentTokenStack = 1;
}

void UCombatToken_Base::RoundEnd()
{
	CombatTokenStateInfo.turnsRemaining --;

	if(CombatTokenStateInfo.turnsRemaining  <= 0)
	{
		RemovePassive();
	}
	
	BroadCastCombatTokenChange();
}

void UCombatToken_Base::RemovePassive()
{
	Super::RemovePassive();
	CombatTokenStateInfo.currentTokenStack = 0;
	CombatTokenEndEffect.Broadcast(this);
}

void UCombatToken_Base::ActivatePassive()
{
	Super::ActivatePassive();
}

void UCombatToken_Base::SameCombatTokenWasAdded()
{
	CombatTokenStateInfo.turnsRemaining = CombatToken_Base_Data.startingTokenTurnLength;
	AddNewTokenStack(1);
	ValidateStackState();
}

void UCombatToken_Base::BroadCastCombatTokenChange()
{
	onCombatTokenChange.Broadcast(CombatTokenStateInfo);
}

int UCombatToken_GenericStat::GetStatIncrease_Implementation(EStatTypes aStatType)
{
	int statIncrease = 0;

	switch (CombatToken_Base_Data.PassiveSkillStatType)
	{
		case EPassiveSkillStatType::None:
		break;
		case EPassiveSkillStatType::RawStat:
			statIncrease = CombatToken_Base_Data.passiveStats[aStatType];
		break;
		case EPassiveSkillStatType::Percentage:
			statIncrease = attachedCombatEntity->abilityScoreMap[aStatType]->base * (CombatToken_Base_Data.passiveStats[aStatType] / 100.0f);
		break;
	}
	
	return statIncrease * CombatTokenStateInfo.currentTokenStack;
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
