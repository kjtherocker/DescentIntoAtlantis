// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveManagerSubsystem.h"

#include "PartyManagerSubsystem.h"
#include "SaveGameData.h"
#include "Kismet/GameplayStatics.h"


void USaveManagerSubsystem::InitializeSubsystem(UPersistentGameinstance* aPersistentGameInstance)
{
	persistentGameinstance = aPersistentGameInstance;
	SessionSaveGameObject = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));
	InitializeSessionSave(SessionSaveGameObject);
}

void USaveManagerSubsystem::InitializeSessionSave(USaveGameData* aSessionSave)
{
	aSessionSave->SubscribeUpdateCompleteProgressionData(persistentGameinstance->levelProgressionSubsystem);
}

void USaveManagerSubsystem::ReturnToPreviousLevel()
{
}

void USaveManagerSubsystem::SaveFloorPawn(AFloorPawn* aFloorPawn)
{
	SessionSaveGameObject->SetFloorPawn(aFloorPawn);
}


void USaveManagerSubsystem::SetEventManagerData(FEventManagerData aEventManagerData)
{
	SessionSaveGameObject->eventManagerData = aEventManagerData;
}

void USaveManagerSubsystem::SaveSessionData()
{
	UGameplayStatics::SaveGameToSlot(SessionSaveGameObject,TEXT("SaveSlot1"), 0);
}

FVector2D USaveManagerSubsystem::LoadFloorPawnPosition()
{
	return SessionSaveGameObject->playerPosition;
}

void USaveManagerSubsystem::LoadPreSetLevel()
{
	//LoadLevel(preSetLevelName);
}

void USaveManagerSubsystem::LoadSaveDataAndTransitionToMap(FString aLevelName)
{
	isGameSaveBeingLoaded = true;
	USaveGameData* LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlot1"),0));
	SessionSaveGameObject = LoadedSaveGameObject;
	InitializeSessionSave(SessionSaveGameObject);
	persistentGameinstance->partyManagerSubsystem->LoadAndCreateAllPlayerEntitys(LoadedSaveGameObject->playerCompleteDataSet);
	persistentGameinstance->EventManagerSubSystem->LoadSavedFloorEventData(LoadedSaveGameObject->eventManagerData);
	persistentGameinstance->levelProgressionSubsystem->LoadCompleteProgressionData(LoadedSaveGameObject->completeProgressionData);
	persistentGameinstance->LoadLevel(aLevelName);

	
}

bool USaveManagerSubsystem::ConsumeGameSaveLoadingFlag()
{
	bool bIsLoading = isGameSaveBeingLoaded;
	// Once checked, reset the flag
	isGameSaveBeingLoaded = false;
	return bIsLoading;
}

void USaveManagerSubsystem::LoadCombatLevel(FString aEnemyGroupName, ECombatArena aCombatArena)
{
	aCombatArenaData.enemyGroupName = aEnemyGroupName;
	persistentGameinstance->LoadLevel("PrisonCombat");
}
