// Fill out your copyright notice in the Description page of Project Settings.


#include "InterruptHandler.h"

#include "CombatInterruptData.h"

UCombatInterrupt* UInterruptHandler::CreateInterrupt(EInterruptType aInterruptType, FCombatInterruptData aCombatInterruptData)
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
		break;
	case EInterruptType::Passive:
		break;
	}
	aCombatInterruptData.whoTriggeredInterrupt = ownedCombatEntity->GetEntityName();
	CombatInterrupt->SetInterrupt(persistantGameInstance);
	CombatInterrupt->SetCombatInterruptData(aCombatInterruptData);
	return CombatInterrupt;
}

void UInterruptHandler::InitializeInterruptHandler(UCombatEntity* aOwnedCombatEntity,
	UPersistentGameinstance* aPersistantGameInstance)
{
	ownedCombatEntity = aOwnedCombatEntity;
	persistantGameInstance = aPersistantGameInstance;
}

void UInterruptHandler::SetInterruptData(FInterruptData aInterruptData)
{
	InterruptData = aInterruptData;
}

TArray<UCombatInterrupt*> UInterruptHandler::CheckGenericTriggerInterrupts(EGenericTrigger aGenericTrigger)
{
	TArray<UCombatInterrupt*> CombatInterrupts;

	for (int i = 0 ; i < InterruptData.GenericInterruptTriggers.Num();i++)
	{
		FCombatInterruptData CombatInterruptDatas = InterruptData.GenericInterruptTriggers[i];
		if(CombatInterruptDatas.GenericTrigger != aGenericTrigger)
		{
			continue;
		}

		CombatInterrupts.Add(CreateInterrupt( CombatInterruptDatas.interruptType,CombatInterruptDatas));
		if(CombatInterruptDatas.isConsumedOnUse)
		{
			CombatInterruptDatas.isDisabled = true;			
		}

		InterruptData.GenericInterruptTriggers[i] = CombatInterruptDatas;
	}
		

	return CombatInterrupts;
}

TArray<UCombatInterrupt*> UInterruptHandler::CheckHealthRelatedInterrupt()
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
				CombatInterrupts.Add(CreateInterrupt( CombatInterruptData.interruptType,CombatInterruptData));
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

TArray<UCombatInterrupt*> UInterruptHandler::GetCombatInterrupts()
{
	TArray<UCombatInterrupt*> CombatInterrupts;


	TArray<UCombatInterrupt*> healthInterrupts = CheckHealthRelatedInterrupt();

	for(int i = 0; i < healthInterrupts.Num();i++)
	{
		CombatInterrupts.Add(healthInterrupts[i]);		
	}

	
	return CombatInterrupts;
}
