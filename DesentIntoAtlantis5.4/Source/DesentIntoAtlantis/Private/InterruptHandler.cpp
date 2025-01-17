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
	CombatInterrupt->SetCombatInterruptData(aCombatInterruptData);
	return CombatInterrupt;
}

void UInterruptHandler::SetInterruptData(FInterruptData aInterruptData)
{
	InterruptData = aInterruptData;
}

TArray<UCombatInterrupt*> UInterruptHandler::CheckHealthRelatedInterrupt()
{
	TArray<UCombatInterrupt*> CombatInterrupts;

	for (auto combatInterruptData : InterruptData.HealthPercentageTriggers)
	{
		if(combatInterruptData.isDisabled)
		{
			continue;
		}
		float healthpercentage = ownedCombatEntity->GetHealthPercentage();
		if(combatInterruptData.HealthThresholdData.LowPercent >= healthpercentage &&
			healthpercentage <= combatInterruptData.HealthThresholdData.TopPercent )
		{
			CombatInterrupts.Add(CreateInterrupt( combatInterruptData.interruptType,combatInterruptData));
			if(combatInterruptData.isConsumedOnUse)
			{
				combatInterruptData.isDisabled = true;			
			}
		}
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
