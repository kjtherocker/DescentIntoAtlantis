// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleView.h"

#include "PersistentGameinstance.h"
#include "SaveManagerSubsystem.h"
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

	CreateAndBindDelegateOption(ETitleStates::Start,&UTitleView::StartGame      ,TEXT("StartGame"));
	CreateAndBindDelegateOption(ETitleStates::Load,&UTitleView::LoadGame        ,TEXT("LoadGame"));
	CreateAndBindDelegateOption(ETitleStates::Settings,&UTitleView::OpenSettings,TEXT("OpenSettings"));
	CreateAndBindDelegateOption(ETitleStates::Exit, &UTitleView::ExitGame       ,TEXT("ExitGame"));
	

	//Order In which they will go
	titleSelections.Add(BW_StartGame);
	titleSelections.Add(BW_LoadGame);
	titleSelections.Add(BW_Setting);
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

void UTitleView::LoadGame()
{
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>(GetGameInstance());
	
	if (persistentGameInstance)
	{
		persistentGameInstance->saveManagerSubsystem->LoadSaveDataAndTransitionToMap();
	}
}

void UTitleView::OpenSettings()
{
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

void UTitleView::CreateAndBindDelegateOption(ETitleStates aTitleState,typename TMemFunPtrType<false, UTitleView, void()>::Type InFunc, const FName& FuncName)
{
	FViewSelection newViewSelection;
	newViewSelection.__Internal_AddDynamic(this,InFunc,FuncName);
	commandboardSelections.Add(aTitleState,newViewSelection );
}

void UTitleView::SetStartGameDelegate(FStartGameDelegate aStartGameDelegate)
{
	startGameDelegate = aStartGameDelegate;
}


