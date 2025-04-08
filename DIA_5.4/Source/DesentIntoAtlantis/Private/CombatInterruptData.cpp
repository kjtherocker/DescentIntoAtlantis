// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterruptData.h"
#include "SkillBase.h"
#include "AtlantisGameModeBase.h"
#include "CombatGameModeBase.h"
#include "CombatSelectionView.h"
#include "EnemySkillView.h"
#include "PersistentGameinstance.h"

void UCombatInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance,ACombatGameModeBase* aCombatGameModeBase)
{
	persistantGameInstance = aPersistantGameInstance;
	CombatGameModeBase     = aCombatGameModeBase;
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

void UActivatedTimerInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	
	FTimerHandle handle;
	CombatGameModeBase->world->GetTimerManager().SetTimer(handle,this,&UCombatInterrupt::InterruptionEnd,interruptTimer,false);
}

void USkillInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance,
	ACombatGameModeBase* aCombatGameModeBase)
{
	Super::SetInterrupt(aPersistantGameInstance, aCombatGameModeBase);
	interruptTimer = UGameSettings::SKILL_INTERRUPT_TIMER;
}

void USkillInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();

	CombatGameModeBase->InGameHUD->PopMostRecentActiveView();

	if(CombatInterruptData.SkillActionData.Attacker->characterType == ECharactertype::Enemy)
	{
		UEnemySkillView* EnemySkillVIew = (UEnemySkillView*)CombatGameModeBase->InGameHUD->PushAndGetView(EViews::EnemySkill,  EUiType::ActiveUi);
		EnemySkillVIew->SetSkill(CombatInterruptData.SkillActionData.SkillBase->skillData,CombatInterruptData.SkillActionData.Attacker);
	}
	else
	{
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)CombatGameModeBase->InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode(CombatGameModeBase);
		SelectionView->SetSkill(CombatInterruptData.SkillActionData.SkillBase);
		SelectionView->DisableInput();		
	}
	

	
	persistantGameInstance->SkillResolveSubsystem->ResolveSkillAction(CombatInterruptData.SkillActionData);
	
}
