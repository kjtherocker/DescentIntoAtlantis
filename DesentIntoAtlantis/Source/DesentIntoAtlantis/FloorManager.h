// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
	UPROPERTY()
	TArray<UFloorBase*> m_Floors;
	//UPROPERTY()
	TArray<AFloorNode*> m_FloorNodes;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorNodeReference;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
