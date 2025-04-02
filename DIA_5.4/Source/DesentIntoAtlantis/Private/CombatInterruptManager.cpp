// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptManager.h"

#include "CombatGameModeBase.h"

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

UCombatInterrupt* UCombatInterruptManager::CreateInterrupt(FString aCreatorName,EInterruptType aInterruptType,
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
		break;
	}
	aCombatInterruptData.whoTriggeredInterrupt = aCreatorName;
	CombatInterrupt->SetInterrupt(persistentGameInstance);
	CombatInterrupt->SetCombatInterruptData(aCombatInterruptData);
	return CombatInterrupt;
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
