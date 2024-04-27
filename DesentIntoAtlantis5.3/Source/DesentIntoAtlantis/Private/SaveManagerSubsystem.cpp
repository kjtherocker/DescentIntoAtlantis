// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveManagerSubsystem.h"

#include "PartyManagerSubsystem.h"
#include "SaveGameData.h"
#include "Kismet/GameplayStatics.h"


void USaveManagerSubsystem::InitializeSubsystem(UPersistentGameinstance* aPersistentGameInstance)
{
	persistentGameinstance = aPersistentGameInstance;
	SessionSaveGameObject = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));
}

void USaveManagerSubsystem::ReturnToPreviousLevel()
{
}

void USaveManagerSubsystem::SaveFloorPawn(AFloorPawn* aFloorPawn)
{
	//USaveGameData* SaveGameObject = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));
	//SaveGameObject->SetFloorPawn(aFloorPawn);
	//SaveGameObject->SetTest(2421);

	//UGameplayStatics::SaveGameToSlot(SaveGameObject,TEXT("SaveSlot1"), 0);

	persistentGameinstance->LoadPreSetLevel();


	
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
	USaveGameData* LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlot1"),0));

	return LoadedSaveGameObject->playerPosition;
}

void USaveManagerSubsystem::LoadPreSetLevel()
{
	//LoadLevel(preSetLevelName);
}

void USaveManagerSubsystem::LoadSaveDataAndTransitionToMap(FString aLevelName)
{
	isGameSaveBeingLoaded = true;
	USaveGameData* LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlot1"),0));
	persistentGameinstance->partyManagerSubsystem->LoadAndCreateAllPlayerEntitys(LoadedSaveGameObject->playerCompleteDataSet);
	persistentGameinstance->EventManagerSubSystem->LoadSavedFloorEventData(LoadedSaveGameObject->eventManagerData);
	persistentGameinstance->LoadLevel(aLevelName);

	SessionSaveGameObject = LoadedSaveGameObject;
}

void USaveManagerSubsystem::LoadCombatLevel(FString aEnemyGroupName, ECombatArena aCombatArena)
{
	aCombatArenaData.enemyGroupName = aEnemyGroupName;
	persistentGameinstance->LoadLevel("PrisonCombat");
}
