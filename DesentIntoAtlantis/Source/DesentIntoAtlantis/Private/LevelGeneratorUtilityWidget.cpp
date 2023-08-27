// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelGeneratorUtilityWidget.h"

#include "DesentIntoAtlantis/EFloorIdentifier.h"

void ULevelGeneratorUtilityWidget::NativeConstruct()
{
	Super::NativeOnInitialized();

	BW_GenerateButton->OnClicked.AddDynamic(this, &ULevelGeneratorUtilityWidget::GenerateLevel);
	static UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EFloorIdentifier"), true);


	floorFactory = NewObject<UFloorFactory>();
	if(dataTables[EDataTableTypes::Floor] != nullptr
			   &&dataTables[EDataTableTypes::FloorEvent] != nullptr)
	{
		floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent]);
	}

	for (int32 EnumIndex = 0; EnumIndex < EnumPtr->NumEnums(); ++EnumIndex)
	{

		FString EnumName = EnumPtr->GetNameStringByIndex(EnumIndex);
		//FloorNames.Add(EnumPtr->enum)
		// Add the enum value to the ComboBox
			//	FloorNames.Add(EnumIndex,FName(EnumName));
		BW_ComboBoxKey->AddOption( FName(EnumName));
	}

}

void ULevelGeneratorUtilityWidget::GenerateLevel()
{
	int testo = 0;

	BW_TitleText->SetText(FText(FText::FromString(BW_ComboBoxKey->GetSelectedOption().ToString())));
	BW_MapButtonElement->SetMapIcon(ECardinalNodeDirections::UpLeft);
	
}

void ULevelGeneratorUtilityWidget::CreateGrid(UFloorBase* aFloor)
{
	UFloorBase* tempfloor = aFloor;
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = aFloor->GetIndex(x, y);
			//If there is no node then continue
			if (tempfloor->floorData.floorBlueprint[LevelIndex] == (short)ECardinalNodeDirections::Empty)
			{
				continue;
			}

		//SpawnFloorNode(x , y,LevelIndex );
		//floorNodes[LevelIndex]->SetWalkableDirections(aFloor->floorData.floorBlueprint[LevelIndex]);
		//FVector2D positionInGrid = FVector2D(x,y);
		//if(aFloor->floorEventData.Contains(positionInGrid))
		//{
		//	floorNodes[LevelIndex]->hasFloorEvent = true;
		//	floorNodes[LevelIndex]->floorEventHasBeenTriggeredEvent = gameModeBase->floorEventManager->EventHasBeenTriggered;
		//	SpawnFloorEnemyPawn(positionInGrid);
		//}
		}
	}
	

}