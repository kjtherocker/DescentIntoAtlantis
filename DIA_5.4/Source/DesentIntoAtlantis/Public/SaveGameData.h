// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChallengeSubsystem.h"
#include "CombatClass.h"
#include "CombatEntity.h"
#include "EnemyBeastiaryData.h"
#include "EnemyFactorySubSystem.h"
#include "EventManagerSubSystem.h"
#include "LevelProgressionSubsystem.h"
#include "PartyManagerSubsystem.h"
#include "PlayerCombatEntity.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameData.generated.h"

struct FChallengeManagerData;
class UChallengeSubsystem;
struct FCompletePartyManagerSubsystemData;
class UPartyManagerSubsystem;
class UEnemyBestiaryData;
struct FCompleteProgressionData;
class AFloorPlayerPawn;

/**
 * 
 */

UCLASS()
class DESENTINTOATLANTIS_API USaveGameData : public USaveGame
{
	GENERATED_BODY()
private:
	UFUNCTION()
	void UpdateCompleteProgressionData(FCompleteProgressionData aCompleteProgressionData);
	UFUNCTION()
	void UpdateCurrentLevelIdentifier(EFloorID aFloorIdentifier);
	UFUNCTION()
	void UpdateFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawn);

	UFUNCTION()
	void UpdateEnemyBestiaryData(FCompleteBestiaryData aCompleteBestiaryData);

	UFUNCTION()
	void UpdateChallengeManagerData(FChallengeManagerData aChallengeManagerData);
	UFUNCTION()
	void UpdatePartyLevel(FCompletePartyManagerSubsystemData aPartyManagerSubsystem);

public:
	void SubscribeUpdateFloorPlayerCompleteData(AFloorPlayerPawn* aFloorPawn);
	void SubscribeUpdateCompleteProgressionData(ULevelProgressionSubsystem* aLevelProgressionSubsystem);
	void SubScribeToUpdateLevelIdentifier(UPersistentGameinstance*  aPersistentGameInstance);
	void SubScribeToUpdateChallengeManager(UChallengeSubsystem*  aChallengeSubsystem);
	void SubScribeToUpdateEnemyBestiary(UEnemyFactorySubSystem*  aEnemyFactorySubsystem);
	void SubscribeToUpdatePartyManager(UPartyManagerSubsystem* aPartyManagerSubsystem);
	//void SubScribeToUpdateLevelIdentifier(UPersistentGameinstance*  aPersistentGameInstance);
	void AddSaveIcons(EPartyMembersID aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet);



	UPROPERTY()
	FCompleteBestiaryData  enemyBestiaryData;
	UPROPERTY()
	EFloorID currentLevel;
	UPROPERTY()
	FCompleteProgressionData completeProgressionData;

	UPROPERTY()
	FChallengeManagerData completeChallengeManagerData;
	UPROPERTY()
	FCompletePartyManagerSubsystemData completePartyManagerData;
	UPROPERTY()
	FCompleteFloorPawnData completeFloorPawnData;
	UPROPERTY()
	ECardinalNodeDirections playerFloorRotation;
	UPROPERTY()
	 TMap<EPartyMembersID, FPlayerCompleteDataSet> SaveIcons;

	UPROPERTY()
	FEventManagerData eventManagerData;

	
	
};
