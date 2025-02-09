// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedHitElement.h"

#include "CombatLogDetailedElement.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Hit_Data.h"
#include "FCombatLog_Damage_Data.h"
#include "CombatLog_Defense_Data.h"
#include "CombatLog_Evasion_Data.h"
#include "CombatLog_Hit_Data.h"
#include "CombatLog_PassiveSkilData.h"
#include "Components/RichTextBlock.h"
#include "Components/VerticalBox.h"

void UCombatLogDetailedHitElement::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	Super::SetElement(CombatLog_Full_Data, aHud);
	FCombatLog_Hit_Data CombatLog_Hit_Data = CombatLog_Full_Data.CombatLog_Hit_Data;
	
	if(!CombatLog_Hit_Data.wasHitInitializedOnSkill)
	{
		return;
	}
		
	
	FString hitChance = FString::FromInt(CombatLog_Hit_Data.hitChance) + "%";

	FString TotalNumber = FString::FromInt(CombatLog_Hit_Data.FinalNumber);
	FString result = CombatLog_Full_Data.CombatLog_Hit_Data.HitResult ? " <Hit>"+TotalNumber+"</>" : "<Miss>"+TotalNumber+"</>";
	
	BW_HitChanceText->SetText(FText(FText::FromString(hitChance)));
	SetText(BW_TotalHit,result);
	CreateDetailedElement("Attacker Hit", FString::FromInt(CombatLog_Hit_Data.AttackerHit));
	CreateDetailedElement("Skill Hit", FString::FromInt(CombatLog_Hit_Data.skillHit));
	CreateDetailedElement("RNG", FString::FromInt(CombatLog_Hit_Data.RandomNumber));

	
	for (FCombatLog_PassiveSkilData& passiveData : CombatLog_Hit_Data.passivesActivated)
	{
		CreateDetailedElement(passiveData.PassiveSkillData.passiveName, FString::FromInt(passiveData.passiveResult));
	}
}

