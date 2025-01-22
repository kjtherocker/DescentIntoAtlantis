// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatTokenHandler.h"

#include "PassiveSkillFactorySubsystem.h"


void UCombatTokenHandler::CombatEnd()
{
	activeCombatTokens.Empty();
}

FCombatToken_Base_Data UCombatTokenHandler::AddCombatToken(ECombatTokenID aCombatTokenID, FCombatTokenStackData aCombatTokenStackData)
{
	 FCombatToken_Base_Data combatTokenData = passiveSkillFactorySubsystem->GetCombatTokenData(aCombatTokenID);
	
	if(combatTokenData.CombatTokenID == ECombatTokenID::None)
	{
		return combatTokenData;
	}

	UCombatToken_Base* token = GetCombatTokenByID(aCombatTokenID);

	if(token != nullptr)
	{
		token->SameCombatTokenWasAdded(aCombatTokenStackData);
	}
	else
	{
		NewCombatTokenWasAdded(CreateNewCombatTokenClass(aCombatTokenID),combatTokenData,aCombatTokenStackData);	
	}
	
	
	return combatTokenData;
}

void UCombatTokenHandler::InvertCombatToken(ECombatTokenID aCurrentTokenID)
{
	for (auto CombatToken : activeCombatTokens)
	{
		if(CombatToken->GetCombatTokenID() == aCurrentTokenID)
		{
			FCombatToken_Base_Data combatTokenData = passiveSkillFactorySubsystem->
			GetCombatTokenData(CombatToken->GetCombatTokenData().InvertedCombatTokenID);
			CombatToken->RemoveEffect(OwnedCombatEntity);
			CombatToken->InvertCombatToken(combatTokenData);
			CombatToken->ApplyEffect(OwnedCombatEntity);
			return;
		}
	}
}

void UCombatTokenHandler::InvertAllCombatToken(ECombatTokenType aTokenType)
{
	for (auto Element : activeCombatTokens)
	{
		if(Element->GetCombatTokenType() ==  aTokenType)
		{
			InvertCombatToken(Element->GetCombatTokenID());	
		}
	}
}

void UCombatTokenHandler::InvertAllCombatToken()
{
	for (auto Element : activeCombatTokens)
	{
		InvertCombatToken(Element->GetCombatTokenID());
	}
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
	case ECombatTokenID::StrengthUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::MagicUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::StrengthDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::MagicDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::HitUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::HitDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::EvasionUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::EvasionDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::DefenceUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::DefenceDown:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::ResistanceUp:
		return NewObject<UCombatToken_GenericStat>();
		break;
	case ECombatTokenID::ResistanceDown:
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
		if(currentCombatTokenData.CombatTokenID == combatTokenData.CombatTokenID)
		{
			activeCombatTokens[i]->RemoveEffect(OwnedCombatEntity);
			activeCombatTokens.RemoveAt(i);
			return;
		}
	}
}

void UCombatTokenHandler::RemoveAllCombatTokens()
{
	for (int i = activeCombatTokens.Num() - 1; i >= 0; i--)
	{
		activeCombatTokens[i]->RemovePassive();
	}
}

void UCombatTokenHandler::RemoveAllCombatTokens(ECombatTokenType aCombatTokenType)
{
	for (int i = activeCombatTokens.Num() - 1; i >= 0; i--)
	{
		if(activeCombatTokens[i]->GetCombatTokenType() == aCombatTokenType)
		{
			activeCombatTokens[i]->RemovePassive();
		}
	}
}

UCombatToken_Base* UCombatTokenHandler::GetCombatTokenByID(ECombatTokenID aCombatTokenID)
{
	for(int i = 0 ; i < activeCombatTokens.Num();i++)
	{
		FCombatToken_Base_Data currentCombatTokenData = activeCombatTokens[i]->GetCombatTokenData();
		if(currentCombatTokenData.CombatTokenID == aCombatTokenID)
		{
			return activeCombatTokens[i];
		}
	}

	return  nullptr;
}

TArray<UCombatToken_Base*> UCombatTokenHandler::GetAllCombatTokens(ECombatTokenType aCombatTokenType)
{
	TArray<UCombatToken_Base*> combatTokensToReturn;

	
	for (auto CombatTokensToReturn : activeCombatTokens)
	{
		if(CombatTokensToReturn->GetCombatTokenData().CombatTokenType == aCombatTokenType)
		{
			combatTokensToReturn.Add(CombatTokensToReturn);
		}
	}

	return combatTokensToReturn;
}

void UCombatTokenHandler::NewCombatTokenWasAdded(UCombatToken_Base* combatToken,FCombatToken_Base_Data aCombatTokenBaseData,FCombatTokenStackData combatTokenStackData)
{
	combatToken->AttachPassiveToOwner(OwnedCombatEntity);
	
	combatToken->InitializeCombatToken(aCombatTokenBaseData,combatTokenStackData,OwnedCombatEntity);
	combatToken->CombatTokenEndEffect.AddDynamic(this,&UCombatTokenHandler::RemoveCombatToken);
	combatToken->ApplyEffect(OwnedCombatEntity);

	activeCombatTokens.Add(combatToken);
	onCombatTokenAdded.Broadcast(combatToken);
}

void UCombatTokenHandler::AddAStackOfAllCombatTokens(int aStacks)
{
	for (auto CombatTokensToReturn : activeCombatTokens)
	{
		FCombatTokenStackData combatTokenStackData;
		combatTokenStackData.stackAmount = aStacks;
		combatTokenStackData.TurnLength  = CombatTokensToReturn->GetTurnResetValue();
		combatTokenStackData.combatTokenID = CombatTokensToReturn->GetCombatTokenID();
		CombatTokensToReturn->SameCombatTokenWasAdded(combatTokenStackData);
	}
}

void UCombatTokenHandler::AddAStackOfAllCombatTokens(ECombatTokenType aCombatTokenType,int aStacks)
{
	for (auto CombatTokensToReturn : activeCombatTokens)
	{
		if(CombatTokensToReturn->GetCombatTokenData().CombatTokenType == aCombatTokenType)
		{
			FCombatTokenStackData combatTokenStackData;
			combatTokenStackData.stackAmount = aStacks;
			combatTokenStackData.TurnLength  = CombatTokensToReturn->GetTurnResetValue();
			combatTokenStackData.combatTokenID = CombatTokensToReturn->GetCombatTokenID();
			CombatTokensToReturn->SameCombatTokenWasAdded(combatTokenStackData);
		}
	}
}

void UCombatTokenHandler::InitializeCombatTokenHandler(UCombatEntity* aOwnedCombatEntity,
                                                       UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem)
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
