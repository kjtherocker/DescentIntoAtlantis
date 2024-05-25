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
	aSessionSave->SubScribeToUpdateLevelIdentifier(persistentGameinstance);
	aSessionSave->SubScribeToUpdateEnemyBestiary(persistentGameinstance->enemyFactorySubSystem);
}

void USaveManagerSubsystem::InitializeSessionSavePlayer(AFloorPlayerPawn* aFloorPawn)
{
	SessionSaveGameObject->SubscribeUpdateFloorPlayerCompleteData(aFloorPawn);
}

void USaveManagerSubsystem::ReturnToPreviousLevel()
{
}



void USaveManagerSubsystem::SetEventManagerData(FEventManagerData aEventManagerData)
{
	SessionSaveGameObject->eventManagerData = aEventManagerData;
}

void USaveManagerSubsystem::AutoSave()
{
	AutoSaveGameObject = SessionSaveGameObject;
	UGameplayStatics::SaveGameToSlot(AutoSaveGameObject,TEXT("AutoSave"), 0);
}

void USaveManagerSubsystem::SaveGameInSlot(FString saveGameName)
{
	UGameplayStatics::SaveGameToSlot(SessionSaveGameObject,saveGameName, 0);
}

ECardinalNodeDirections USaveManagerSubsystem::LoadFloorPawnRotation()
{
	return SessionSaveGameObject->playerFloorRotation;
}



void USaveManagerSubsystem::LoadPreSetLevel()
{
	//LoadLevel(preSetLevelName);
}


void USaveManagerSubsystem::LoadSaveDataAndTransitionToMap(FString saveGameName)
{
	isGameSaveBeingLoaded = true;
	USaveGameData* LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(saveGameName,0));
	SessionSaveGameObject = LoadedSaveGameObject;
	InitializeSessionSave(SessionSaveGameObject);
	persistentGameinstance->partyManagerSubsystem->LoadAndCreateAllPlayerEntitys(LoadedSaveGameObject->playerCompleteDataSet);
	persistentGameinstance->EventManagerSubSystem->LoadSavedFloorEventData(LoadedSaveGameObject->eventManagerData);
	persistentGameinstance->levelProgressionSubsystem->LoadCompleteProgressionData(LoadedSaveGameObject->completeProgressionData);
	persistentGameinstance->levelProgressionSubsystem->SetCompleteFloorPawnData(SessionSaveGameObject->completeFloorPawnData);
	persistentGameinstance->enemyFactorySubSystem->LoadSavedBestiary(SessionSaveGameObject->enemyBestiaryData);
	persistentGameinstance->LoadLevel(SessionSaveGameObject->currentLevel);

	
}

bool USaveManagerSubsystem::ConsumeGameSaveLoadingFlag()
{
	bool bIsLoading = isGameSaveBeingLoaded;
	// Once checked, reset the flag
	isGameSaveBeingLoaded = false;
	return bIsLoading;
}

