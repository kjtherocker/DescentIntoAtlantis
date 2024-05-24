// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "PersistentGameinstance.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveManagerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void InitializeSubsystem(UPersistentGameinstance* aPersistentGameInstance);

	void InitializeSessionSave(USaveGameData* aSessionSave);
	void InitializeSessionSavePlayer(AFloorPawn* aFloorPawn);
	UFUNCTION()
	void ReturnToPreviousLevel();

	UFUNCTION()
	void AutoSave();

	UFUNCTION()
	void SaveGameInSlot(int aSlot);

	UFUNCTION()
	ECardinalNodeDirections LoadFloorPawnRotation();

	UFUNCTION()
	void LoadPreSetLevel();

	UFUNCTION()
	void LoadSaveDataAndTransitionToMap(int aSaveSlot);

	UFUNCTION()
	void SetEventManagerData(FEventManagerData aEventManagerData);

	UFUNCTION()
	bool ConsumeGameSaveLoadingFlag();
		
	UPROPERTY()
	USaveGameData* SessionSaveGameObject;

	UPROPERTY()
	USaveGameData* AutoSaveGameObject;
	
private:
	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
	FCombatArenaData aCombatArenaData;
	bool isGameSaveBeingLoaded = false;
	FString currentLevelName;
	FString previousLevelName;
	FString preSetLevelName;

	
};
