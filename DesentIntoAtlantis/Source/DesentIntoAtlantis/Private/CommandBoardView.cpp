// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandBoardView.h"

#include "CombatEntity.h"
#include "CombatManager.h"
#include "CombatSelectionView.h"
#include "EngineUtils.h"
#include "GameManager.h"
#include "SoundManager.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"

void UCommandBoardView::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCommandBoardView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCommandBoardView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCommandBoardView::ActivateCommandboardFunction  );
	
	combatManager =  gameModeBase->combatManager;
	currentActivePartyMember = combatManager->GetCurrentActivePartyMember();
	defaultAttack = static_cast<USkillAttack*>(gameModeBase->skillFactory->GetSkill("DefaultAttack"));
	BW_FullBodyPortrait->SetBrushFromTexture(currentActivePartyMember->playerEntityData.fullBodyCharacterPortrait);
	
	commandBoards.Add(BW_Attack);
	commandBoards.Add(BW_Skill);
	commandBoards.Add(BW_Escape);
	commandBoards.Add(BW_Pass);

	for(int i = 0 ; i < commandBoards.Num();i++)
	{
		commandBoards[i]->SetBrushColor(unhightlighedColor);
	}

	commandBoardSelectionAttack.AddDynamic(this, &UCommandBoardView::Attack);
	commandboardSelections.Add(ECommandBoardStates::Attack,commandBoardSelectionAttack );
	
	commandBoardSelectionSkill.AddDynamic(this,  &UCommandBoardView::Skill);
	commandboardSelections.Add(ECommandBoardStates::Skill,commandBoardSelectionSkill );
	
	commandBoardSelectionEscape.AddDynamic(this, &UCommandBoardView::Escape);
	commandboardSelections.Add(ECommandBoardStates::Escape,commandBoardSelectionEscape );
	
	commandBoardSelectionPass.AddDynamic(this,   &UCommandBoardView::Pass);
	commandboardSelections.Add(ECommandBoardStates::Pass,commandBoardSelectionPass );

	
	commandBoards[0]->SetBrushColor(highlightedColor);
	
		
	//	CommandBoardFunctions.Add();
	SetCursorPositionInfo();
}

void UCommandBoardView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();

	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = commandBoards.Num()-1;
}

void UCommandBoardView::MoveUp()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveUp();
	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
}

void UCommandBoardView::MoveDown()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveDown();
	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
}

void UCommandBoardView::ActivateCommandboardFunction()
{
	const ECommandBoardStates commandBoardCommandToActivate = static_cast<ECommandBoardStates>(cursorPosition);
	commandboardSelections[commandBoardCommandToActivate].Broadcast();
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Accept);
}

void UCommandBoardView::Attack()
{
	InGameHUD->PopMostRecentActiveView();
	UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,EUiType::ActiveUi);
	SelectionView->SetSkill(defaultAttack);
}

void UCommandBoardView::Skill()
{
	InGameHUD->PopMostRecentActiveView();
	InGameHUD->PushView(EViews::Skill,EUiType::ActiveUi);
}
void UCommandBoardView::Escape()
{
	InGameHUD->PopMostRecentActiveView();
	gameModeBase->gameManager->ResetPlayerToPreviousPosition();
}

void UCommandBoardView::Pass()
{
	TArray<PressTurnReactions> pressTurnReaction;
	pressTurnReaction.Add(PressTurnReactions::Pass);
	combatManager->pressTurnManager->ProcessTurn(pressTurnReaction);
}
