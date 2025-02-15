// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelGeneratorUtilityWidget.h"

#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/HorizontalBox.h"
#include "Components/WrapBox.h"
#include "MapNodeEditorView.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"



void ULevelGeneratorUtilityWidget::NativeConstruct()
{
	Super::NativeOnInitialized();
	if(dataTables[EDataTableTypes::Floor] != nullptr
			   &&dataTables[EDataTableTypes::FloorEvent] != nullptr)
	{
		floorFactory = NewObject<UFloorFactory>();
		floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent],dataTables[EDataTableTypes::AllFloorNodeTileSet]);
	}
	
	BW_GenerateButton->OnClicked.AddDynamic(this, &ULevelGeneratorUtilityWidget::GenerateLevel);
	BW_SaveButton    ->OnClicked.AddDynamic(this, &ULevelGeneratorUtilityWidget::SaveCurrentMap);
	BW_ResetButton    ->OnClicked.AddDynamic(this, &ULevelGeneratorUtilityWidget::ResetAllNodes);
	BW_MapNodeEditor ->BW_MapEventEditorView->onFloorEventSave.AddDynamic(this,&ULevelGeneratorUtilityWidget::SaveCurrentEvent);
	BW_MapNodeEditor ->BW_MapEventEditorView->onFloorEventDeletion.AddDynamic(this,&ULevelGeneratorUtilityWidget::DeleteEvent);
	BW_MapNodeEditor ->BW_MapEventEditorView->onFloorEventCreation.AddDynamic(this,&ULevelGeneratorUtilityWidget::CreateEvent);

	InitializeComboBox(BW_LevelSelector  , FLOOR_ENUM);
	BW_LevelSelector->SetSelectedIndex(0);
	BW_MapNodeEditor->InitializeEditor();
}

void ULevelGeneratorUtilityWidget::GenerateLevel()
{
	int testo = 0;

	BW_TitleText->SetText(FText(FText::FromString(BW_LevelSelector->GetSelectedOption())));
	FloorIdentifier = (EFloorIdentifier)BW_LevelSelector->GetSelectedIndex();
	if(FloorIdentifier == EFloorIdentifier::None)
	{
		return;
	}
	
	CurrentFloor = floorFactory->floorDictionary[FloorIdentifier];
	if(MapButtons.Num() <= 0)
	{
		CurrentFloor->Initialize();
		CreateGrid(CurrentFloor);
	}
}

void ULevelGeneratorUtilityWidget::CreateGrid(UFloorBase* aFloor)
{
	UMapButtonElement* Object = nullptr;
	UFloorBase* tempfloor = aFloor;
	
	MapButtons.Init(Object,tempfloor->GridDimensionX * tempfloor->GridDimensionY );
	for (int Column = 0; Column < tempfloor->GridDimensionX; Column++)
	{
		for (int Row = 0; Row < tempfloor->GridDimensionY; Row++)
		{
			int LevelIndex = aFloor->GetIndex(Row, Column);
			SpawnMapButton(Row , Column,LevelIndex );
			MapButtons[LevelIndex]->InitializeMapButton(aFloor->floorData.floorBlueprint[LevelIndex]);
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
}

void ULevelGeneratorUtilityWidget::SpawnMapButton(int aRow, int aColumn, int aIndex)
{
	//Setting new Positon
	FVector2D  PositionOffset;
	PositionOffset.Set(MAP_NODE_POSITION_OFFSET * aRow, MAP_NODE_POSITION_OFFSET * aColumn);
	FVector2D startPosition = FVector2D(15,188);
	FVector2D  ActorFinalSpawnPoint =  startPosition + PositionOffset ;

	UUserWidget* mapbuttonElement = CreateWidget(this,MapButtonElement );

	UMapButtonElement* baseUserWidget = (UMapButtonElement*)mapbuttonElement;
	baseUserWidget->AddToViewport();
	BW_HorizontalBox->AddChild(mapbuttonElement);
	baseUserWidget->InitializeMapButton();
	baseUserWidget->SetPositionInViewport(ActorFinalSpawnPoint,false);
	baseUserWidget->positionInGrid = FVector2d(aRow,aColumn);

	baseUserWidget->OnMapButtonClicked.AddDynamic(this,&ULevelGeneratorUtilityWidget::ActivateMapNodeEditor);
	
	MapButtons[aIndex] = baseUserWidget;
}

void ULevelGeneratorUtilityWidget::RefreshGridGimmicks()
{
	UFloorBase* tempfloor = CurrentFloor;

	//Resetting all of the event icons 
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = tempfloor->GetIndex(x, y);
			MapButtons[LevelIndex]->SetEventIcon(false);
		}
	}

	if(dataTables[EDataTableTypes::Floor] != nullptr
		   &&dataTables[EDataTableTypes::FloorEvent] != nullptr)
	{
		floorFactory = NewObject<UFloorFactory>();
		floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent],dataTables[EDataTableTypes::AllFloorNodeTileSet]);
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
}

