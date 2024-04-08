// Fill out your copyright notice in the Description page of Project Settings.


#include "AtlantisGameModeBase.h"

#include "GameManager.h"
#include "PersistentGameinstance.h"
#include "PartyManagerSubsystem.h"
#include "SoundManager.h"
#include "TutorialManager.h"

void AAtlantisGameModeBase::InitializeLevel()
{
    
    UGameInstance* GameInstance = GetGameInstance();

    // Cast the game instance to your custom game instance class
    UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>(GameInstance);

    
    UPartyManagerSubsystem* partyManagerSubsystem = persistentGameInstance->GetSubsystem<UPartyManagerSubsystem>();
    partyManager = partyManagerSubsystem;

    USkillFactorySubsystem* skillFactorySubsystem = persistentGameInstance->GetSubsystem<USkillFactorySubsystem>();
    skillFactory = skillFactorySubsystem;

    
    world = GetWorld();
    FVector ActorFinalSpawnPoint;
    FRotator rotator;

    gameManager = NewObject<UGameManager>();
    gameManager->Initialize(this);

    gameSettings = NewObject<UGameSettings>();
    
    soundManager = Cast<ASoundManager>(world->SpawnActor<AActor>(soundManagerReference, ActorFinalSpawnPoint, rotator));
    

    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this,world);

    if(dataTables.Contains(EDataTableTypes::Enemys) &&
       dataTables.Contains(EDataTableTypes::EnemyGroups))
    {
        if(dataTables[EDataTableTypes::Enemys] != nullptr
            && dataTables[EDataTableTypes::EnemyGroups] != nullptr)
        {
            enemyFactory = NewObject<UEnemyFactory>();
            enemyFactory->InitializeDatabase(dataTables[EDataTableTypes::Enemys],
                dataTables[EDataTableTypes::EnemyGroups]);
        }
    }

  

    if(dataTables.Contains(EDataTableTypes::Tutorial))
    {
        if(dataTables[EDataTableTypes::Tutorial] != nullptr)
        {
            tutorialManager = NewObject<UTutorialManager>();
            tutorialManager->InitializeDatabase(dataTables[EDataTableTypes::Tutorial]);
        }
    }


    if(dataTables.Contains(EDataTableTypes::Dialogue))
    {
        if(dataTables[EDataTableTypes::Dialogue] != nullptr)
        {
            dialogueFactory = NewObject<UDialogueFactory>();
            dialogueFactory->InitializeDatabase(dataTables[EDataTableTypes::Dialogue]);
        }
    }



    int testo = 0;


}

void AAtlantisGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	InitializeLevel();
}
