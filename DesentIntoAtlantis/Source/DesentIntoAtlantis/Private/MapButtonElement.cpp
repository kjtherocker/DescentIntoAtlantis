// Fill out your copyright notice in the Description page of Project Settings.


#include "MapButtonElement.h"

#include "Components/Image.h"


void UMapButtonElement::SetMapIcon(ECardinalNodeDirections aCardinalNodeDirection)
{
	CurrentNodeDirection = aCardinalNodeDirection;
	BW_MapIcon->SetBrushFromTexture(MapIcons[aCardinalNodeDirection]);
}

void UMapButtonElement::SetEventIcon(bool aIsActive)
{
	BW_EventIcon->SetOpacity(aIsActive ? 100:0);
}

void UMapButtonElement::ActivateMapNodeEditor()
{
	OnMapButtonClicked.Broadcast(this);
}

void UMapButtonElement::InitializeMapButton()
{
	BW_GenerateButton->OnClicked.AddDynamic(this, &UMapButtonElement::ActivateMapNodeEditor);
}
