// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_Base.h"

#include "CombatStat.h"
#include "CombatToken_Base_Data.h"
#include "Health.h"
#include "PlayerCombatStat.h"
#include "ResourceHandler.h"

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

void UCombatToken_Base::InitializeCombatToken(FCombatToken_Base_Data combatToken,FCombatTokenStackData aCombatTokenStackData, UCombatEntity* aCombatEntity)
{
	CombatToken_Base_Data = combatToken;
	aCombatEntity->OnRoundEnd.AddDynamic(this,&UCombatToken_Base::RoundEnd);
	SetTurnsRemaining(aCombatTokenStackData);
	CombatTokenStateInfo.currentTokenStack = aCombatTokenStackData.stackAmount;
}

void UCombatToken_Base::SetTurnsRemaining(FCombatTokenStackData aCombatTokenStateInfo)
{
	CombatTokenStateInfo.turnsRemaining = aCombatTokenStateInfo.TurnLength == CombatToken_Base_Data.startingTokenTurnLength
		? CombatToken_Base_Data.startingTokenTurnLength :  aCombatTokenStateInfo.TurnLength;
}

void UCombatToken_Base::InvertCombatToken(FCombatToken_Base_Data combatToken)
{
	CombatToken_Base_Data = combatToken;
	BroadCastCombatTokenChange();
}

void UCombatToken_Base::SetCombatTokenSlotPosition(int aSlotPosition)
{
	CombatToken_Base_Data.slotPosition = aSlotPosition;
}

int UCombatToken_Base::GetTurnResetValue()
{
	return CombatToken_Base_Data.startingTokenTurnLength;
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
	if(attachedCombatEntity != nullptr)
	{
		attachedCombatEntity->OnRoundEnd.RemoveDynamic(this,&UCombatToken_Base::RoundEnd);		
	}

	
	Super::RemovePassive();
	CombatTokenStateInfo.currentTokenStack = 0;

	CombatTokenEndEffect.Broadcast(this);
	BroadCastCombatTokenChange();

	CombatTokenEndEffect.Clear();
	onCombatTokenChange.Clear();
}

void UCombatToken_Base::ActivatePassive()
{
	Super::ActivatePassive();
}

void UCombatToken_Base::SameCombatTokenWasAdded(FCombatTokenStackData aCombatTokenStackData)
{
	SetTurnsRemaining(aCombatTokenStackData);
	AddNewTokenStack(aCombatTokenStackData.stackAmount);
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
			{
				UCombatStat* combatStat = attachedCombatEntity->abilityScoreMap[aStatType];
				statIncrease = attachedCombatEntity->abilityScoreMap[aStatType]->base * (CombatToken_Base_Data.passiveStats[aStatType] / 100.0f);
				
				statIncrease = statIncrease >= 5 ? statIncrease: 5;
			}		
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

void UCombatToken_RoundEnd::RoundEnd()
{
	Super::RoundEnd();
}

void UCombatToken_RoundEnd_Health::RoundEnd()
{
	FHealthData healthdata = attachedCombatEntity->ResourceHandler->healthHandler->GetHealthData();
	int percentageOfHealth = (healthdata.ResourceBarInfo.Max * CombatToken_Base_Data.valuePercentage) / 100;
	if(CombatToken_Base_Data.CombatTokenType == ECombatTokenType::Positive)
	{
		attachedCombatEntity->ResourceHandler->IncrementResource(EResource::Health,percentageOfHealth * CombatTokenStateInfo.currentTokenStack);
	}
	if(CombatToken_Base_Data.CombatTokenType == ECombatTokenType::Negative)
	{
		attachedCombatEntity->ResourceHandler->DecrementResource(EResource::Health, percentageOfHealth * CombatTokenStateInfo.currentTokenStack);
	}
	
	Super::RoundEnd();
}
