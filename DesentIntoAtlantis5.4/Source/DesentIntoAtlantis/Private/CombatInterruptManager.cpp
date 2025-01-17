// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptManager.h"

#include "CombatGameModeBase.h"

void UCombatInterruptManager::InitializeCombatInterruptHandler(ACombatGameModeBase* aCombatGameModeBase)
{
	CombatGameModeBase = aCombatGameModeBase;
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
