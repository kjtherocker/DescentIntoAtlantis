// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandBoard.h"

#include "CombatEntity.h"
#include "CombatManager.h"
#include "CombatSelectionView.h"
#include "EngineUtils.h"
#include "SoundManager.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"

void UCommandBoard::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCommandBoard::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCommandBoard::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCommandBoard::ActivateCommandboardFunction  );
	
	combatManager =  gameModeBase->combatManager;
	currentActivePartyMember = combatManager->ReturnCurrentActivePartyMember();
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

	commandBoardSelectionAttack.AddDynamic(this, &UCommandBoard::Attack);
	commandboardSelections.Add(ECommandBoardStates::Attack,commandBoardSelectionAttack );
	
	commandBoardSelectionSkill.AddDynamic(this,  &UCommandBoard::Skill);
	commandboardSelections.Add(ECommandBoardStates::Skill,commandBoardSelectionSkill );
	
	commandBoardSelectionEscape.AddDynamic(this, &UCommandBoard::Escape);
	commandboardSelections.Add(ECommandBoardStates::Escape,commandBoardSelectionEscape );
	
	commandBoardSelectionPass.AddDynamic(this,   &UCommandBoard::Pass);
	commandboardSelections.Add(ECommandBoardStates::Pass,commandBoardSelectionPass );

	
	commandBoards[0]->SetBrushColor(highlightedColor);
	
		
	//	CommandBoardFunctions.Add();
	SetCursorPositionInfo();
}

void UCommandBoard::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();

	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = commandBoards.Num()-1;
}

void UCommandBoard::MoveUp()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveUp();
	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
}

void UCommandBoard::MoveDown()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);
	Super::MoveDown();
	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
}

void UCommandBoard::ActivateCommandboardFunction()
{
	const ECommandBoardStates commandBoardCommandToActivate = static_cast<ECommandBoardStates>(cursorPosition);
	commandboardSelections[commandBoardCommandToActivate].Broadcast();
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Accept);
}

void UCommandBoard::Attack()
{
	InGameHUD->PopMostRecentActiveView();
	UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,EUiType::ActiveUi);
	SelectionView->SetSkill(defaultAttack);
}

void UCommandBoard::Skill()
{
	InGameHUD->PopMostRecentActiveView();
	InGameHUD->PushView(EViews::Skill,EUiType::ActiveUi);
}
void UCommandBoard::Escape()
{
}

void UCommandBoard::Pass()
{
	TArray<PressTurnReactions> pressTurnReaction;
	pressTurnReaction.Add(PressTurnReactions::Pass);
	combatManager->pressTurnManager->ProcessTurn(pressTurnReaction);
}
