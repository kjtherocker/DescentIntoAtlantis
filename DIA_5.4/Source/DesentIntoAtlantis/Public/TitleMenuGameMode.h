// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "GameFramework/GameModeBase.h"
#include "TitleMenuGameMode.generated.h"

class AInGameHUD;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartGameDelegate);
UCLASS()
class DESENTINTOATLANTIS_API ATitleMenuGameMode : public AAtlantisGameModeBase
{
	GENERATED_BODY()

	ATitleMenuGameMode();

	virtual void InitializeLevel() override;
	
	void CreateMainMenu();
	UFUNCTION()
	void StartGame();

private:
	FStartGameDelegate startGameDelegate;
};
