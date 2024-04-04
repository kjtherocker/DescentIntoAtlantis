// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentGameinstance.h"

#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


UPersistentGameinstance::UPersistentGameinstance()
{
}

void UPersistentGameinstance::Init()
{
	Super::Init();
}


void UPersistentGameinstance::UnloadLevel(FString aLevelName)
{
	FName LevelName = FName(*aLevelName);
	bool bShouldBlockOnUnload = true; // Set to true if you want to wait for the level to be unloaded

	FLatentActionInfo LatentInfo;
	UGameplayStatics::UnloadStreamLevel(GetWorld(), LevelName, LatentInfo, bShouldBlockOnUnload);
}

void UPersistentGameinstance::LoadLevel(FString aLevelName)
{
	FString LevelName = aLevelName;
	currentLevelName  = LevelName;
	UGameplayStatics::OpenLevel(GetWorld(), FName(*LevelName), true);
}

void UPersistentGameinstance::LoadPreSetLevel()
{
	LoadLevel(preSetLevelName);
}


void UPersistentGameinstance::GetCurrentLevelName(FString aLevelName)
{
	currentLevelName = aLevelName;
}
