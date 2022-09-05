// Copyright Epic Games, Inc. All Rights Reserved.


#include "DesentIntoAtlantisGameModeBase.h"
#include "CombatManager.h"
#include "FloorPlayerController.h"
#include "InGameHUD.h"

ADesentIntoAtlantisGameModeBase::ADesentIntoAtlantisGameModeBase()
{
    bNetLoadOnClient = false;
    bPauseable = true;
    bStartPlayersAsSpectators = false;
    
    PlayerControllerClass = AFloorPlayerController::StaticClass();

    skillFactory = NewObject<USkillFactory>();
    enemyFactory = NewObject<UEnemyFactory>();
    
    partyManager = NewObject<UPartyManager>();
    partyManager->Initialize(skillFactory);

    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this);
}
