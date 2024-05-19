// Fill out your copyright notice in the Description page of Project Settings.


#include "PressTurnManager.h"

#include "CombatEntity.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
#include "CombatGameModeBase.h"
#include "InGameHUD.h"
#include "UObject/NoExportTypes.h"
#include "SkillsData.h"
#include "SoundManager.h"
#include "CombatGameModeBase.h"
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

void UPressTurnManager::ActivateSkill(UCombatEntity* aAttacker, int aCursorPosition, USkillBase* aSkill)
{
//	gameModeBase->InGameHUD->PushView(EViews::SyncView,EUiType::PersistentUi);
	
	TArray<UCombatEntity*>  enemyInCombat    = TArray<UCombatEntity*>(combatManager->GetEnemysInCombat());
	TArray<UCombatEntity*>  playersInCombat  = TArray<UCombatEntity*>(combatManager->GetPlayersInCombat());
	
	TArray<UCombatEntity*> entitySkillsAreUsedOn;

	TArray<PressTurnReactions> turnReactions;

	FSkillsData skillsData = aSkill->skillData;
	
	if(aAttacker->characterType == ECharactertype::Ally)
	{
		entitySkillsAreUsedOn = skillsData.skillUsage == ESkillUsage::Opponents ? enemyInCombat : playersInCombat;
	}
	else if(aAttacker->characterType == ECharactertype::Enemy)
	{
		entitySkillsAreUsedOn = skillsData.skillUsage == ESkillUsage::Opponents ? playersInCombat : enemyInCombat;
	}
	
	if(skillsData.skillRange == ESkillRange::Single)
	{
		turnReactions.Add(aSkill->UseSkill(aAttacker,entitySkillsAreUsedOn[aCursorPosition]));
	}
	else if (skillsData.skillRange == ESkillRange::Multi)
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
	
	combatManager->TurnFinished();
}

void UPressTurnManager::EmpowerTurn()
{
	int ActivePositionTurn = activePressTurns.Num() - 1;
        
	if (activePressTurns[ActivePositionTurn]->isEmpowered == false)
	{
		activePressTurns[ActivePositionTurn]->isEmpowered = true;
		turnCounter->SetEmpowerTurnIcon(ActivePositionTurn);
		combatManager->TurnFinished();
	}
	else
	{
		ConsumeTurn(1);
	}
}
