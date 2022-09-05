// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatManager.h"
#include "InGameHUD.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"


void UCombatManager::Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	gameModeBase = aGameModeBase;
}

void UCombatManager::StartCombat()
{
	AInGameHUD * hud = gameModeBase->InGameHUD;

	partyMembersInCombat = gameModeBase->partyManager->ReturnActivePartyEntityData();
	currentActivePartyMember = partyMembersInCombat[0];
	
	AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData("Mermaid"));
	AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData("Mermaid"));
	AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData("Mermaid"));
	
	if(hud)
	{
		hud->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		hud->PushView(EViews::TurnCounter,       EUiType::PersistentUi);
		hud->PushView(EViews::EnemyPortraits,    EUiType::PersistentUi);
		hud->PushView(EViews::Healthbars,        EUiType::PersistentUi);
		hud->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
	}
	
}

void UCombatManager::EndCombat()
{
}

void UCombatManager::AddEnemyToCombat(FEnemyEntityData* AEnemyEntityData)
{
	if(AEnemyEntityData != nullptr)
	{
		FEnemyCombatEntity* EnemyCombatEntity = new FEnemyCombatEntity;
		EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData);
		enemyCombatEntities.Add(EnemyCombatEntity);
	}
}

FPlayerCombatEntity* UCombatManager::ReturnCurrentActivePartyMember()
{
	return currentActivePartyMember;
}

TArray<FEnemyCombatEntity*> UCombatManager::ReturnEnemysInCombat()
{
	return enemyCombatEntities;
}
