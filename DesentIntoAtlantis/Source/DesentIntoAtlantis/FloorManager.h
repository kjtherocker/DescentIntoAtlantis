// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "DataTableUtils.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
#include "FloorPawn.h"
#include "FloorEnemyPawn.h"
#include "FloorManager.generated.h"


struct FSkills_Base;
UCLASS()
class DESENTINTOATLANTIS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();
	void CreateGrid(UFloorBase* aFloor);
	
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);
	void SpawnFloorEnemyPawn();
	void SpawnFloor(UFloorBase* aFloorBase);
	
	AFloorNode* GetNodeInDirection(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	AFloorNode* GetNode(FVector2D CurrentPosition);

	//UPROPERTY()
	TArray<AFloorNode*> floorNodes;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
	UDataTable* datatable;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorPawnReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorEnemyPawnReference;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
	UFloorBase* currentFloor;
	TMap<ECardinalNodeDirections, FVector2D>  cardinalPositions;
	
private:
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes);

	FSkills_Base* skillbasetest;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
