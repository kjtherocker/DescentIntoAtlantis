// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"

#include "SoundManager.h"
#include "DesentIntoAtlantis/FloorGameMode.h"

void UBaseUserWidget::UiInitialize(AFloorGameMode* aGameModeBase)
{
	gameModeBase = aGameModeBase;
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
