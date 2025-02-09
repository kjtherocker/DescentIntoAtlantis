// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadView.h"

#include "AtlantisGameModeBase.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "SaveSlotElement.h"
#include "Components/Border.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Kismet/GameplayStatics.h"

void ULoadView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &ULoadView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &ULoadView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &ULoadView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &ULoadView::PopMostActiveView  );

	SaveManagerSubsystem = persistentGameinstance->saveManagerSubsystem;
	//USaveGameData* autoSave = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("AutoSave"),0));
	//SpawnSaveSlots(autoSave);

	for(int i = 1 ; i <= 10;i++)
	{
		FString slotName = FString::FromInt(i);
		if(UGameplayStatics::DoesSaveGameExist(slotName,0))
		{
			USaveGameData* saveGame = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(slotName,0));
			SaveGameDatas.Add(saveGame);
		}
		else
		{
			SaveGameDatas.Add(nullptr);
		}
	}

	for(int i = 0 ; i <= AMOUNT_OF_SAVE_SLOTS;i++)
	{
		SpawnSaveSlots(SaveGameDatas[i],FString::FromInt(i+ 1));
	}
	
	SetDefaultMenuState();

}

void ULoadView::SpawnSaveSlots(USaveGameData* aSaveGameData, FString aSlotName)
{

	UUserWidget* saveSlot = CreateWidget(this, InGameHUD->GetElement(EViewElements::SaveSlotElement));

	USaveSlotElement* baseUserWidget = (USaveSlotElement*)saveSlot;
	
	baseUserWidget->UiInitialize(gameModeBase);
	saveSlot->AddToViewport();
	baseUserWidget->SetupSaveSlot(aSaveGameData,aSlotName);
	BW_VerticalBox->AddChild(baseUserWidget);
	UVerticalBoxSlot* NewSlot = BW_VerticalBox->AddChildToVerticalBox(baseUserWidget);

	// Set the padding for the new slot
	if (NewSlot)
	{
		// Set padding values (left, top, right, bottom)
		NewSlot->SetPadding(FMargin(0, 0, 0, 20));
	}
	
	SaveSlots.Add(baseUserWidget);
}

void ULoadView::LoadGame()
{
	if(!SaveSlots[cursorPosition]->isSaveSlotFilled)
	{
		return;
	}
	
	SaveManagerSubsystem->LoadSaveDataAndTransitionToMap(SaveSlots[cursorPosition]->saveSlotName);
}

void ULoadView::ReSetupSaveFilesInRange(int aMin, int aMax)
{

	for(int i = 2; i >= 0;i--)
	{
		SaveSlots[i]->RemoveFromParent();
		SaveSlots.RemoveAt(i);
	}
	
    for(int i = aMin ; i <= aMax;i++)
    {
    	SpawnSaveSlots(SaveGameDatas[i],FString::FromInt(i+ 1));
    
    }
}

void ULoadView::MoveUp()
{
	SaveSlots[cursorPosition]->ResetTranslation();
	cursorPosition--;
	if(cursorPosition < minCursorPosition)
	{
		minshownSaves--;
		if(minshownSaves <= MIN_SAVES)
		{
			minshownSaves = MIN_SAVES ;
		}
		maxshownSaves--;
		if(maxshownSaves < MIN_SAVES + AMOUNT_OF_SAVE_SLOTS)
		{
			maxshownSaves++;
		}
		cursorPosition = 0;
		ReSetupSaveFilesInRange(minshownSaves, maxshownSaves);
	}
	SaveSlots[cursorPosition]->MoveSlotRight();
}

void ULoadView::MoveDown()
{
	SaveSlots[cursorPosition]->ResetTranslation();
	cursorPosition++;
	if(cursorPosition > maxCursorPosition)
	{
		minshownSaves++;
		if(minshownSaves >= MAX_SAVES - AMOUNT_OF_SAVE_SLOTS)
		{
			minshownSaves--;
		}
		maxshownSaves++;
		if(maxshownSaves  >= MAX_SAVES)
		{
			maxshownSaves--;
		}
		cursorPosition = 2;
		ReSetupSaveFilesInRange(minshownSaves, maxshownSaves);
	}
	SaveSlots[cursorPosition]->MoveSlotRight();
}

void ULoadView::ActivateMenuSelection()
{
	LoadGame();
	//gameModeBase->InGameHUD->PopAllActiveViews();
}

void ULoadView::SetDefaultMenuState()
{
	minshownSaves = 0;
	maxshownSaves = 2;
	for(int i = 0 ; i < SaveSlots.Num();i++)
	{
		SaveSlots[i]->ResetTranslation();
	}

	SetCursorPositionInfo();
	SaveSlots[0]->MoveSlotRight();
}

void ULoadView::SetCursorPositionInfo()
{
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = SaveSlots.Num()-1;
}




