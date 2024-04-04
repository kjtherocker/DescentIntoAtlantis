// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

class AInGameHUD;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartGameDelegate);
UCLASS()
class DESENTINTOATLANTIS_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AMainMenuGameMode();
	
	
	virtual void PostInitializeComponents() override;
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void BeginPlay() override;

	void CreateMainMenu();
	void StartGame();

private:
	FStartGameDelegate startGameDelegate;

	UPROPERTY()  
	AInGameHUD*         InGameHUD;
};
