// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "SoundManager.h"
#include "Components/Border.h"



void UTitleView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UTitleView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UTitleView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UTitleView::ActivateTitleMenuSelection  );
	
	titleBoardSelectionStartGame.AddDynamic(this, &UTitleView::StartGame);
	commandboardSelections.Add(ETitleStates::Start,titleBoardSelectionStartGame );
	
	titleBoardSelectionQuitGame.AddDynamic(this,  &UTitleView::ExitGame);
	commandboardSelections.Add(ETitleStates::Exit,titleBoardSelectionQuitGame );

	titleSelections.Add(BW_StartGame);
	titleSelections.Add(BW_Exit);
	
	for(int i = 0 ; i < titleSelections.Num();i++)
	{
		titleSelections[i]->SetBrushColor(unhightlighedColor);
	}

	SetCursorPositionInfo();
	titleSelections[0]->SetBrushColor(highlightedColor);
}

void UTitleView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = titleSelections.Num()-1;
}
void UTitleView::MoveUp()
{
	titleSelections[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveUp();
	titleSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UTitleView::MoveDown()
{
	titleSelections[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveDown();
	titleSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UTitleView::StartGame()
{
	InGameHUD->PopMostRecentActiveView();
	startGameDelegate.Broadcast();
}

void UTitleView::ExitGame()
{
	FPlatformMisc::RequestExit(false);
}

void UTitleView::ActivateTitleMenuSelection()
{
	const ETitleStates titleStateToActivate = static_cast<ETitleStates>(cursorPosition);
	commandboardSelections[titleStateToActivate].Broadcast();
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Accept);
}

void UTitleView::SetStartGameDelegate(FStartGameDelegate aStartGameDelegate)
{
	startGameDelegate = aStartGameDelegate;
}


