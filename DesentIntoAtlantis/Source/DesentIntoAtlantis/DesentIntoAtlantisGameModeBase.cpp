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
}

void ADesentIntoAtlantisGameModeBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    skillFactory = NewObject<USkillFactory>();

    if(dataTables[EDataTableTypes::Skills] != nullptr)
    {
        skillFactory->InitializeDatabase(dataTables[EDataTableTypes::Skills]);
    }

    if(dataTables[EDataTableTypes::Enemys] != nullptr ||
       dataTables[EDataTableTypes::EnemyGroups] != nullptr )
    {
        enemyFactory = NewObject<UEnemyFactory>();
        enemyFactory->InitializeDatabase(dataTables[EDataTableTypes::Enemys],
            dataTables[EDataTableTypes::EnemyGroups]);
    }

    if(dataTables[EDataTableTypes::Party] != nullptr ||
       !dataTablesClasses.IsEmpty())
    {
        partyManager = NewObject<UPartyManager>();
        partyManager->InitializeDataTable(skillFactory,dataTables[EDataTableTypes::Party], dataTablesClasses);
    }
    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this);
}
