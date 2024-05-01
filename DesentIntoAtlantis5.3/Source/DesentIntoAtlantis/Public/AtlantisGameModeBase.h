// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemyFactorySubSystem.h"
#include "PartyManagerSubsystem.h"
#include "SkillFactorySubsystem.h"
#include "Views.h"
#include "EDataTableTypes.h"
#include "FloorFactory.h"
#include "GameSettings.h"

#include "DesentIntoAtlantis/FloorManager.h"
#include "AtlantisGameModeBase.generated.h"

class ULevelProgressionSubsystem;
class UGameManager;
class ASoundManager;
class UEventManagerSubSystem;
class UTutorialManagerSubsystem;
class AInGameHUD;
class ACombatGameModeBase;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AAtlantisGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAtlantisGameModeBase();
	void virtual InitializeLevel();
	virtual void BeginPlay() override;

	FString previousLevel;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;

	//All actors created at tge start of the game
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> soundManagerReference;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorManagerReference;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorPawnReference;
	
	UPROPERTY(EditAnywhere)
	ASoundManager* soundManager;
	
	UPROPERTY(EditAnywhere)
	AFloorManager* floorManager;
	UPROPERTY()
	AFloorPawn* floorPawn;

	UPROPERTY()
	UFloorFactory*      floorFactory;
	UPROPERTY()
	UEventManagerSubSystem* floorEventManager;
	

	UPROPERTY(EditAnywhere)
	UGameManager* gameManager;

	UPROPERTY(EditAnywhere)
	UGameSettings* gameSettings;
	

	UPROPERTY()
	UWorld*             world;	
	UPROPERTY()
	USkillFactorySubsystem*      skillFactory;
	UPROPERTY()  
	UEnemyFactorySubSystem*      enemyFactory;
	UPROPERTY()  
	UPartyManagerSubsystem*      partyManager;
	UPROPERTY()  
	ACombatGameModeBase*     combatManager;
	UPROPERTY()  
	AInGameHUD*         InGameHUD;
	UPROPERTY()
	UTutorialManagerSubsystem*   tutorialManager;

	UPROPERTY()
	UDialogueFactorySubsystem*   dialogueFactory;
	UPROPERTY()
	ULevelProgressionSubsystem*   levelProgressionSubsystem;
protected:

	UPersistentGameinstance* persistentGameInstance;

};
