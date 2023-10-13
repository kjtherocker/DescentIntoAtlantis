// Fill out your copyright notice in the Description page of Project Settings.
#include "MapNodeEditorView.h"

void UMapNodeEditorView::InitializeEditor()
{
	BW_MapEventEditorView->InitializeEvent();
}

void UMapNodeEditorView::SetUpMapNodePanel(UMapButtonElement* aMapNodeElement)
{
	SelectedMapButton = aMapNodeElement;
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
			baseUserWidget->InitializeMapButton();;
			baseUserWidget->OnMapButtonClicked.AddDynamic(this,&UMapNodeEditorView::ChangeNodeDirection);
			baseUserWidget->SetMapIcon(static_cast<ECardinalNodeDirections>(i));
			MapButtons.Add(baseUserWidget);
			
		}
	}
	BW_MapEventEditorView->SetComboxBoxIndex(aMapNodeElement);

}

void UMapNodeEditorView::ChangeNodeDirection(UMapButtonElement* aMapNodeElement)
{
	SelectedMapButton->SetMapIcon(aMapNodeElement->CurrentNodeDirection);
}
