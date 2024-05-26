// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorPawn.h"
#include "Floor_EnemyPawn.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AFloor_EnemyPawn : public AFloorPawn
{
	GENERATED_BODY()
public:
	void Test();

	UPROPERTY(EditAnywhere)
	int Testooo = 0;
};
