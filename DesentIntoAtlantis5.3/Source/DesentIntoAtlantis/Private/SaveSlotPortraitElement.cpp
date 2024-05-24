// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotPortraitElement.h"

#include "Components/Image.h"

void USaveSlotPortraitElement::SetPortrait(UTexture2D* aPortrait)
{
	BW_CharacterPortrait->SetBrushFromTexture(aPortrait);
}

