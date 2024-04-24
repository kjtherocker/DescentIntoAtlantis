// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnCounterElement.h"

void UTurnCounterElement::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	turnIcons.Add(ECharactertype::Ally,  BW_TurnIconAlly);
	turnIcons.Add(ECharactertype::Enemy, BW_TurnIconEnemy);
}

void UTurnCounterElement::SwitchTurnIcons(ECharactertype aCharacterType)
{
	ECharactertype previousCharacterType = aCharacterType == ECharactertype::Ally ?
		ECharactertype::Enemy : ECharactertype::Ally;

	turnIcons[previousCharacterType]->SetOpacity(MIN_OPACITY);
	turnIcons[aCharacterType]->SetOpacity(MAX_OPACITY);
}

void UTurnCounterElement::EmpowerTurn(bool aIsEmpowered)
{
	BW_EmpoweredIcon->SetOpacity(aIsEmpowered ? MAX_OPACITY : NO_OPACITY);
}
