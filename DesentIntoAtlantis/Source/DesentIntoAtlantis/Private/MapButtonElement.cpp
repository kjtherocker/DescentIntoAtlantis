// Fill out your copyright notice in the Description page of Project Settings.


#include "MapButtonElement.h"

#include "Components/Image.h"


void UMapButtonElement::SetMapIcon(ECardinalNodeDirections aFloorIdentifier)
{
	BW_MapIcon->SetBrushFromTexture(MapIcons[aFloorIdentifier]);
}
