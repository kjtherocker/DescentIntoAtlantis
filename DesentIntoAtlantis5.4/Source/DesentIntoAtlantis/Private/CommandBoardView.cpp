// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandBoardView.h"

#include "CombatEntity.h"
#include "CombatGameModeBase.h"
#include "CombatLogSelectionView.h"
#include "CombatSelectionView.h"
#include "EngineUtils.h"
#include "ESkillID.h"
#include "GameManager.h"
#include "PersistentGameinstance.h"
#include "SkillView.h"
#include "SoundManager.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "DesentIntoAtlantis/FloorGameMode.h"

void UCommandBoardView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCommandBoardView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCommandBoardView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCommandBoardView::ActivateCommandboardFunction  );
	InputComponent->BindAction("CombatLog"   ,IE_Pressed ,this, &UCommandBoardView::PushCombatLog  );
	
	SkillFactorySubsystem = persistentGameinstance->skillFactorySubsystem;


	SetCommandBoard((ACombatGameModeBase*)aGameModeBase);
}

void UCommandBoardView::SetCommandBoard(ACombatGameModeBase* aCombatGameModeBase)
{
	combatManager =  aCombatGameModeBase;
	currentActivePartyMember = combatManager->GetCurrentActivePartyMember();
	defaultAttack = static_cast<USkillAttack*>(SkillFactorySubsystem->GetSkill(ESkillIDS::DefaultAttack));
	BW_FullBodyPortrait->SetBrushFromTexture(currentActivePartyMember->playerIdentityData.fullBodyCharacterPortrait);
	
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

void UCommandBoardView::PushCombatLog()
{
	if(combatManager->last50CombatLogs.Num() == 0)
	{
		return;
	}
	
	UCombatLogSelectionView* DetailedView = (UCombatLogSelectionView*)InGameHUD->PushAndGetView(EViews::CombatLogSelection,  EUiType::ActiveUi);
	DetailedView->SetCombatLog(combatManager->last50CombatLogs);
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
	UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
	SelectionView->SetCombatGameMode(combatManager);
	SelectionView->SetSkill(defaultAttack);
}

void UCommandBoardView::Skill()
{
	InGameHUD->PopMostRecentActiveView();
	USkillView* SelectionView = (USkillView*)InGameHUD->PushAndGetView(EViews::Skill,  EUiType::ActiveUi);
}
void UCommandBoardView::Escape()
{
	InGameHUD->PopMostRecentActiveView();
	gameModeBase->gameManager->ResetPlayerToPreviousPosition();
}

void UCommandBoardView::Pass()
{
	TArray<EPressTurnReactions> pressTurnReaction;
	pressTurnReaction.Add(EPressTurnReactions::Pass);
	combatManager->pressTurnManager->ProcessTurn(pressTurnReaction);
}
