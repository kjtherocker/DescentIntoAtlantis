// Fill out your copyright notice in the Description page of Project Settings.
#include "MapNodeEditorView.h"

#include "FloorFactory.h"

void UMapNodeEditorView::InitializeEditor()
{
	BW_MapEventEditorView->InitializeEvent();

	InitializeComboBox(BW_TileSet,TILE_SETS_ENUM_NAME);
	InitializeComboBox(BW_Variant,TILE_VARIANT_ENUM_NAME);
}

void UMapNodeEditorView::SetUpMapNodePanel(UMapButtonElement* aMapNodeElement)
{
	BW_TileSet->OnSelectionChanged.Clear();
	BW_Variant->OnSelectionChanged.Clear();
	
	SelectedMapButton = aMapNodeElement;
	FWorldGenerationFloorNodeInfo WorldGenerationFloorNodeInfo = SelectedMapButton->worldGenFloorNodeInfo;
	if(MapButtons.Num() == 0)
	{
		TMap<ECardinalNodeDirections, UTexture2D*> icons = aMapNodeElement->MapIcons;
		for(int i = 0 ; i < icons.Num(); i++)
		{
			FVector2D  PositionOffset;
			PositionOffset.Set(MAP_NODE_POSITION_OFFSET * i, 0);
		
			UUserWidget* mapbuttonElement = CreateWidget(this,MapButtonElement );

			UMapButtonElement* baseUserWidget = (UMapButtonElement*)mapbuttonElement;
			baseUserWidget->SetPositionInViewport(PositionOffset,false);
			baseUserWidget->AddToViewport();
			BW_MapNodePanel->AddChild(baseUserWidget);
			baseUserWidget->SetEventIcon(false);
			baseUserWidget->InitializeMapButton();
			baseUserWidget->OnMapButtonClicked.AddDynamic(this,&UMapNodeEditorView::ChangeNodeDirection);
			baseUserWidget->SetMapIcon((ECardinalNodeDirections)i);
			MapButtons.Add(baseUserWidget);
			
		}
	}
	BW_MapEventEditorView->SetComboxBoxIndex(aMapNodeElement);

	int Xvalue = 	aMapNodeElement->positionInGrid.X;
	int Yvalue = 	aMapNodeElement->positionInGrid.Y;

	FString mapPosition = FString::FromInt( Xvalue) + "," + FString::FromInt( Yvalue);
	BW_MapIndex->SetText(FText::FromString(mapPosition));
	
	BW_TileSet->SetSelectedIndex((int)WorldGenerationFloorNodeInfo.TileSets);
	BW_Variant->SetSelectedIndex((int)WorldGenerationFloorNodeInfo.TileVariants);
	BW_TileSet->OnSelectionChanged.AddDynamic(this,&UMapNodeEditorView::SetTileSet);
	BW_Variant->OnSelectionChanged.AddDynamic(this,&UMapNodeEditorView::SetTileVariant);
}

TArray<FName> UMapNodeEditorView::GetAllEnumNames(UEnum* EnumType)
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

void UMapNodeEditorView::ChangeNodeDirection(UMapButtonElement* aMapNodeElement)
{
	SelectedMapButton->SetMapIcon(aMapNodeElement->CurrentNodeDirection);
}

void UMapNodeEditorView::InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName)
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

void UMapNodeEditorView::SetTileSet(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	SelectedMapButton->worldGenFloorNodeInfo.TileSets = (ETileSets)BW_TileSet->GetSelectedIndex();
}

void UMapNodeEditorView::SetTileVariant(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	SelectedMapButton->worldGenFloorNodeInfo.TileVariants = (ETileVariants)BW_Variant->GetSelectedIndex();
}
