// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedDefenceElement.h"

#include "CombatLog_Full_Data.h"
#include "CombatLog_PassiveSkilData.h"
#include "FCombatLog_Damage_Data.h"
#include "CombatLog_Defense_Data.h"
#include "CombatLog_Evasion_Data.h"
#include "CombatLog_Hit_Data.h"
#include "Components/RichTextBlock.h"

void UCombatLogDetailedDefenceElement::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	Super::SetElement(CombatLog_Full_Data, aHud);
	
	FCombatLog_Defense_Data CombatLog_Defence_Data = CombatLog_Full_Data.CombatLog_AttackDefense_Data.DefenceData;
	
	FString totalDamage = FString::FromInt(CombatLog_Defence_Data.FinalDamageResistance);
	BW_TotalDefence->SetText(FText(FText::FromString(totalDamage)));

	FString DamageResistance = FString::FromInt(CombatLog_Defence_Data.DefaultDamageResistance)+"%";
	CreateDetailedElement("Damage Resist", DamageResistance);
	CreateDetailedElement("Mitigation Max",  FString::FromInt(CombatLog_Defence_Data.DamageMitigationLimit));
	for (FCombatLog_PassiveSkilData& passiveSkillData : CombatLog_Defence_Data.passivesActivated)
	{
		CreateDetailedElement(passiveSkillData.PassiveSkillData.passiveName, FString::FromInt(passiveSkillData.passiveResult));
	}
}
