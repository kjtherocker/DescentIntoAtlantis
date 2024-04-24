// Fill out your copyright notice in the Description page of Project Settings.


#include "AtlantisGameModeBase.h"

#include "GameManager.h"
#include "PersistentGameinstance.h"
#include "PartyManagerSubsystem.h"
#include "SoundManager.h"
#include "TutorialManagerSubsystem.h"

AAtlantisGameModeBase::AAtlantisGameModeBase()
{
	
	int testo = 0;
}

void AAtlantisGameModeBase::InitializeLevel()
{
    
    UGameInstance* GameInstance = GetGameInstance();

    // Cast the game instance to your custom game instance class
    persistentGameInstance = Cast<UPersistentGameinstance>(GameInstance);
    
    partyManager = persistentGameInstance->partyManagerSubsystem;
    
    skillFactory = persistentGameInstance->skillFactorySubsystem;
    
    enemyFactory =  persistentGameInstance->enemyFactorySubSystem;

	floorFactory = persistentGameInstance->floorFactory;

	floorEventManager = persistentGameInstance->EventManagerSubSystem;
	
	persistentGameInstance->EventManagerSubSystem->SetDefaultGameMode(this);
	
    world = GetWorld();
    FVector ActorFinalSpawnPoint;
    FRotator rotator;

    gameManager = NewObject<UGameManager>();
    gameManager->Initialize(this);

    gameSettings = NewObject<UGameSettings>();
    
    soundManager = Cast<ASoundManager>(world->SpawnActor<AActor>(soundManagerReference, FVector(0,0,0), rotator));

	if(floorPawnReference == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("FLOOR PAWN NEEDS A REFERENCE IN THERE GAME BASE"));
	}
	else
	{
		floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, FVector(0,0,0), rotator));
		floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;

		InGameHUD = (AInGameHUD*)GetWorld()->GetFirstPlayerController()->GetHUD();
		InGameHUD->gameModeBase = this;
	}

}

void AAtlantisGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	InitializeLevel();
}
