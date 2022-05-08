// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
#include "FloorPawn.h"
#include "FloorManager.generated.h"


UCLASS()
class DESENTINTOATLANTIS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();
	void CreateGrid(UFloorBase* aFloor);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);

	void SpawnFloor(UFloorBase* aFloorBase);
	AFloorNode* GetNode(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);

	//UPROPERTY()
	TArray<AFloorNode*> floorNodes;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> FloorPawnReference;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
	UFloorBase* currentFloor;
	TMap<ECardinalNodeDirections, FVector2D>  m_CardinalPositions;
	
private:
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes);

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
