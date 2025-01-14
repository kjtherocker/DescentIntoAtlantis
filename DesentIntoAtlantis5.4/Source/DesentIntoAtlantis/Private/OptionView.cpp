// Fill out your copyright notice in the Description page of Project Settings.


#include "OptionView.h"

#include "AtlantisGameModeBase.h"

void UOptionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UOptionView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UOptionView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UOptionView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UOptionView::PopMostActiveView  );

	//Goes In this order

	BW_Load->ViewSelection.AddDynamic(this, &UOptionView::Load);
	highlightElements.Add(BW_Load);
	BW_Load->SetMainText("Load");
	BW_Save->ViewSelection.AddDynamic(this, &UOptionView::Save);
	highlightElements.Add(BW_Save);
	BW_Save->SetMainText("Save");
	BW_Setting->ViewSelection.AddDynamic(this, &UOptionView::Setting);
	highlightElements.Add(BW_Setting);
	BW_Setting->SetMainText("Setting");
	BW_Exit->ViewSelection.AddDynamic(this, &UOptionView::Exit);
	highlightElements.Add(BW_Exit);
	BW_Exit->SetMainText("Exit");

	
	SetDefaultMenuState();
}



void UOptionView::Load()
{
	gameModeBase->InGameHUD->PopAllActiveViews();
	gameModeBase->InGameHUD->PushView(EViews::LoadView,    EUiType::ActiveUi);
}

void UOptionView::Save()
{
	gameModeBase->InGameHUD->PopAllActiveViews();
	gameModeBase->InGameHUD->PushView(EViews::SaveView,    EUiType::ActiveUi);
}

void UOptionView::Setting()
{

}

void UOptionView::Exit()
{
}
