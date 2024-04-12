// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameData.generated.h"

class AFloorPawn;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveGameData : public USaveGame
{
	GENERATED_BODY()

public:
	void SetTest(int Atest);
	void SetFloorPawn(AFloorPawn* Atest);

	UPROPERTY()
	int test;

	UPROPERTY()
	AFloorPawn* testo2 ;
	
	
};
