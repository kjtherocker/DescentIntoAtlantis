// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedDamageElement.h"

#include "CombatLog_Full_Data.h"
#include "Components/RichTextBlock.h"

void UCombatLogDetailedDamageElement::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	Super::SetElement(CombatLog_Full_Data, aHud);

	FCombatLog_Damage_Data CombatLog_Damage_Data = CombatLog_Full_Data.CombatLog_AttackDefense_Data.DamageData;
	
	FString totalDamage = FString::FromInt(CombatLog_Damage_Data.FinalDamage) + "";
	BW_TotalDamage->SetText(FText(FText::FromString(totalDamage)));
	
	CreateDetailedElement("Skill Damage", FString::FromInt(CombatLog_Damage_Data.SkillDamage));
	CreateDetailedElement("Elemental Damage", FString::FromInt(CombatLog_Damage_Data.DamageElementalConversion));
	CreateDetailedElement("Stats", FString::FromInt(CombatLog_Damage_Data.StatsAddedToDamage));

}

