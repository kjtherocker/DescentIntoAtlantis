// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialView.h"

void UTutorialView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UTutorialView::ContinueToNextEventStage);
}

void UTutorialView::SetupTutorialView(FTutorialData aTutorialData)
{
	BW_CharacterName->SetText(FText(FText::FromString(aTutorialData.characterName)));
	BW_ClassTitle->SetText(FText(FText::FromString(aTutorialData.classTitle)));
	BW_ClassDescription->SetText(FText(FText::FromString(aTutorialData.classDescription)));
	BW_Portait->SetBrushFromTexture(aTutorialData.characterPortrait);

	BW_BulletPoint1->SetText(FText(FText::FromString(aTutorialData.bulletPoint1)));
	BW_BulletPoint2->SetText(FText(FText::FromString(aTutorialData.bulletPoint2)));
	BW_BulletPoint3->SetText(FText(FText::FromString(aTutorialData.bulletPoint3)));
}


void UTutorialView::ContinueToNextEventStage()
{
	InGameHUD->PopMostRecentActiveView();
	nextEventStage.Broadcast();
}
