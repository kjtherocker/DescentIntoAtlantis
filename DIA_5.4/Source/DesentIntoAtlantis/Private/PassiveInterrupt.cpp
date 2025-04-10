// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveInterrupt.h"

#include "CombatGameModeBase.h"
#include "EnemySkillView.h"

class UEnemySkillView;

void UPassiveInterrupt::ActivateInterrupt()
{
	Super::ActivateInterrupt();
	CombatGameModeBase->InGameHUD->PopMostRecentActiveView();
	
	UEnemySkillView* enemySkillView = (UEnemySkillView*)CombatGameModeBase->InGameHUD->PushAndGetView(EViews::EnemySkill,      EUiType::ActiveUi);

	UPassiveSkills* PassiveSkills = CombatInterruptData.PassiveActionData.PassiveSkill;

	UCombatEntity* CombatEntity = CombatInterruptData.PassiveActionData.PassiveOwner;
	
	
	enemySkillView->SetPassiveSkill(PassiveSkills->passiveSkillData,CombatEntity->GetEntityName());
	
}

void UPassiveInterrupt::SetInterrupt(UPersistentGameinstance* aPersistantGameInstance,
	ACombatGameModeBase* aCombatGameModeBase)
{
	Super::SetInterrupt(aPersistantGameInstance, aCombatGameModeBase);
	interruptTimerMax = UGameSettings::PASSIVE_INTERRUPT_TIMER;
}
