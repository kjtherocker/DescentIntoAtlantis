// Fill out your copyright notice in the Description page of Project Settings.


#include "MapPlayerIconElement.h"

#include "Components/Image.h"

void UMapPlayerIconElement::SetPlayedIconBasedOnDirection(ECardinalNodeDirections aDirection)
{
	BW_PlayerIcon->SetBrushFromTexture(playerIcons[aDirection]);
}
