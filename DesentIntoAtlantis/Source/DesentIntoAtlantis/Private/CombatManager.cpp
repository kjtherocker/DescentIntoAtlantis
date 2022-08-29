// Fill out your copyright notice in the Description page of Project Settings.

#include "InGameHUD.h"
#include "CombatManager.h"

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
	currentActivePartyMember = partyMembersInCombat[1];
	
	if(hud)
	{
		hud->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		hud->PushView(EViews::Healthbars,        EUiType::PersistentUi);
		hud->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
	}
}

void UCombatManager::EndCombat()
{
}

FCombatEntity* UCombatManager::ReturnCurrentActivePartyMember()
{
	return currentActivePartyMember;
}
