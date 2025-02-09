// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptManager.h"

#include "CombatGameModeBase.h"

void UCombatInterruptManager::InitializeCombatInterruptHandler(ACombatGameModeBase* aCombatGameModeBase)
{
	CombatGameModeBase = aCombatGameModeBase;
}

void UCombatInterruptManager::SetAllInterruptHandlers(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,
	TArray<UEnemyCombatEntity*> aEnemyCombatEntitys)
{
	currentInterruptHandlers.Empty();
	
	TArray<UInterruptHandler*> InterruptHandlers;

	for (auto InterruptHandler : aPartyMembersInCombat)
	{
		InterruptHandlers.Add(InterruptHandler->combatEntityHub->InterruptHandler);
	}
	
	for (auto InterruptHandler : aEnemyCombatEntitys)
	{
		InterruptHandlers.Add(InterruptHandler->combatEntityHub->InterruptHandler);
	}

	currentInterruptHandlers = InterruptHandlers;
}

void UCombatInterruptManager::AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt)
{
	UCombatInterrupt* newCombatInterrupt = aCombatInterrupt;
	SetInterruptionValueByType( newCombatInterrupt);

	//If there is nothing add it
	if(CombatInterrupts.Num() == 0)
	{
		CombatInterrupts.Add(newCombatInterrupt);
	}
	else
	{
		for(int i = 0 ; i < CombatInterrupts.Num()+1;i++)
		{
			//If you are the greatest be put at the end
			if(i > CombatInterrupts.Num())
			{
				CombatInterrupts.Insert(newCombatInterrupt,i);
				break;
			}

			//If you are equal or less then this value go here
			if(CombatInterrupts[i]->GetInterruptionValue() >=
				newCombatInterrupt->GetInterruptionValue())
			{
				CombatInterrupts.Insert(newCombatInterrupt,i);
				break;
			}	
		}
	}
}

void UCombatInterruptManager::CheckGenericTriggerInerrptions(EGenericTrigger aGenericTrigger)
{
	for (auto Element : currentInterruptHandlers)
	{
		TArray<UCombatInterrupt*> combatInterrupt = Element->CheckGenericTriggerInterrupts(aGenericTrigger);

		if(combatInterrupt.Num() == 0)
		{
			continue;
		}

		for(int i = 0 ; i < combatInterrupt.Num();i++)
		{
			AddCombatInterrupt(combatInterrupt[i]);
		}
	}
}

void UCombatInterruptManager::CheckAllEntitysForInterruptions()
{
	for (auto Element : currentInterruptHandlers)
	{
		TArray<UCombatInterrupt*> combatInterrupt = Element->GetCombatInterrupts();

		if(combatInterrupt.Num() == 0)
		{
			continue;
		}

		for(int i = 0 ; i < combatInterrupt.Num();i++)
		{
			AddCombatInterrupt(combatInterrupt[i]);
		}
	}
}

void UCombatInterruptManager::SetInterruptionValueByType(UCombatInterrupt* aCombatInterrupt)
{
	///Higher number
	switch (aCombatInterrupt->GetInterruptionType())
	{
	case EInterruptType::None:
		aCombatInterrupt->SetInterruptionValue(0);
		break;
	case EInterruptType::Dialogue:
		aCombatInterrupt->SetInterruptionValue(1);
		break;
	case EInterruptType::Skill:
		aCombatInterrupt->SetInterruptionValue(20);
		break;
	case EInterruptType::Passive:
		aCombatInterrupt->SetInterruptionValue(25);
		break;
	}
}

void UCombatInterruptManager::SetInterruptionTriggerOrder()
{
	
	
}

void UCombatInterruptManager::StartTriggeringInterruptions()
{
	if(!HasInterruptions())
	{
		CombatInterruptsEnd();
		return;
	}

	
	TriggerInterruption();
}

void UCombatInterruptManager::TriggerInterruption()
{
	if(!HasInterruptions())
	{
		CombatInterruptsEnd();
		return;
	}
	CombatInterrupts[0]->OnInterruptEnd.AddDynamic(this,&UCombatInterruptManager::CombatInterruptsEnd);
	CombatInterrupts[0]->ActivateInterrupt();
	CombatInterrupts.RemoveAt(0);
}

void UCombatInterruptManager::CombatInterruptsEnd()
{
	CombatGameModeBase->TurnEnd();
}
