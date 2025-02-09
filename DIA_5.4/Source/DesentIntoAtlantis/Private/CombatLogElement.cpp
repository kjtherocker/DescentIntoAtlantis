// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogElement.h"

#include "CombatEntity.h"
#include "CombatLog_Full_Data.h"
#include "ESkillID.h"
#include "Components/RichTextBlock.h"

void UCombatLogElement::SetCommandLogHit(FCombatLog_Full_Data CombatLog_Base_Data)
{
	combatlogConfiguration = ECombatLogConfiguration::HitEvasion;
	FullCombatLog = CombatLog_Base_Data;

	if(!FullCombatLog.CombatLog_Hit_Data.wasHitInitializedOnSkill)
	{
		return;
	}
	
	if(CombatLog_Base_Data.Attacker == nullptr ||
		CombatLog_Base_Data.Victim == nullptr ||
		CombatLog_Base_Data.skillUsed.skillID == ESkillIDS::Uninitialized)
	{
		return;
	}

	
	FString result = CombatLog_Base_Data.CombatLog_Hit_Data.HitResult ? " <Hit>Hit</> " : "<Miss>Miss</> ";
	
	FString hit = CombatLog_Base_Data.Attacker->GetEntityName()+" " + result + CombatLog_Base_Data.Victim->GetEntityName() + " with " +  CombatLog_Base_Data.skillUsed.skillName;
	logText = hit;
	BW_MainText->SetText(FText(FText::FromString(hit)));

}

void UCombatLogElement::SetCommandLogAttackDefence(FCombatLog_Full_Data CombatLog_Base_Data)
{
	FullCombatLog = CombatLog_Base_Data;
	combatlogConfiguration = ECombatLogConfiguration::AttackDefense;

	if(CombatLog_Base_Data.Attacker == nullptr ||
		CombatLog_Base_Data.Victim == nullptr ||
		CombatLog_Base_Data.skillUsed.skillID == ESkillIDS::Uninitialized)
	{
		return;
	}
	
	FString result = " dealt  <Miss> " + FString::FromInt(CombatLog_Base_Data.CombatLog_AttackDefense_Data.FinalDamageResult)+" </> ";
	
	FString hit = CombatLog_Base_Data.Attacker->GetEntityName() + result + " Damage with " +
		CombatLog_Base_Data.skillUsed.skillName + " to " + CombatLog_Base_Data.Victim->GetEntityName() ;
	logText = hit;
	BW_MainText->SetText(FText(FText::FromString(hit)));
}

void UCombatLogElement::SetCommandLogFull(FCombatLog_Full_Data CombatLog_Base_Data)
{
	combatlogConfiguration = ECombatLogConfiguration::Full;
	FullCombatLog = CombatLog_Base_Data;
}
