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


class UEventManagerSubSystem;
struct FSkillsData;
UCLASS()
class DESENTINTOATLANTIS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();
	void Initialize(AAtlantisGameModeBase* aGameModeBase,UEventManagerSubSystem* aFloorEventManager);
	
	void CreateGrid(UFloorBase* aFloor);
	void CreateFloor(EFloorIdentifier aFloorIdentifier,bool aWillPlayerStartAtEntrance);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);
	void SpawnFloorEventTriggers(FVector2D aPositionInGrid);
	void SpawnFloor(UFloorBase* aFloorBase);
	void PlacePlayerFloorPawn(FVector2D aStartPositionInGrid);
	void MovePlayerToPreviousNode();
	
	AFloorNode* GetNodeInDirection(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	AFloorNode* GetNode(FVector2D CurrentPosition);

	UPROPERTY()
	TArray<AFloorNode*> floorNodes;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorEnemyPawnReference;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	UEventManagerSubSystem* eventManagerSubSystem;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;

	UPROPERTY()
	EFloorIdentifier currentFloorIdentifier;
	UPROPERTY()
	UFloorBase* currentFloor;
	TMap<ECardinalNodeDirections, FVector2D>  cardinalPositions;

	TMap<EFloorGimmicks,UGimmick_Base*> gimmickMap;
private:
	const double FLOOR_EVENT_HEIGHT_OFFSET = 240;
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes);

	void PlacePlayerAtFloorStartingNode();
	UPROPERTY()
	UEventManagerSubSystem* floorEventManager;
	AAtlantisGameModeBase* gameModeBase;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};