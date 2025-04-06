// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillResolveSubsystem.h"

#include "ChallengeSubsystem.h"
#include "CombatEntity.h"
#include "CombatGameModeBase.h"
#include "CombatInterruptManager.h"
#include "CombatLog_Full_Data.h"
#include "SkillBase.h"
#include "SkillData.h"


enum class EPressTurnReactions : uint8;

void USkillResolveSubsystem::InitializePersistantGameInstance(UPersistentGameinstance* aPersistentGameinstance)
{
	PersistentGameinstance = aPersistentGameinstance;
}

void USkillResolveSubsystem::SetGameModeBase(ACombatGameModeBase* aCombatGameModeBase,UCombatInterruptManager* aCombatInterruptManager)
{
	mostRecentCombatLogs.Empty();
	last50CombatLogs.Empty();
	
	combatGameModeBase     = aCombatGameModeBase;
	combatInterruptmanager = aCombatInterruptManager;
}

void USkillResolveSubsystem::InitiateSkillAction(UCombatEntity* aAttacker, USkillBase* aSkill,
	TArray<UCombatEntity*> aVictims)
{
	FSkillActionData SkillActionData;
	
	SkillActionData.Attacker  = aAttacker;
	SkillActionData.Victims   = aVictims;
	SkillActionData.SkillBase = aSkill;

	CreateSkillInterrupt(SkillActionData);
}

void USkillResolveSubsystem::InitiateSkillAction(UCombatEntity* aAttacker, USkillBase* aSkill,int aCursor)
{
	FSkillActionData SkillActionData;
	
	SkillActionData.Attacker  = aAttacker;
	SkillActionData.Victims   = aSkill->GetSkillCombatEntity(combatGameModeBase,aCursor,aAttacker);
	SkillActionData.SkillBase = aSkill;
	
	CreateSkillInterrupt(SkillActionData);
}

void USkillResolveSubsystem::CreateSkillInterrupt(FSkillActionData aSkillActionData)
{
	FCombatInterruptData CombatInterruptData;
	CombatInterruptData.SkillActionData = aSkillActionData;
	CombatInterruptData.executeInterruptImmediately = true;
	CombatInterruptData.interruptType = EInterruptType::Skill;
	
	for (auto combatEntity : aSkillActionData.Victims)
	{
		combatEntity->combatEntityHub->SendGenericTrigger(aSkillActionData.Attacker,EGenericTrigger::OnTargetedByAttack);
	}

	FTriggeredInterruptData triggered;

	triggered.Entity = aSkillActionData.Attacker;
	triggered.Name   = aSkillActionData.Attacker->GetEntityName();
	
	UCombatInterrupt* CombatInterrupt =
		combatInterruptmanager->CreateInterrupt(triggered,EInterruptType::Skill,CombatInterruptData);
	
	aSkillActionData.Attacker->combatEntityHub->InterruptHandler->AddCombatInterrupt(CombatInterrupt);
	combatGameModeBase->TurnEnd();
}

void USkillResolveSubsystem::ResolveSkillAction(FSkillActionData aSkillResolve)
{
	TArray<EPressTurnReactions> turnReactions;

	USkillBase* SkillBase         = aSkillResolve.SkillBase;
	FSkillsData skillsData        = SkillBase->skillData;
	UCombatEntity* attacker       =  aSkillResolve.Attacker;
	TArray<UCombatEntity*> Victim =  aSkillResolve.Victims;

	mostRecentCombatLogs.Empty();
	
	FCombatLog_Full_Data  CombatLog_Full_Data = SkillBase->ExecuteSkill(attacker, Victim, SkillBase);
	mostRecentCombatLogs.Add(CombatLog_Full_Data);
	
	turnReactions.Add(EPressTurnReactions::Normal);
	DamageEvent MyEvent(100,EPressTurnReactions::Normal,SkillBase);

	AddCombatLog(mostRecentCombatLogs);
	
	combatGameModeBase->pressTurnManager->ProcessTurn(turnReactions);
}

void USkillResolveSubsystem::AddCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas)
{
	int numberOfNewCombatLogs = CombatLog_Base_Datas.Num();
	
	if(last50CombatLogs.Num() + numberOfNewCombatLogs > 50)
	{
		int amountOfLogsToRemove = numberOfNewCombatLogs - last50CombatLogs.Num(); 
	
		for(int i = 0 ; i < amountOfLogsToRemove; i++)
		{
			last50CombatLogs.RemoveAt(0);	
		}
	}
	
	for (auto fullCombatLogData : CombatLog_Base_Datas)
	{
		last50CombatLogs.Add(fullCombatLogData);
	}

	combatGameModeBase->CreateCombatLog(CombatLog_Base_Datas);
	
}
