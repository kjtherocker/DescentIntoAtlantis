// Fill out your copyright notice in the Description page of Project Settings.


#include "PressTurnManager.h"

#include "CombatEntity.h"
#include "CombatGameModeBase.h"
#include "InGameHUD.h"
#include "SkillBase.h"

#include "TurnCounterView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"


void UPressTurnManager::Initialize(ACombatGameModeBase* aCombatManager)
{
	combatManager = aCombatManager;
	gameModeBase = aCombatManager;
	
	
	for(int i = 0 ; i < AMOUNT_OF_PRESSTURNS; i++)
	{
		inActivePressTurns.Add(NewObject<UPressTurn>());
	}
}

void UPressTurnManager::SetAmountOfTurns(int aTurnAmount, ECharactertype aCharacterType)
{
	if(activePressTurns.Num() > 0)
	{
		for(int i =  activePressTurns.Num() -1 ; i >= 0;i--)
		{
			inActivePressTurns.Add(activePressTurns[i]);
			activePressTurns.RemoveAt(i);
		}
	}
	
	for(int i = 0;i < aTurnAmount;i++)
	{
		activePressTurns.Add(GetInActivePressturns());
	}

	characterType = aCharacterType;
	
	turnCounter = (UTurnCounterView*)gameModeBase->InGameHUD->GetActiveHUDView(EViews::TurnCounter, EUiType::PersistentUi);
	turnCounter->SetTurnOrder(activePressTurns.Num(),characterType);

}

UPressTurn* UPressTurnManager::GetInActivePressturns()
{
	UPressTurn* pressTurn;
	if(inActivePressTurns.Num() > 0)
	{
		pressTurn = inActivePressTurns[0];
		inActivePressTurns[0]->isEmpowered = false;
		inActivePressTurns.RemoveAt(0);
		return pressTurn;
	}
	return nullptr;
}

int UPressTurnManager::GetNumberOfActivePressTurns()
{
	return activePressTurns.Num();
}

void UPressTurnManager::ProcessTurn(TArray<EPressTurnReactions> aAllTurnReactions)
{
	//Null Skills Consume all press turns completely

	for (EPressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == EPressTurnReactions::Null)
		{
			ConsumeTurn(activePressTurns.Num());
			return;
		}
	}
        
        
	//If Dodged Consume two press turns if empowered only take the empowered and the next token
        
	for (EPressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == EPressTurnReactions::Dodge ||
			reaction == EPressTurnReactions::Strong )
		{
			ConsumeTurn(2);
			return;
		}
	}
        
	//If weakness is hit correctly then the turn that was used will be empowered
        
	for (EPressTurnReactions reaction : aAllTurnReactions)
	{
		if (reaction == EPressTurnReactions::Weak || 
			reaction == EPressTurnReactions::Pass)
		{
			EmpowerTurn();
			return;
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
		if(i >= 0)
		{
			inActivePressTurns.Add(activePressTurns[i]);
			activePressTurns.RemoveAt(i);
		}
	}
	turnCounter->SetTurnOrder(activePressTurns.Num(),characterType);
	
	combatManager->TriggerTurnEndTimers();
}

void UPressTurnManager::EmpowerTurn()
{
	int ActivePositionTurn = activePressTurns.Num() - 1;
        
	if (activePressTurns[ActivePositionTurn]->isEmpowered == false)
	{
		activePressTurns[ActivePositionTurn]->isEmpowered = true;
		turnCounter->SetEmpowerTurnIcon(ActivePositionTurn);
		combatManager->TurnEnd();
	}
	else
	{
		ConsumeTurn(1);
	}
}
