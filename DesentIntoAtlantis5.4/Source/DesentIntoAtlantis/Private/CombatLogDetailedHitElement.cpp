// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedHitElement.h"

#include "CombatLogDetailedElement.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Hit_Data.h"
#include "Components/RichTextBlock.h"
#include "Components/VerticalBox.h"

void UCombatLogDetailedHitElement::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	Super::SetElement(CombatLog_Full_Data, aHud);
	
	FCombatLog_Hit_Data CombatLog_Hit_Data = CombatLog_Full_Data.CombatLog_Hit_Data;
	
	FString hitChance = FString::FromInt(CombatLog_Hit_Data.hitChance) + "%";
	BW_HitChanceText->SetText(FText(FText::FromString(hitChance)));
	
	CreateDetailedElement("Final Result", FString::FromInt(CombatLog_Hit_Data.FinalNumber));
	CreateDetailedElement("Attacker Hit", FString::FromInt(CombatLog_Hit_Data.AttackerHit));
	CreateDetailedElement("Skill Hit", FString::FromInt(CombatLog_Hit_Data.skillHit));
	CreateDetailedElement("RNG", FString::FromInt(CombatLog_Hit_Data.RandomNumber));
}

