// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectionElement.h"

void UClassSelectionElement::SetClassSelectionElement(FCompleteClassData aCompleteClassData)
{

	classID = aCompleteClassData.classIdentifer;
	SetMainText("<TitleStyling>"+ aCompleteClassData.className +"</>");
	BW_ClassIcon->SetBrushFromTexture(aCompleteClassData.classIcon);
	//BW_ArchtypeText->SetText(FText::FromString()) 
	
}
