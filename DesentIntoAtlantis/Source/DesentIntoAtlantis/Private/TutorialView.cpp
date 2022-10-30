// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialView.h"

void UTutorialView::SetupTutorialView(FTutorialData aTutorialData)
{
	BW_CharacterName->SetText(FText(FText::FromString(aTutorialData.characterName)));
	BW_ClassTitle->SetText(FText(FText::FromString(aTutorialData.classTitle)));
	BW_ClassDescription->SetText(FText(FText::FromString(aTutorialData.classDescription)));
	BW_Portait->SetBrushFromTexture(aTutorialData.characterPortrait);
}
