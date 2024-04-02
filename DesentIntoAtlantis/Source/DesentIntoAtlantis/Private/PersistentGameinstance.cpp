// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentGameinstance.h"

#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"


UPersistentGameinstance::UPersistentGameinstance()
{
}

void UPersistentGameinstance::Init()
{
	Super::Init();

	 UWorld* testo = GetWorld();
	
	ADesentIntoAtlantisGameModeBase* GameMode = Cast<ADesentIntoAtlantisGameModeBase>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		// Access any functions or variables of your custom GameMode class here
		UE_LOG(LogTemp, Warning, TEXT("GameMode successfully casted."));
		GameMode->InitializeLevel();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast GameMode or GameMode is nullptr."));
	}
}

