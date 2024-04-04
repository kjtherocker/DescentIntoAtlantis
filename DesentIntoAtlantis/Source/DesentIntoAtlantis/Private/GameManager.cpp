// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

#include "SoundManager.h"
#include "TitleView.h"
#include "Kismet/GameplayStatics.h"

void UGameManager::Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	gameModeBase = aGameModeBase;
	//gameModeBase->world->OnWorldBeginPlay.AddUObject(this, &UGameManager::SetUpTitleMenu);
}

void UGameManager::SetUpTitleMenu()
{
	UTitleView* titleView  = (UTitleView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Title,EUiType::ActiveUi);
	startGameDelegate.AddDynamic(this,&UGameManager::StartGame);
	titleView->SetStartGameDelegate(startGameDelegate);
	
	gameModeBase->floorPawn->SetFloorPawnInput(false);
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldMusic,EAudio::MainMenu);
}


void UGameManager::StartGame()
{
	

	
	gameModeBase->floorManager->CreateFloor(EFloorIdentifier::Floor2);

	if(UGameSettings::DISABLE_CUTSCENES)
	{
		UDialogueView* DialogueView  = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
		DialogueView->SetDialogueData(EDialogueTriggers::StartGame);
	}
	gameModeBase->partyManager->AddPlayerToActiveParty(EDataTableClasses::Paladin);
	if(UGameSettings::DEBUG_MODE)
	{
		gameModeBase->partyManager->AddPlayerToActiveParty(EDataTableClasses::Dancer);
		gameModeBase->partyManager->AddPlayerToActiveParty(EDataTableClasses::SoulEater);
		gameModeBase->partyManager->AddPlayerToActiveParty(EDataTableClasses::DarkKnight);
	}

	gameModeBase->LoadLevel(TEXT("Floor1"));
}

void UGameManager::ResetPlayerToPreviousPosition()
{
	gameModeBase->floorManager->MovePlayerToPreviousNode();
	gameModeBase->combatManager->EndCombat(false);
}


