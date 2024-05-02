// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatClass.h"
#include "CombatEntity.h"
#include "EventManagerSubSystem.h"
#include "LevelProgressionSubsystem.h"
#include "PlayerCombatEntity.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameData.generated.h"

struct FCompleteProgressionData;
class AFloorPawn;

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
	void UpdateCurrentLevelIdentifier(EFloorIdentifier aFloorIdentifier);
	UFUNCTION()
	void UpdateFloorPawnData(FCompleteFloorPawnData aCompleteFloorPawn);

public:
	void SubscribeUpdateFloorPlayerCompleteData(AFloorPawn* aFloorPawn);
	void SubscribeUpdateCompleteProgressionData(ULevelProgressionSubsystem* aLevelProgressionSubsystem);
	void SubScribeToUpdateLevelIdentifier(UPersistentGameinstance*  aPersistentGameInstance);

	void AddPlayerCompleteDataSet(EPartyMembers aPartyMember,FPlayerCompleteDataSet aPlayerCompleteDataSet);
	
	UPROPERTY()
	EFloorIdentifier currentLevel;
	UPROPERTY()
	FCompleteProgressionData completeProgressionData;

	UPROPERTY()
	FCompleteFloorPawnData completeFloorPawnData;
	UPROPERTY()
	ECardinalNodeDirections playerFloorRotation;
	UPROPERTY()
	 TMap<EPartyMembers, FPlayerCompleteDataSet> playerCompleteDataSet;

	UPROPERTY()
	FEventManagerData eventManagerData;

	
	
};
