// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptData.h"
#include "SkillBase.h"
#include "AtlantisGameModeBase.h"
#include "PersistentGameinstance.h"

void UCombatInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance)
{
	persistantGameInstance = aPersistantGameInstance;
}

void UCombatInterrupt::InterruptionEnd()
{
	OnInterruptEnd.Broadcast();
}

void UCombatInterrupt::ActivateInterrupt()
{
}

void UDialogueInterrupt::ActivateInterrupt()
{
	if(CombatInterruptData.DialogueTriggers == EDialogueTriggers::None)
	{
		InterruptionEnd();
		return;
	}
	persistantGameInstance->dialogueManagerSubsystem->onDialogueEnd.AddDynamic(this,&UDialogueInterrupt::InterruptionEnd);
	persistantGameInstance->dialogueManagerSubsystem->StartDialogue
	(CombatInterruptData.DialogueTriggers,persistantGameInstance->currentGameMode->InGameHUD);
}

void USkillInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();

	persistantGameInstance->SkillResolveSubsystem->ResolveSkillAction(CombatInterruptData.SkillActionData);
	
}
