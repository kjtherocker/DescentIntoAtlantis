// Fill out your copyright notice in the Description page of Project Settings.


#include "MapView.h"

#include "FloorFactory.h"
#include "FloorPlayerPawn.h"
#include "LevelGeneratorUtilityWidget.h"
#include "LevelProgressionSubsystem.h"
#include "MapButtonElement.h"
#include "MapPlayerIconElement.h"
#include "PersistentGameinstance.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/WrapBox.h"
#include "DesentIntoAtlantis/EFloorID.h"

void UMapView::GenerateLevel(UFloorFactory* aFloorFactory,EFloorID aFloorIdentifier)
{
	FloorIdentifier = aFloorIdentifier;
	if(FloorIdentifier == EFloorID::None)
	{
		return;
	}

	levelProgressionSubsystem = persistentGameinstance->levelProgressionSubsystem;
	floorFactory = aFloorFactory;
	CurrentFloor = floorFactory->floorDictionary[FloorIdentifier];
	levelProgressionSubsystem->SetCurrentMapFogOfWar(CurrentFloor);
	if(MapButtons.Num() <= 0)
	{
		CurrentFloor->Initialize();
		CreatePlayerGrid(CurrentFloor);
	}
}

void UMapView::CreateFullGrid(UFloorBase* aFloor)
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
			MapButtons[LevelIndex]->SetMapIcon(static_cast<ECardinalNodeDirections>(aFloor->floorData.floorBlueprint[LevelIndex].floorDirection));
			MapButtons[LevelIndex]->SetEventIcon(false);
			//If there is no node then continue
			if (tempfloor->floorData.floorBlueprint[LevelIndex].floorDirection == (short)ECardinalNodeDirections::Empty)
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

void UMapView::CreatePlayerGrid(UFloorBase* aFloor)
{
	UMapButtonElement* Object = nullptr;
	currentFloor = aFloor;
	UFloorBase* tempfloor = aFloor;


	
	
	MapButtons.Init(Object,tempfloor->GridDimensionX * tempfloor->GridDimensionY );
	for (int x = 0; x <= MAP_NODE_PLAYER_GRID_SIZE * 2; x++)
	{
		for (int y = 0; y <= MAP_NODE_PLAYER_GRID_SIZE * 2; y++)
		{
			int LevelIndex = aFloor->GetIndex(x, y);
			
			SpawnMapButton(x , y,LevelIndex );
			MapButtons[LevelIndex]->SetMapIcon(static_cast<ECardinalNodeDirections>(0));
			MapButtons[LevelIndex]->SetEventIcon(false);
			//If there is no node then continue
			if (tempfloor->floorData.floorBlueprint[LevelIndex].floorDirection == (short)ECardinalNodeDirections::Empty)
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
	//for (TPair<int, FFloorEventData>& floorEvent : floorFactory->floorEventData)
	//{
	//	FFloorEventData floorEventData = floorEvent.Value;
	//	if(floorEventData.floorIdentifier == tempfloor->floorData.floorIdentifier)
	//	{
	//		int LevelIndex = tempfloor->GetIndex(floorEventData.positionInGrid.X, floorEventData.positionInGrid.Y);
	//		MapButtons[LevelIndex]->SetEventIcon(true);
	//		MapButtons[LevelIndex]->SetFloorEvent(floorEventData,floorEvent.Key);
	//	}
	//}

	UUserWidget* mapbuttonElement = CreateWidget(this,BP_MapPlayerIconElement );

	mapPlayerIconElement = (UMapPlayerIconElement*)mapbuttonElement;
	
	playerIconGridSlot = BW_UniformGrid2->AddChildToUniformGrid(mapPlayerIconElement);
	int playerX = (MAP_NODE_PLAYER_GRID_SIZE ) ;
	int playerY = (MAP_NODE_PLAYER_GRID_SIZE ) ;
	playerIconGridSlot->SetRow(playerX);
	playerIconGridSlot->SetColumn(playerY);

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

void UMapView::SetPlayerPosition(FCompleteFloorPawnData aFloorPawnData)
{
	UFloorBase* tempfloor = currentFloor;

	FVector2D playerPosition = aFloorPawnData.currentNodePositionInGrid;
	
	int minX = playerPosition.X - MAP_NODE_PLAYER_GRID_SIZE;
	//if(minX < 0)
	//{
	//	minX = 0;
	//}
	int minY = playerPosition.Y - MAP_NODE_PLAYER_GRID_SIZE;
	//if(minY < 0)
	//{
	//	minY = 0;
	//}
	int maxX = playerPosition.X + MAP_NODE_PLAYER_GRID_SIZE;
	//if(maxX >= tempfloor->GridDimensionX)
	//{
	//	maxX = tempfloor->GridDimensionX;
	//}
	int maxY = playerPosition.Y + MAP_NODE_PLAYER_GRID_SIZE;
	//if(maxY >= tempfloor->GridDimensionY)
	//{
	//	maxY = tempfloor->GridDimensionY;
	//}

	int actualGridPositionX = 0;
	int actualGridPositionY = 0;
	int currentPlayerNodeIndex = tempfloor->GetIndex(playerPosition.X, playerPosition.Y);

	levelProgressionSubsystem->RevealMapNode(currentPlayerNodeIndex);

	
	for (int Column = minY; Column <= maxY; Column++)
	{
		actualGridPositionY = 0;
		for (int Rows = minX; Rows <= maxX; Rows++)
		{
			if( Column < 0 || Rows < 0 || Column >= tempfloor->GridDimensionX || Rows >= tempfloor->GridDimensionY)
			{
				MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetMapIcon(static_cast<ECardinalNodeDirections>(16));
				MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetEventIcon(false);
			}
			else
			{
				int LevelIndex = tempfloor->GetIndex(Rows, Column);
				if(levelProgressionSubsystem->HasNodeBeenRevealed(LevelIndex))
				{
					MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetMapIcon
					(static_cast<ECardinalNodeDirections>(tempfloor->floorData.floorBlueprint[LevelIndex].floorDirection));
					MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetEventIcon(false);
				}
				else
				{
					MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetMapIcon(static_cast<ECardinalNodeDirections>(0));
					MapButtons[ tempfloor->GetIndex(actualGridPositionX, actualGridPositionY)]->SetEventIcon(false);
				}
			}
			actualGridPositionY += 1;
		}
		actualGridPositionX += 1;
	}
}

void UMapView::SetPlayerRotation(FCompleteFloorPawnData aPlayerFacingDirection)
{
	mapPlayerIconElement->SetPlayedIconBasedOnDirection(aPlayerFacingDirection.currentFacingDirection);
}

void UMapView::SetFloorPawnDelegates(AFloorPlayerPawn* aPlayerHasMoved)
{
	aPlayerHasMoved->playerhasMovedDelegate.AddDynamic(this,&UMapView::SetPlayerPosition);
	aPlayerHasMoved->playerDirectionHasChanged.AddDynamic(this,&UMapView::SetPlayerRotation);

}

