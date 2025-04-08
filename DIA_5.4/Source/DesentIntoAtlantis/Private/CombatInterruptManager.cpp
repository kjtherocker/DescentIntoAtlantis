// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptManager.h"

#include "CombatGameModeBase.h"
#include "PassiveInterrupt.h"
#include "PlayerCombatEntity.h"
#include "ResurrectionInterrupt.h"

void UCombatInterruptManager::SetGameModeBase(UPersistentGameinstance* aPersistentGameInstance,ACombatGameModeBase* aCombatGameModeBase)
{
	persistentGameInstance = aPersistentGameInstance;
	CombatGameModeBase     = aCombatGameModeBase;
	
}

void UCombatInterruptManager::SetAllInterruptHandlers(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,
                                                      TArray<UEnemyCombatEntity*> aEnemyCombatEntitys)
{
	currentInterruptHandlers.Empty();
	
	TArray<UEntityInterruptHandler*> InterruptHandlers;

	for (auto combatEntity : aPartyMembersInCombat)
	{
		if(combatEntity == nullptr)
		{
			continue;
		}
		UEntityInterruptHandler* InterruptHandler = combatEntity->combatEntityHub->InterruptHandler;
		InterruptHandler->InitializeCombatInterruptManager(this);
		InterruptHandlers.Add(InterruptHandler);
	}
	
	for (auto combatEntity : aEnemyCombatEntitys)
	{
		if(combatEntity == nullptr)
		{
			continue;
		}

		UEntityInterruptHandler* InterruptHandler = combatEntity->combatEntityHub->InterruptHandler;
		InterruptHandler->InitializeCombatInterruptManager(this);
		InterruptHandlers.Add(InterruptHandler);
	}

	currentInterruptHandlers = InterruptHandlers;
}

UCombatInterrupt* UCombatInterruptManager::CreateInterrupt(FTriggeredInterruptData aCreatorName,EInterruptType aInterruptType,
	FCombatInterruptData aCombatInterruptData)
{
	UCombatInterrupt* CombatInterrupt = nullptr;
	switch (aInterruptType)
	{
	case EInterruptType::None:
		break;
	case EInterruptType::Dialogue:
		CombatInterrupt = NewObject<UDialogueInterrupt>();
		break;
	case EInterruptType::Skill:
		CombatInterrupt = NewObject<USkillInterrupt>();
		break;
	case EInterruptType::Passive:
		CombatInterrupt = NewObject<UPassiveInterrupt>();
		break;
	case EInterruptType::Resurrection:
		CombatInterrupt = NewObject<UResurrectionInterrupt>();
		break;
	case EInterruptType::Death:
		CombatInterrupt = NewObject<UEntityDiedInterrupt>();
		break;
	}
	aCombatInterruptData.WhoTriggerInterruptData = aCreatorName;
	CombatInterrupt->SetInterrupt(persistentGameInstance,CombatGameModeBase);
	CombatInterrupt->SetCombatInterruptData(aCombatInterruptData);
	return CombatInterrupt;
}

void UCombatInterruptManager::AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt)
{
	UCombatInterrupt* newCombatInterrupt = aCombatInterrupt;
	SetInterruptionValueByType( newCombatInterrupt);
	CombatInterrupts.Add(newCombatInterrupt);
}

void UCombatInterruptManager::ReOrderInterrupt()
{
	for (int32 i = 0; i < CombatInterrupts.Num() - 1; ++i)
	{
		for (int32 j = 0; j < CombatInterrupts.Num() - i - 1; ++j)
		{
			if (CombatInterrupts[j]->GetInterruptionValue() > CombatInterrupts[j + 1]->GetInterruptionValue())
			{
				CombatInterrupts.Swap(j, j + 1);
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
	case EInterruptType::Resurrection:
		aCombatInterrupt->SetInterruptionValue(3);
		break;
	case EInterruptType::Death:
		aCombatInterrupt->SetInterruptionValue(2);
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
	ReOrderInterrupt();
	if(!HasInterruptions())
	{
		CombatInterruptsEnd();
		return;
	}
	CombatInterrupts[0]->OnInterruptEnd.AddDynamic(this,&UCombatInterruptManager::TriggerInterruption);
	CombatInterrupts[0]->ActivateInterrupt();
	CombatInterrupts.RemoveAt(0);
}

void UCombatInterruptManager::CombatInterruptsEnd()
{
	CombatGameModeBase->TurnEnd();
}
