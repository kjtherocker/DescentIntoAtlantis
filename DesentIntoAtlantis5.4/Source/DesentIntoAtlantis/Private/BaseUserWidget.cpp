// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"

#include "BaseHighlightElement.h"
#include "PersistentGameinstance.h"
#include "SoundManager.h"
#include "DesentIntoAtlantis/FloorGameMode.h"

void UBaseUserWidget::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	gameModeBase = aGameModeBase;
	persistentGameinstance = Cast<UPersistentGameinstance>( GetGameInstance());
}

void UBaseUserWidget::SetViewInfo(EViews aView, EUiType aUiType)
{
	view   = aView;
	UiType = aUiType;
}

void UBaseUserWidget::SetCursorPositionInfo()
{
}

void UBaseUserWidget::MoveUp()
{
	cursorPosition--;
	if(minCursorPosition > cursorPosition)
	{
		cursorPosition = maxCursorPosition;
	}
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Selection);
}

void UBaseUserWidget::MoveDown()
{
	cursorPosition++;
	if(cursorPosition > maxCursorPosition)
	{
		cursorPosition = minCursorPosition;
	}
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Selection);
}

void UBaseUserWidget::ReturnToPreviousScreen()
{
	InGameHUD->ReturnToPreviousActiveView();
}

void UBaseUserWidget::PopMostActiveView()
{
	InGameHUD->PopMostRecentActiveView();
}

FString UBaseUserWidget::WrapTextInStyle(FString aText, ETextStyle aTextStyle)
{
	FString start;
	FString end = "</>";
	
	switch (aTextStyle)
	{
	case ETextStyle::None:
		break;
	case ETextStyle::TitleStyling:
		start = "<TitleStyling>";
		
		break;
	case ETextStyle::ClassHighlight:
		start = "<Classhighlight>";
		break;
	}

	FString finalString = start + aText + end;

	return finalString;
}

void UBaseUserWidget::SetText(URichTextBlock* aTextBlock, FString aText)
{
	aTextBlock->SetText(FText::FromString(aText));
}

