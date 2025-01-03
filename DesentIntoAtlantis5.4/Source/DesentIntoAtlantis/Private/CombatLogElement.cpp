// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogElement.h"

#include "CombatEntity.h"
#include "CombatLog_Full_Data.h"
#include "Components/RichTextBlock.h"

void UCombatLogElement::SetCommandLogHit(FCombatLog_Full_Data CombatLog_Base_Data)
{
	FullCombatLog = CombatLog_Base_Data;

	if(CombatLog_Base_Data.Attacker == nullptr ||
		CombatLog_Base_Data.Victim == nullptr)
	{
		return;
	}

	
	FString result = CombatLog_Base_Data.CombatLog_Hit_Data.HitResult ? " <Hit>Hit</> " : "<Miss>Miss</> ";
	
	FString hit = CombatLog_Base_Data.Attacker->GetEntityName() + result + CombatLog_Base_Data.Victim->GetEntityName() + " with " +  CombatLog_Base_Data.skillUsed.skillName;
	BW_CombatLogText->SetText(FText(FText::FromString(hit)));

}

void UCombatLogElement::SetCommandLogAttackDefence(FCombatLog_Full_Data CombatLog_Base_Data)
{
	FullCombatLog = CombatLog_Base_Data;
}

void UCombatLogElement::SetCommandLogFull(FCombatLog_Full_Data CombatLog_Base_Data)
{
	FullCombatLog = CombatLog_Base_Data;
}
