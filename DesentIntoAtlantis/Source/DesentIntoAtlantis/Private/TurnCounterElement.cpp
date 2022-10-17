// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnCounterElement.h"

void UTurnCounterElement::UiInitialize()
{
	Super::UiInitialize();

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
