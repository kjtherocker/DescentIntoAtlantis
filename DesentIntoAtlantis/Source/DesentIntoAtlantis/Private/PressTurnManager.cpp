// Fill out your copyright notice in the Description page of Project Settings.


#include "PressTurnManager.h"

#include "CombatEntity.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
#include "CombatManager.h"
#include "InGameHUD.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.h"
#include "TurnCounter.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"


void UPressTurnManager::Initialize(UCombatManager* aCombatManager, ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	combatManager = aCombatManager;
	gameModeBase = aGameModeBase;
	
	
	for(int i = 0 ; i < AMOUNT_OF_PRESSTURNS; i++)
	{
		inActivePressTurns.Add(NewObject<UPressTurn>());
	}
}

void UPressTurnManager::SetAmountOfTurns(int aTurnAmount)
{
	if(activePressTurns.Num() > 0)
	{
		for (int i = activePressTurns.Num() - 1; i > 0; i--)
		{
			inActivePressTurns.Add(activePressTurns[i]);
			activePressTurns.RemoveAt(i);
		}
	}
	
	for(int i =0 ;i < aTurnAmount;i++)
	{
		activePressTurns.Add(GetInActivePressturns());
	}

	turnCounter = (UTurnCounter*)gameModeBase->InGameHUD->GetActiveHUDView(EViews::TurnCounter, EUiType::PersistentUi);
	turnCounter->SetTurnOrder(activePressTurns.Num());

}

UPressTurn* UPressTurnManager::GetInActivePressturns()
{
	UPressTurn* pressTurn;
	if(inActivePressTurns.Num() > 0)
	{
		pressTurn = inActivePressTurns[0];
		inActivePressTurns.RemoveAt(0);
		return pressTurn;
	}
	return nullptr;
}

int UPressTurnManager::GetNumberOfActivePressTurns()
{
	return activePressTurns.Num();
}

void UPressTurnManager::ActivateSkill(FCombatEntity* aAttacker, int aCursorPosition, FSkills_Base* aSkill)
{
	TArray<FCombatEntity*>  enemysInCombat  = TArray<FCombatEntity*>(combatManager->GetEnemysInCombat());
	TArray<FCombatEntity*> playersInCombat  = TArray<FCombatEntity*>(combatManager->GetPlayersInCombat());
	
	TArray<FCombatEntity*> entitySkillsAreUsedOn;

	TArray<PressTurnReactions> turnReactions;
	
	
	if(aAttacker->characterType == ECharactertype::Ally)
	{
		entitySkillsAreUsedOn = aSkill->SkillType == Attack ? enemysInCombat : playersInCombat;
	}
	else if(aAttacker->characterType == ECharactertype::Enemy)
	{
		entitySkillsAreUsedOn = aSkill->SkillType == Attack ? playersInCombat : enemysInCombat;
	}

	if(aSkill->skillRange == ESkillRange::Single)
	{
		turnReactions.Add(aSkill->UseSkill(aAttacker,entitySkillsAreUsedOn[aCursorPosition]));
	}
	else if (aSkill->skillRange == ESkillRange::Multi)
	{
		for(int i = 0 ; i <entitySkillsAreUsedOn.Num();i++)
		{
			turnReactions.Add(aSkill->UseSkill(aAttacker,entitySkillsAreUsedOn[i]));
		}
		
	}

	ProcessTurn(turnReactions);
}

void UPressTurnManager::ProcessTurn(TArray<PressTurnReactions> aAllTurnReactions)
{
	//Null Skills Consume all press turns completely

	for (PressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == PressTurnReactions::Null)
		{
			ConsumeTurn(activePressTurns.Num());
			return;
		}
	}
        
        
	//If Dodged Consume two press turns if empowered only take the empowered and the next token
        
	for (PressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == PressTurnReactions::Dodge ||
			reaction == PressTurnReactions::Strong )
		{
			ConsumeTurn(2);
			return;
		}
	}
        
	//If weakness is hit correctly then the turn that was used will be empowered
        
	for (PressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == PressTurnReactions::Weak || 
			reaction == PressTurnReactions::Pass)
		{
			//EmpowerTurn();
			//return;
		}
	}
        
        
	//Normal action Consume 1 empowered or normal pressturn
	ConsumeTurn(1);
	//Passing will turn a whole icon into a empowered one but will consume an empowered one if it is

}

void UPressTurnManager::ConsumeTurn(int aAmountOfTurnsConsumed)
{
	
	int TurnsRemaining =  (activePressTurns.Num() - 1)  - aAmountOfTurnsConsumed;
	
	for (int i = activePressTurns.Num() - 1; i > TurnsRemaining; i--)
	{
		inActivePressTurns.Add(activePressTurns[i]);
		activePressTurns.RemoveAt(i);
	}
	turnCounter->SetTurnOrder(activePressTurns.Num());
	
	combatManager->TurnFinished();
}

void UPressTurnManager::EmpowerTurn()
{
	int ActivePositionTurn = activePressTurns.Num() - 1;
        
	if (activePressTurns[ActivePositionTurn]->m_IsEmpowered == false)
	{
		activePressTurns[ActivePositionTurn]->m_IsEmpowered = true;
		//ChangeActivePressTurn(activePressTurns[ActivePositionTurn], ActivePositionTurn, true);
		//m_TurnKeeper.SetPressTurns(m_ActivePressTurn);
		combatManager->TurnFinished();
	}
	else
	{
		ConsumeTurn(1);
	}
}
