// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueView.h"

#include "DialogueFactorySubsystem.h"
#include "FloorEventManager.h"
#include "SoundManager.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void UDialogueView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UDialogueView::ActivateNextDialogue);
	InputComponent->BindAction("Tab"  ,IE_Pressed ,this, &UDialogueView::DialogueFinished);
	
}

void UDialogueView::SetFloorEventDialogueData(EDialogueTriggers aDialogueData, EFloorEventStates aTriggerOnEnd, FTriggerNextEventStage aTriggerNextEventStage)
{
	dialogueData = gameModeBase->dialogueFactory->GetDialogueDataByTrigger(aDialogueData);
	triggerOnEnd = aTriggerOnEnd;
	triggerNextEventStage = aTriggerNextEventStage;
	SetNextDialogue(false);
}

void UDialogueView::SetDialogueData(EDialogueTriggers aDialogueData)
{
	reactivatePawnInputOnEnd = true;
	dialogueData = gameModeBase->dialogueFactory->GetDialogueDataByTrigger(aDialogueData);
	SetNextDialogue(false);
}


void UDialogueView::ActivateNextDialogue()
{
	SetNextDialogue(true);
}

void UDialogueView::SetNextDialogue(bool audio)
{
	if(dialogueData.Num() == 0)
	{
		DialogueFinished();
		return;
	}
	
	FDialogueData nextDialogueData = dialogueData[0];
	dialogueData.RemoveAt(0);

	BW_Name->SetText(FText(FText::FromString(nextDialogueData.SpeakerName)));
	BW_DialogueText->SetText(FText(FText::FromString(nextDialogueData.Dialogue)));
	
	SetDialogueImages(nextDialogueData.LeftPortrait, BW_LeftCharacterPortrait);
	SetDialogueImages(nextDialogueData.CenterPortrait,BW_CenterCharacterPortrait);
	SetDialogueImages(nextDialogueData.RightPortrait,BW_RightCharacterPortrait);
	SetDialogueImages(nextDialogueData.BackgroundCG, BW_BackgroundCG);
	
	if(audio)
	{
		gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Accept);
	}

	if(nextDialogueData.musicToPlay != EAudio::None)
	{
		gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldMusic,nextDialogueData.musicToPlay );
	}
}

void UDialogueView::SetDialogueImages(UTexture2D* aPortraitTexture, UImage* aPortraitImage)
{
	float portraitOpacity = aPortraitTexture == nullptr ? NO_OPACITY:MAX_OPACITY;
	aPortraitImage->SetOpacity(portraitOpacity);
	if( aPortraitTexture != nullptr)
	{
		aPortraitImage->SetBrushFromTexture(aPortraitTexture);
	}
}

void UDialogueView::DialogueFinished()
{
	InGameHUD->PopMostRecentActiveView();
	if(reactivatePawnInputOnEnd)
	{
		gameModeBase->floorPawn->SetFloorPawnInput(true);
	}
	
	if(triggerOnEnd != EFloorEventStates::None)
	{
		triggerNextEventStage.Broadcast(triggerOnEnd);
	}
}

