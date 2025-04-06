// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityInterruptHandler.h"

#include "CombatInterruptData.h"
#include "CombatInterruptManager.h"


void UEntityInterruptHandler::InitializeInterruptHandler(UCombatEntity* aOwnedCombatEntity,
                                                         UPersistentGameinstance* aPersistantGameInstance)
{
	ownedCombatEntity = aOwnedCombatEntity;
	persistantGameInstance = aPersistantGameInstance;
}

void UEntityInterruptHandler::InitializeCombatInterruptManager(UCombatInterruptManager* aCombatInterruptHandler)
{
	CombatInterruptHandler = aCombatInterruptHandler;
}

void UEntityInterruptHandler::SetInterruptData(FInterruptData aInterruptData)
{
	InterruptData = aInterruptData;
}

void UEntityInterruptHandler::AddCombatInterrupt(UCombatInterrupt* aCombatInterrupt)
{
	combatInterruptSkill.Add(aCombatInterrupt);
}

TArray<UCombatInterrupt*> UEntityInterruptHandler::CheckGenericTriggerInterrupts(EGenericTrigger aGenericTrigger)
{
	TArray<UCombatInterrupt*> CombatInterrupts;

	for (int i = 0 ; i < InterruptData.GenericInterruptTriggers.Num();i++)
	{
		FCombatInterruptData CombatInterruptDatas = InterruptData.GenericInterruptTriggers[i];
		if(CombatInterruptDatas.GenericTrigger != aGenericTrigger)
		{
			continue;
		}

		FTriggeredInterruptData triggered;

		triggered.Entity = ownedCombatEntity;
		triggered.Name   = ownedCombatEntity->GetEntityName();
		
		CombatInterrupts.Add(CombatInterruptHandler->CreateInterrupt(triggered,
			CombatInterruptDatas.interruptType,CombatInterruptDatas));
		
		if(CombatInterruptDatas.isConsumedOnUse)
		{
			CombatInterruptDatas.isDisabled = true;			
		}

		InterruptData.GenericInterruptTriggers[i] = CombatInterruptDatas;
	}
		

	return CombatInterrupts;
}

TArray<UCombatInterrupt*> UEntityInterruptHandler::CheckHealthRelatedInterrupt()
{
	TArray<UCombatInterrupt*> CombatInterrupts;

	for(int i = 0 ; i < InterruptData.HealthPercentageTriggers.Num();i++)
	{
		FCombatInterruptData CombatInterruptData = InterruptData.HealthPercentageTriggers[i];
		if(CombatInterruptData.isDisabled)
		{
			continue;
		}
		float healthpercentage = ownedCombatEntity->GetHealthPercentage();
		if(healthpercentage > CombatInterruptData.HealthThresholdData.LowPercent )
		{
			if(healthpercentage < CombatInterruptData.HealthThresholdData.TopPercent )
			{
				FTriggeredInterruptData triggered;

				triggered.Entity = ownedCombatEntity;
				triggered.Name   = ownedCombatEntity->GetEntityName();
				
				CombatInterrupts.Add(CombatInterruptHandler->CreateInterrupt(triggered,CombatInterruptData.interruptType,
					CombatInterruptData));
				if(CombatInterruptData.isConsumedOnUse)
				{
					CombatInterruptData.isDisabled = true;			
				}	
			}
		}

		InterruptData.HealthPercentageTriggers[i] = CombatInterruptData;
	}

	return CombatInterrupts;
}

TArray<UCombatInterrupt*> UEntityInterruptHandler::GetCombatInterrupts()
{
	TArray<UCombatInterrupt*> CombatInterrupts;
	TArray<UCombatInterrupt*> healthInterrupts = CheckHealthRelatedInterrupt();

	for (auto CombatInterrupt : combatInterruptSkill)
	{
		CombatInterrupts.Add(CombatInterrupt);
	}

	combatInterruptSkill.Empty();
	for(int i = 0; i < healthInterrupts.Num();i++)
	{
		CombatInterrupts.Add(healthInterrupts[i]);		
	}

	
	return CombatInterrupts;
}
