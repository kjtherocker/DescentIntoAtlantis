// Fill out your copyright notice in the Description page of Project Settings.


#include "MapView.h"

#include "FloorFactory.h"
#include "FloorPawn.h"
#include "LevelGeneratorUtilityWidget.h"
#include "MapButtonElement.h"
#include "MapPlayerIconElement.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/WrapBox.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"

void UMapView::GenerateLevel(UFloorFactory* aFloorFactory)
{
	FloorIdentifier = EFloorIdentifier::Floor1;
	if(FloorIdentifier == EFloorIdentifier::None)
	{
		return;
	}
	floorFactory = aFloorFactory;
	CurrentFloor = floorFactory->floorDictionary[FloorIdentifier];
	if(MapButtons.Num() <= 0)
	{
		CurrentFloor->Initialize();
		CreateGrid(CurrentFloor);
	}
}

void UMapView::CreateGrid(UFloorBase* aFloor)
{
	UMapButtonElement* Object = nullptr;
	UFloorBase* tempfloor = aFloor;
	
	MapButtons.Init(Object,tempfloor->GridDimensionX * tempfloor->GridDimensionY );
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = aFloor->GetIndex(x, y);
			SpawnMapButton(x , y,LevelIndex );
			MapButtons[LevelIndex]->SetMapIcon(static_cast<ECardinalNodeDirections>(aFloor->floorData.floorBlueprint[LevelIndex]));
			MapButtons[LevelIndex]->SetEventIcon(false);
			//If there is no node then continue
			if (tempfloor->floorData.floorBlueprint[LevelIndex] == (short)ECardinalNodeDirections::Empty)
			{
				continue;
			}
			else
			{
				
			}

			// FVector2D positionInGrid = FVector2D(x,y);
			// if(aFloor->floorEventData.Contains(positionInGrid))
			// {
			// 	//floorNodes[LevelIndex]->hasFloorEvent = true;
			//
			// }
		}
	}

	//setting event icons
	for (TPair<int, FFloorEventData>& floorEvent : floorFactory->floorEventData)
	{
		FFloorEventData floorEventData = floorEvent.Value;
		if(floorEventData.floorIdentifier == tempfloor->floorData.floorIdentifier)
		{
			int LevelIndex = tempfloor->GetIndex(floorEventData.positionInGrid.X, floorEventData.positionInGrid.Y);
			MapButtons[LevelIndex]->SetEventIcon(true);
			MapButtons[LevelIndex]->SetFloorEvent(floorEventData,floorEvent.Key);
		}
	}

	UUserWidget* mapbuttonElement = CreateWidget(this,BP_MapPlayerIconElement );

	mapPlayerIconElement = (UMapPlayerIconElement*)mapbuttonElement;
	
	playerIconGridSlot = BW_UniformGrid2->AddChildToUniformGrid(mapPlayerIconElement);
	
	playerIconGridSlot->SetRow(1);
	playerIconGridSlot->SetColumn(1);
}

void UMapView::SpawnMapButton(int aRow, int aColumn, int aIndex)
{
	FVector2D  PositionOffset;
	PositionOffset.Set(MAP_NODE_POSITION_OFFSET * aRow, MAP_NODE_POSITION_OFFSET * aColumn);
	FVector2D startPosition = FVector2D(15,188);
	FVector2D  ActorFinalSpawnPoint =  startPosition + PositionOffset ;

	UUserWidget* mapbuttonElement = CreateWidget(this,MapButtonElement );

	UMapButtonElement* baseUserWidget = (UMapButtonElement*)mapbuttonElement;
	
	baseUserWidget->AddToViewport();
	UUniformGridSlot* BtnSlot = BW_UniformGrid->AddChildToUniformGrid(mapbuttonElement);
	BtnSlot->SetRow(aRow);
	BtnSlot->SetColumn(aColumn);
	baseUserWidget->InitializeMapButton();
	baseUserWidget->positionInGrid = FVector2d(aRow,aColumn);
	
	
	MapButtons[aIndex] = baseUserWidget;
	 
}

void UMapView::SetPlayerPosition(int aRow, int aColumn)
{
	playerIconGridSlot->SetRow(aRow);
	playerIconGridSlot->SetColumn(aColumn);
}

void UMapView::SetPlayerMovementDelegate(AFloorPawn* aPlayerHasMoved)
{
	aPlayerHasMoved->playerhasMovedDelegate.AddDynamic(this,&UMapView::SetPlayerPosition);

}

