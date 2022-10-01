// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatManager.h"

#include "EditorFontGlyphs.h"
#include "InGameHUD.h"
#include "PartyHealthbars.h"
#include "PressTurnManager.h"
#include "TurnCounter.h"
#include "Blueprint/UserWidget.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"


void UCombatManager::Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	gameModeBase = aGameModeBase;
	pressTurnManager = NewObject<UPressTurnManager>();
	pressTurnManager->Initialize(this,aGameModeBase);
}

void UCombatManager::StartCombat()
{
	if(hasCombatStarted)
	{
		return;
	}

	hasCombatStarted = true;
	
	GameHUD = gameModeBase->InGameHUD;

	partyMembersInCombat = gameModeBase->partyManager->ReturnActivePartyEntityData();
	currentActivePartyMember = partyMembersInCombat[0];

	TArray<FString> EnemyNames = gameModeBase->enemyFactory->ReturnEnemyGroupData("FloorFight1");

	for(int i = 0 ; i < EnemyNames.Num();i++)
	{
		AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData(EnemyNames[i]));
	}
	
	if(GameHUD)
	{
		//hud->PushView(EViews::Dialogue,  EUiType::PersistentUi);
		GameHUD->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		GameHUD->PushView(EViews::EnemyPortraits,    EUiType::PersistentUi);
		GameHUD->PushView(EViews::TurnCounter,       EUiType::PersistentUi);
		GameHUD->PushView(EViews::Healthbars,        EUiType::PersistentUi);
		GameHUD->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
	}

	turnCounter     = (UTurnCounter*)GameHUD->GetActiveHUDView(EViews::TurnCounter, EUiType::PersistentUi);
	partyHealthbars = (UPartyHealthbars*)GameHUD->GetActiveHUDView(EViews::Healthbars, EUiType::PersistentUi);
	currentActivePosition = 0;
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	pressTurnManager->SetAmountOfTurns(partyMembersInCombat.Num() - 1);
}

void UCombatManager::EndCombat()
{
	hasCombatStarted = false;
}

void UCombatManager::AddEnemyToCombat(FEnemyEntityData* AEnemyEntityData)
{
	if(AEnemyEntityData != nullptr)
	{
		FEnemyCombatEntity* EnemyCombatEntity = new FEnemyCombatEntity;
		EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData);
		
		enemyCombatEntities.Add(EnemyCombatEntity);
		EnemyCombatEntity->enemyCombatPosition = static_cast<EEnemyCombatPositions>(enemyCombatEntities.Num()-1);
	}
}

void UCombatManager::TurnFinished()
{
	currentActivePosition++;
	if(currentActivePosition >= partyMembersInCombat.Num())
	{
		currentActivePosition = 0;
	}

	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,0);

	currentActivePartyMember = partyMembersInCombat[currentActivePosition];
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	GameHUD->PopAllActiveViews();
	GameHUD->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
}

FPlayerCombatEntity* UCombatManager::ReturnCurrentActivePartyMember()
{
	return currentActivePartyMember;
}

TArray<FEnemyCombatEntity*> UCombatManager::GetEnemysInCombat()
{
	return enemyCombatEntities;
}

TArray<FPlayerCombatEntity*> UCombatManager::GetPlayersInCombat()
{
	return partyMembersInCombat;
}
