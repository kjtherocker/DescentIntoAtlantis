// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillResolveSubsystem.h"

#include "ChallengeSubsystem.h"
#include "CombatEntity.h"
#include "CombatGameModeBase.h"
#include "CombatLog_Full_Data.h"
#include "SkillBase.h"
#include "SkillData.h"


enum class EPressTurnReactions : uint8;

void USkillResolveSubsystem::SetGameModeBase(ACombatGameModeBase* aCombatGameModeBase)
{
	combatGameModeBase = aCombatGameModeBase;
}

void USkillResolveSubsystem::ActivateSkill(UCombatEntity* aAttacker, USkillBase* aSkill,int aCursor)
{
	ActivateSkill(aAttacker,aSkill->GetSkillCombatEntity(combatGameModeBase,aCursor,aAttacker), aSkill);
}

void USkillResolveSubsystem::ActivateSkill(UCombatEntity* aAttacker,TArray<UCombatEntity*> aVictim, USkillBase* aSkill)
{
	TArray<EPressTurnReactions> turnReactions;
	FSkillsData skillsData = aSkill->skillData;

	mostRecentCombatLogs.Empty();
	
	
	FCombatLog_Full_Data  CombatLog_Full_Data = aSkill->ExecuteSkill(aAttacker, aVictim, aSkill);
	mostRecentCombatLogs.Add(CombatLog_Full_Data);
	
	
	turnReactions.Add(EPressTurnReactions::Normal);
	DamageEvent MyEvent(100,EPressTurnReactions::Normal,aSkill);

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
