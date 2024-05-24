// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidgetMovingButtons.h"

#include "Components/Border.h"


void UBaseUserWidgetMovingButtons::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
}

void UBaseUserWidgetMovingButtons::MoveUp()
{
	menuSelections[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveUp();
	menuSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UBaseUserWidgetMovingButtons::MoveDown()
{
	menuSelections[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveDown();
	menuSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UBaseUserWidgetMovingButtons::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = menuSelections.Num()-1;
}

void UBaseUserWidgetMovingButtons::SetDefaultMenuState()
{
	for(int i = 0 ; i < menuSelections.Num();i++)
	{
		menuSelections[i]->SetBrushColor(unhightlighedColor);
	}

	SetCursorPositionInfo();
	menuSelections[0]->SetBrushColor(highlightedColor);
}

void UBaseUserWidgetMovingButtons::ActivateMenuSelection()
{
	MenuSelectionDelegates[cursorPosition].Broadcast();
}

