// Fill out your copyright notice in the Description page of Project Settings.


#include "MapButtonElement.h"

#include "Components/Image.h"


void UMapButtonElement::SetMapIcon(ECardinalNodeDirections aNodeDirection)
{
	CurrentNodeDirection = aNodeDirection;
	worldGenFloorNodeInfo.floorDirection = (int)CurrentNodeDirection;
	BW_MapIcon->SetBrushFromTexture(MapIcons[CurrentNodeDirection]);
}

void UMapButtonElement::InitializeMapButton(FWorldGenerationFloorNodeInfo aFloorNodeInfo)
{
	worldGenFloorNodeInfo = aFloorNodeInfo;
	SetMapIcon((ECardinalNodeDirections)worldGenFloorNodeInfo.floorDirection);
}

void UMapButtonElement::SetFloorEvent(FFloorEventData aFloorEventData,int afloorEventDataTableIndex)
{
	currentFloorEventData    = aFloorEventData;
	floorEventDataTableindex = afloorEventDataTableIndex;
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
