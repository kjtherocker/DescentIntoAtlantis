// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "UObject/NoExportTypes.h"
#include "GameManager.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartGameDelegate);
UCLASS()
class DESENTINTOATLANTIS_API UGameManager : public UObject
{
	GENERATED_BODY()
	UPROPERTY()
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	FStartGameDelegate startGameDelegate;
public:
	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	UFUNCTION()
	void SetUpTitleMenu();
	UFUNCTION()
	void StartGame();
	UFUNCTION()
	void ResetPlayerToPreviousPosition();
	
};
