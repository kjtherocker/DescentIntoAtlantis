// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_UiElement.h"

void UCombatToken_UiElement::SetCombatTokenUiElement(UCombatToken_Base* aCombatToken, UTexture2D* aTokenImage)
{
	CombatTokenID = aCombatToken->GetCombatTokenData().CombatTokenID;
	aCombatToken->onCombatTokenChange.AddDynamic(this,&UCombatToken_UiElement::UpdateCombatToken);
	UpdateCombatToken(aCombatToken->GetCombatTokenStateInfo());

	//BW_TokenIcon->SetBrushFromTexture(aTokenImage);
}

void UCombatToken_UiElement::UpdateCombatToken(FCombatTokenStateInfo aStateInfo)
{
	FString stackNumber = FString::FromInt(aStateInfo.currentTokenStack);
	FString turnNumber  = FString::FromInt(aStateInfo.turnsRemaining);
	BW_CombatTokenStack->SetText(FText(FText::FromString(stackNumber)));
	BW_CombatTokenTurnsLeft->SetText(FText(FText::FromString(turnNumber)));
}
