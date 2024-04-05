// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

class AInGameHUD;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartGameDelegate);
UCLASS()
class DESENTINTOATLANTIS_API AMainMenuGameMode : public AAtlantisGameModeBase
{
	GENERATED_BODY()

	AMainMenuGameMode();

	virtual void InitializeLevel() override;
	
	void CreateMainMenu();
	void StartGame();

private:
	FStartGameDelegate startGameDelegate;
};
