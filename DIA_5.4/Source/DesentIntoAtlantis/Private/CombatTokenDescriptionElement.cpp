// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatTokenDescriptionElement.h"

#include "CombatToken_Base_Data.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PersistentGameinstance.h"

void UCombatTokenDescriptionElement::SetCombatToken(UPassiveFactorySubsystem* aPassiveFactorySubsystem,FCombatTokenStackData aCombatToken)
{
	FCombatToken_Base_Data CombatToken_Base_Data =
		aPassiveFactorySubsystem->GetCombatTokenData(aCombatToken.combatTokenID);

	SetText(BW_CombatTokenName,CombatToken_Base_Data.passiveName);
	SetText(BW_CombatTokenDescription,CombatToken_Base_Data.passiveDescription);

	FString stackInfo = "Lasts "      +  FString::FromInt(aCombatToken.TurnLength)  +
		               " Turns with " +  FString::FromInt(aCombatToken.stackAmount) + " Stack";

	SetText(BW_CombatTokenStackInfo,stackInfo);
	
}
