// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogView.h"

#include "CombatEntity.h"

void UCombatLogView::CreateCombatLog(FCombatLog_Base_Data CombatLog_Base_Data)
{

	FString result = CombatLog_Base_Data.CombatLog_Hit_Data.HitResult ? " <Emphasis>Hit</> " : "<Emphasis>Miss</> ";
	
	FString hit = CombatLog_Base_Data.Attacker->GetEntityName() + result + CombatLog_Base_Data.Victim->GetEntityName() + " with " +  CombatLog_Base_Data.skillUsed.skillName;
	//+ FString::FromInt(CombatLog_Base_Data.CombatLog_Hit_Data.HitResult) 
	//+ " Evasion " + FString::FromInt(CombatLog_Base_Data.CombatLog_Hit_Data.victimEvasion) 
	//+ " Hit " + FString::FromInt(CombatLog_Base_Data.CombatLog_Hit_Data.HitEvasionCalculation)
	//+ " RNG " + FString::FromInt(CombatLog_Base_Data.CombatLog_Hit_Data.RandomNumber) 
	//+ " Calculated";


	
	BW_CombatLogText->SetText(FText(FText::FromString(hit)));

}
