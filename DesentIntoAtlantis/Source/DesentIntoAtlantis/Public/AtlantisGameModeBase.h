// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemyFactory.h"
#include "PartyManagerSubsystem.h"
#include "SkillFactorySubsystem.h"
#include "Views.h"
#include "EDataTableTypes.h"
#include "FloorFactory.h"
#include "GameSettings.h"

#include "DesentIntoAtlantis/FloorManager.h"
#include "AtlantisGameModeBase.generated.h"

class UGameManager;
class ASoundManager;
class UFloorEventManager;
class UTutorialManager;
class AInGameHUD;
class UCombatManager;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AAtlantisGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void virtual InitializeLevel();
	virtual void BeginPlay() override;

	FString previousLevel;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableClasses,UDataTable*> dataTablesClasses;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<ESkillType,UDataTable*> dataTablesSkills;

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
	UFloorEventManager* floorEventManager;
	

	UPROPERTY(EditAnywhere)
	UGameManager* gameManager;

	UPROPERTY(EditAnywhere)
	UGameSettings* gameSettings;
	

	UPROPERTY()
	UWorld*             world;	
	UPROPERTY()
	USkillFactorySubsystem*      skillFactory;
	UPROPERTY()  
	UEnemyFactory*      enemyFactory;
	UPROPERTY()  
	UPartyManagerSubsystem*      partyManager;
	UPROPERTY()  
	UCombatManager*     combatManager;
	UPROPERTY()  
	AInGameHUD*         InGameHUD;
	UPROPERTY()
	UTutorialManager*   tutorialManager;

	UPROPERTY()
	UDialogueFactory*   dialogueFactory;
	
};