void ULevelGeneratorUtilityWidget::ResetAllNodes()
{
	for(int i = 0 ;i < MapButtons.Num();i++)
	{
		MapButtons[i]->worldGenFloorNodeInfo.floorDirection = 0;
		MapButtons[i]->worldGenFloorNodeInfo.TileSets       = ETileSets::Prison;
		MapButtons[i]->worldGenFloorNodeInfo.TileVariants   = ETileVariants::Default;
		
		MapButtons[i]->CurrentNodeDirection = ECardinalNodeDirections::Empty;
		MapButtons[i]->SetMapIcon(ECardinalNodeDirections::Empty);
	}

	RefreshGridGimmicks();
}

void ULevelGeneratorUtilityWidget::ActivateMapNodeEditor(UMapButtonElement* aMapButtonElement)
{
	BW_MapNodeEditor->SetUpMapNodePanel(aMapButtonElement);
}

void ULevelGeneratorUtilityWidget::SaveCurrentMap()
{
	TArray<FWorldGenerationFloorNodeInfo> newMapData;
	for(int i = 0 ;i < MapButtons.Num();i++)
	{
		newMapData.Add(MapButtons[i]->worldGenFloorNodeInfo);
	}
	
	floorFactory->OverwriteFloorMapData(FloorIdentifier,newMapData);
}

void ULevelGeneratorUtilityWidget::SaveCurrentEvent( int aFloorEventDataTableIndex, FFloorEventData& aNewEventData)
{
	aNewEventData.floorIdentifier = FloorIdentifier;
	floorFactory->OverwriteFloorEventData(aFloorEventDataTableIndex,aNewEventData);
	//floorFactory->CreateNewFloorEventRow(aNewEventData);
	RefreshGridGimmicks();
}

void ULevelGeneratorUtilityWidget::CreateEvent(FFloorEventData& aNewEventData)
{
	aNewEventData.floorIdentifier = FloorIdentifier;
	floorFactory->CreateNewFloorEventRow(aNewEventData);
	RefreshGridGimmicks();
}

void ULevelGeneratorUtilityWidget::DeleteEvent(int aFloorEventDataTableIndex)
{
	floorFactory->DeleteFloorEventRow(aFloorEventDataTableIndex);
	RefreshGridGimmicks();
}

TArray<FName> ULevelGeneratorUtilityWidget::GetAllEnumNames(UEnum* EnumType)
{
	TArray<FName> EnumNames;

	if (EnumType)
	{
		for (int32 i = 0; i < EnumType->NumEnums(); i++)
		{
			EnumNames.Add(FName(EnumType->GetNameStringByIndex(i)));
		}
	}

	return EnumNames;
}

void ULevelGeneratorUtilityWidget::InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName)
{
	UEnum* EnumType = FindObject<UEnum>(ANY_PACKAGE, *aEnumName, true); // Changed from GetOuter() to ANY_PACKAGE
    
	if (EnumType) // Check if EnumType is not nullptr
	{
		TArray<FName> enumNames = GetAllEnumNames(EnumType);

		if (enumNames.Num() > 0) // Check if enumNames is not empty
		{
			for (int32 i = 0; i < enumNames.Num(); ++i)
			{
				FString EnumName = enumNames[i].ToString();
				aCombobox->AddOption(EnumName);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("enumNames array is empty. Enum Type may not exist or is defined incorrectly."));
		}
	} 
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find enum type: %s"), *aEnumName);
	}
	
}
