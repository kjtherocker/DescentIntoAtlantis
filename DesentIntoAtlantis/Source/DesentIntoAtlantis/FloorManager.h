// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
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

	AFloorNode* GetNode(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	TMap<ECardinalNodeDirections, FVector2D>  m_CardinalPositions;
	

	//UPROPERTY()
	TArray<AFloorNode*> m_FloorNodes;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorNodeReference;

	void SpawnFloor(UFloorBase* aFloorBase);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
	UFloorBase* currentFloor;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
