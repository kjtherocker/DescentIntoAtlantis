// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_Ailment.h"

#include "CombatEntityHub.h"

void UCombatToken_Ailment::ValidateStackState()
{
	//TODO: Make a thing that checks the max with passives added if there is any
	int PassiveBonus = 0;

	int MaxStackWithPassive = attachedCombatEntity->combatEntityHub->GetAilmentResistance();
	
	if(CombatTokenStateInfo.currentTokenStack >= MaxStackWithPassive)
	{
		CombatTokenStateInfo.currentTokenStack = MaxStackWithPassive;
		ActivateAilment();
	}

	if(CombatTokenStateInfo.currentTokenStack <= 0 )
	{
		RemoveEffect(attachedCombatEntity);
		RemovePassive();
	}

	BroadCastCombatTokenChange();
}

void UCombatToken_Ailment::ActivateAilment()
{
	hasAilmentActivated = true;

	FCombatTokenStackData combatTokenStackData;
	combatTokenStackData.stackAmount           = CombatTokenStateInfo.currentTokenStack;
	combatTokenStackData.TurnLength            = 3;
	combatTokenStackData.combatTokenID         = GetCombatTokenID();

	ApplyAilmentEffect(attachedCombatEntity);
	
	SetTurnsRemaining(combatTokenStackData);
}

void UCombatToken_Ailment::AddNewTokenStack(int aAddedTokens)
{
	if(hasAilmentActivated)
	{
		return;
	}
	
	Super::AddNewTokenStack(aAddedTokens);
}

void UCombatToken_Ailment::SameCombatTokenWasAdded(FCombatTokenStackData aCombatTokenStackData)
{
	if(hasAilmentActivated)
	{
		return;
	}
	
	Super::SameCombatTokenWasAdded(aCombatTokenStackData);
}

void UCombatToken_Ailment::RemoveTokenFromStack(int aRemovedToken)
{
	if(hasAilmentActivated)
	{
		return;
	}
	
	Super::RemoveTokenFromStack(aRemovedToken);
}

void UCombatToken_Ailment::ApplyAilmentEffect(UCombatEntity* aCombatEntity)
{
	aCombatEntity->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
}

void UCombatToken_Ailment::RemoveAilmentEffect(UCombatEntity* aCombatEntity)
{
}


void UCombatToken_Ailment::TeamTurnEnded()
{
	if(CombatTokenStateInfo.turnsRemaining  <= 0)
	{
		RemoveAilmentEffect(attachedCombatEntity);
	}
	
	Super::TeamTurnEnded();
}
