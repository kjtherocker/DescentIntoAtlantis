// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatToken_UiElement.h"

void UCombatToken_UiElement::SetCombatTokenUiElement(UCombatToken_Base* aCombatToken, UTexture2D* aTokenImage)
{
	if(aCombatToken == nullptr)
	{
		return;
	}
	
	if(CombatToken_Base != nullptr)
	{
		CombatToken_Base->onCombatTokenChange.RemoveDynamic(this,&UCombatToken_UiElement::UpdateCombatToken);
	}
	
	CombatToken_Base = aCombatToken;
	CombatTokenID = aCombatToken->GetCombatTokenData().CombatTokenID;
	aCombatToken->onCombatTokenChange.AddDynamic(this,&UCombatToken_UiElement::UpdateCombatToken);
	UpdateCombatToken(aCombatToken->GetCombatTokenStateInfo());
	UpdateTokenBackground(aCombatToken->GetCombatTokenType());

	//BW_TokenIcon->SetBrushFromTexture(aTokenImage);
}

void UCombatToken_UiElement::UpdateCombatToken(FCombatTokenCurrentStatInfo aStateInfo)
{
	FString stackNumber = FString::FromInt(aStateInfo.currentTokenStack);
	FString turnNumber  = FString::FromInt(aStateInfo.turnsRemaining);
	BW_CombatTokenStack->SetText(FText(FText::FromString(stackNumber)));
	BW_CombatTokenTurnsLeft->SetText(FText(FText::FromString(turnNumber)));
	UpdateTokenBackground(CombatToken_Base->GetCombatTokenType());
}

void UCombatToken_UiElement::UpdateTokenBackground(ECombatTokenType aCombatTokenType)
{
	ECombatTokenType tokenType = aCombatTokenType;
	BW_TokenBackground->SetBrushFromTexture(combatTokenTextures[tokenType]);
}

int UCombatToken_UiElement::GetCombatTokenSlotNumber()
{
	return CombatToken_Base->GetCombatTokenData().slotPosition;
}
