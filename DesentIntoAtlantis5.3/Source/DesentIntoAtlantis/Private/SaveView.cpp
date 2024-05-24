// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveView.h"

#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "SaveSlotElement.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void USaveView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USaveView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USaveView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USaveView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &USaveView::PopMostActiveView  );

	SaveManagerSubsystem = persistentGameinstance->saveManagerSubsystem;
	USaveGameData* autoSave = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("AutoSave"),0));
	SpawnSaveSlots(autoSave);

	for(int i = 1 ; i < 2;i++)
	{
		USaveGameData* saveGame = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("1"),0));
		SpawnSaveSlots(saveGame);
	}
	
}

void USaveView::SpawnSaveSlots(USaveGameData* aSaveGameData)
{

	UUserWidget* saveSlot = CreateWidget(this, InGameHUD->GetElement(EViewElements::SaveSlotElement));

	USaveSlotElement* baseUserWidget = (USaveSlotElement*)saveSlot;
	
	baseUserWidget->UiInitialize(gameModeBase);
	saveSlot->AddToViewport();
	baseUserWidget->SetupSaveSlot(aSaveGameData,SaveSlots.Num());
	BW_VerticalBox->AddChild(baseUserWidget);
	
	SaveSlots.Add(baseUserWidget);
}

void USaveView::SaveGame()
{
	SaveManagerSubsystem->SaveGameInSlot(cursorPosition + 1);
}

void USaveView::ActivateMenuSelection()
{
	SaveGame();
}
