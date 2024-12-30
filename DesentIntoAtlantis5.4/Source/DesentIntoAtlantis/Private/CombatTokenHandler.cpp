// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatTokenHandler.h"

#include "PassiveSkillFactorySubsystem.h"


void UCombatTokenHandler::CombatEnd()
{
	activeCombatTokens.Empty();
}

void UCombatTokenHandler::AddCombatToken(ECombatTokenID aCombatTokenID )
{
	 FCombatToken_Base_Data combatTokenData = passiveSkillFactorySubsystem->GetCombatTokenData(aCombatTokenID);

	if(combatTokenData.CombatTokenNames == ECombatTokenID::None)
	{
		return;
	}
	
	for(int i = 0 ; i < activeCombatTokens.Num();i++)
	{
		FCombatToken_Base_Data currentCombatTokenData = activeCombatTokens[i]->GetCombatTokenData();
		if(currentCombatTokenData.CombatTokenNames == combatTokenData.CombatTokenNames)
		{
			activeCombatTokens[i]->SameCombatTokenWasAdded();
			return;
		}
	}
	
	NewCombatTokenWasAdded(CreateNewCombatTokenClass(aCombatTokenID),combatTokenData);
}

UCombatToken_Base* UCombatTokenHandler::CreateNewCombatTokenClass(ECombatTokenID aCombatTokenID)
{
	switch (aCombatTokenID)
	{
	case ECombatTokenID::None:
		return nullptr;
		break;
	case ECombatTokenID::DarkWeakness:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::Evade:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::InFlame:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::PhysicalAttackUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::MagicAttackUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::PhysicalAttackDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::MagicAttackDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	}

	return nullptr;
}

void UCombatTokenHandler::RemoveCombatToken(UCombatToken_Base* combatToken)
{
	FCombatToken_Base_Data combatTokenData = combatToken->GetCombatTokenData();

	for(int i = 0 ; i < activeCombatTokens.Num();i++)
	{
		FCombatToken_Base_Data currentCombatTokenData = activeCombatTokens[i]->GetCombatTokenData();
		if(currentCombatTokenData.CombatTokenNames == combatTokenData.CombatTokenNames)
		{
			activeCombatTokens.RemoveAt(i);
			return;
		}
	}

	
}

void UCombatTokenHandler::NewCombatTokenWasAdded(UCombatToken_Base* combatToken,FCombatToken_Base_Data aCombatTokenBaseData)
{
	combatToken->SetCombatToken(aCombatTokenBaseData);
	combatToken->CombatTokenEndEffect.AddDynamic(this,&UCombatTokenHandler::RemoveCombatToken);
	activeCombatTokens.Add(combatToken);

	combatToken->ApplyEffect(OwnedCombatEntity);
	onCombatTokenAdded.Broadcast(combatToken);
}

void UCombatTokenHandler::InitializeCombatTokenHandler(UCombatEntity* aOwnedCombatEntity,
	UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	passiveSkillFactorySubsystem = aPassiveSkillFactorySubsystem;
	OwnedCombatEntity            = aOwnedCombatEntity;
}

TArray<FCombatLog_PassiveSkilData> UCombatTokenHandler::CheckAttackDefenceTokens(int& CurrentDamage,
	UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	passiveSkillsUsed.Empty();
	 
	for (UPassiveSkills* passiveSkillWrapper : activeCombatTokens)
	{
		if (IOnAttackDefencePassive* attackDefencePassive = Cast<IOnAttackDefencePassive>(passiveSkillWrapper))
		{
			if(attackDefencePassive->Execute_IsPassiveTriggered(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill))
			{
				passiveSkillsUsed.Add(attackDefencePassive->Execute_ActivateAttackDefencePassive(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill));
			}
		}
	}

	return passiveSkillsUsed;
}
