// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "UObject/NoExportTypes.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGameManager : public UObject
{
	GENERATED_BODY()
	UPROPERTY()
	AAtlantisGameModeBase* gameModeBase;
	FString previousLevel;
public:
	void Initialize(AAtlantisGameModeBase* aGameModeBase);
	UFUNCTION()
	void SetUpTitleMenu();

	UFUNCTION()
	void StartGame();
	UFUNCTION()
	void ResetPlayerToPreviousPosition();
};
