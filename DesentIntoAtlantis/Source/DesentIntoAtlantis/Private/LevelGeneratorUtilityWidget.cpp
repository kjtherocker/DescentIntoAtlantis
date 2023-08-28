// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelGeneratorUtilityWidget.h"

#include "Components/Border.h"
#include "Components/CanvasPanel.h"
#include "Components/HorizontalBox.h"
#include "Components/WrapBox.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"

void ULevelGeneratorUtilityWidget::NativeConstruct()
{
	Super::NativeOnInitialized();

	BW_GenerateButton->OnClicked.AddDynamic(this, &ULevelGeneratorUtilityWidget::GenerateLevel);
	//static UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EFloorIdentifier"), true);

	
	if(dataTables[EDataTableTypes::Floor] != nullptr
			   &&dataTables[EDataTableTypes::FloorEvent] != nullptr)
	{
		floorFactory = NewObject<UFloorFactory>();
		floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent]);
	}

	//for (int32 EnumIndex = 0; EnumIndex < EnumPtr->NumEnums(); ++EnumIndex)
	//{
//
	//	FString EnumName = EnumPtr->GetNameStringByIndex(EnumIndex);
	//	//FloorNames.Add(EnumPtr->enum)
	//	// Add the enum value to the ComboBox
	//		//	FloorNames.Add(EnumIndex,FName(EnumName));
	//	BW_ComboBoxKey->AddOption( FName(EnumName));
	//}

}

void ULevelGeneratorUtilityWidget::GenerateLevel()
{
	int testo = 0;

	BW_TitleText->SetText(FText(FText::FromString(BW_ComboBoxKey->GetSelectedOption().ToString())));
	//BW_MapButtonElement->SetMapIcon(ECardinalNodeDirections::UpLeft);

	floorFactory->floorDictionary[EFloorIdentifier::Floor1]->Initialize();
	CreateGrid(floorFactory->floorDictionary[EFloorIdentifier::Floor1]);
	
}

void ULevelGeneratorUtilityWidget::CreateGrid(UFloorBase* aFloor)
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
	

}

void ULevelGeneratorUtilityWidget::SpawnMapButton(int aRow, int aColumn, int aIndex)
{
	//Setting new Positon
	FVector2D  PositionOffset;
	PositionOffset.Set(50 * aRow, 50 * aColumn);
	FVector2D startPosition = FVector2D(15,188);
	FVector2D  ActorFinalSpawnPoint =  startPosition + PositionOffset ;

	UUserWidget* skillBarElement = CreateWidget(this,MapButtonElement );

	UMapButtonElement* baseUserWidget = (UMapButtonElement*)skillBarElement;
	baseUserWidget->AddToViewport();
	BW_HorizontalBox->AddChild(skillBarElement);
	baseUserWidget->SetPositionInViewport(ActorFinalSpawnPoint,false);

	MapButtons[aIndex] = baseUserWidget;
}