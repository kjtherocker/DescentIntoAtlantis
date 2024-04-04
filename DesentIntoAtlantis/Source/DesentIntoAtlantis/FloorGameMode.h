// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFactory.h"
#include "PartyManager.h"
#include "SkillFactory.h"
#include "Views.h"
#include "EDataTableTypes.h"
#include "FloorFactory.h"
#include "FloorManager.h"
#include "GameSettings.h"
#include "GameFramework/GameModeBase.h"
#include "FloorGameMode.generated.h"

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
class DESENTINTOATLANTIS_API AFloorGameMode : public AGameModeBase
{
	GENERATED_BODY()
	AFloorGameMode();

	
public:


	virtual void PostInitializeComponents() override;
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void BeginPlay() override;

	UFUNCTION()
	void InitializeLevel();

	FString previousLevel;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableClasses,UDataTable*> dataTablesClasses;

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
	

	UPROPERTY(EditAnywhere)
	UGameManager* gameManager;

	UPROPERTY(EditAnywhere)
	UGameSettings* gameSettings;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<ESkillType,UDataTable*> dataTablesSkills;
	UPROPERTY()
	UWorld*             world;	
	UPROPERTY()
	USkillFactory*      skillFactory;
	UPROPERTY()  
	UEnemyFactory*      enemyFactory;
	UPROPERTY()  
	UPartyManager*      partyManager;
	UPROPERTY()  
	UCombatManager*     combatManager;
	UPROPERTY()  
	AInGameHUD*         InGameHUD;
	UPROPERTY()
	UTutorialManager*   tutorialManager;
	UPROPERTY()
	UFloorFactory*      floorFactory;
	UPROPERTY()
	UFloorEventManager* floorEventManager;
	UPROPERTY()
	UDialogueFactory*   dialogueFactory;
	
};
