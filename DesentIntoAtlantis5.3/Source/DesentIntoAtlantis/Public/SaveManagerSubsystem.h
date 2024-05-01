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
	UFUNCTION()
	void ReturnToPreviousLevel();

	UFUNCTION()
	void SaveFloorPawn(AFloorPawn* aFloorPawn);

	UFUNCTION()
	void SaveSessionData();

	UFUNCTION()
	FVector2D LoadFloorPawnPosition();

	UFUNCTION()
	void LoadPreSetLevel();

	UFUNCTION()
	void LoadSaveDataAndTransitionToMap(FString aLevelName);

	UFUNCTION()
	void LoadCombatLevel(FString aEnemyGroupName,ECombatArena aCombatArena);

	UFUNCTION()
	void SetEventManagerData(FEventManagerData aEventManagerData);

	UFUNCTION()
	bool ConsumeGameSaveLoadingFlag();
		
	UPROPERTY()
	USaveGameData* SessionSaveGameObject;
	
private:
	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
	FCombatArenaData aCombatArenaData;
	bool isGameSaveBeingLoaded;
	FString currentLevelName;
	FString previousLevelName;
	FString preSetLevelName;

	
};
