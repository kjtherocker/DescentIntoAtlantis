// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedEvasionElement.h"

#include "CombatLog_Full_Data.h"
#include "Components/RichTextBlock.h"

void UCombatLogDetailedEvasionElement::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	Super::SetElement(CombatLog_Full_Data, aHud);
	FCombatLog_Hit_Data CombatLog_Hit_Data = CombatLog_Full_Data.CombatLog_Hit_Data;
	FCombatLog_Evasion_Data EvasionData    = CombatLog_Hit_Data.CombatLogEvasionData;
	
	FString hitChance = FString::FromInt(EvasionData.totalEvasion) + "";
	BW_TotalEvasionText->SetText(FText(FText::FromString(hitChance)));
	
	CreateDetailedElement("Evasion", FString::FromInt(EvasionData.victimEvasion));
}
