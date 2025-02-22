// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuView.h"

#include "AtlantisGameModeBase.h"
#include "EquipMenuView.h"
#include "PartyHealthbarElement.h"
#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"
#include "StatusMainMenuElement.h"
#include "Components/Border.h"
#include "Components/HorizontalBox.h"

void UMainMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Left"      ,IE_Pressed ,this, &UMainMenuView::MoveUp  );
	InputComponent->BindAction("Right"    ,IE_Pressed ,this, &UMainMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UMainMenuView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UMainMenuView::PopMostActiveView  );

	BW_Item->ViewSelection.AddDynamic(this,&UMainMenuView::Item);
	highlightElements.Add(BW_Item);
	BW_Item->SetMainText(BW_Item->WrapTextInStyle("Item",ETextStyle::TitleStyling));
	
	BW_Skills->ViewSelection.AddDynamic(this,&UMainMenuView::Skills);
	highlightElements.Add(BW_Skills);
	BW_Skills->SetMainText(BW_Skills->WrapTextInStyle("Skill",ETextStyle::TitleStyling));
	
	BW_Classes->ViewSelection.AddDynamic(this,&UMainMenuView::Class);
	highlightElements.Add(BW_Classes);
	BW_Classes->SetMainText(BW_Classes->WrapTextInStyle("Equip",ETextStyle::TitleStyling));
	
	BW_Status->ViewSelection.AddDynamic(this,&UMainMenuView::Status);
	highlightElements.Add(BW_Status);
	BW_Status->SetMainText(BW_Status->WrapTextInStyle("Status",ETextStyle::TitleStyling));
	
	BW_Option->ViewSelection.AddDynamic(this,&UMainMenuView::Option);
	highlightElements.Add(BW_Option);
	BW_Option->SetMainText(BW_Option->WrapTextInStyle("Option",ETextStyle::TitleStyling));
	
	UPartyManagerSubsystem* partyManagerSubsystem = persistentGameinstance->partyManagerSubsystem;


	BW_MainMenuPlayerStatusView->UiInitialize(gameModeBase);
	BW_MainMenuPlayerStatusView->InitializeStatusView(partyManagerSubsystem->ReturnActivePartySlots(),persistentGameinstance);

	
	TArray<UPlayerCombatEntity*> activePartyCombatEntityData = partyManagerSubsystem->ReturnActiveParty();

	for (auto ActivePartyCombatEntityData : activePartyCombatEntityData)
	{
		SpawnMainMenuStatusElement(ActivePartyCombatEntityData);
	}

	SetDefaultMenuState();
}



void UMainMenuView::SpawnMainMenuStatusElement(UPlayerCombatEntity* aCombatEntity)
{
	if(aCombatEntity == nullptr)
	{
		return;
	}
	
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::MainMenuStatusElement));

	UStatusMainMenuElement* baseUserWidget = (UStatusMainMenuElement*)partyStatusHealthbar;
	baseUserWidget->UiInitialize(gameModeBase);
	partyStatusHealthbar->AddToViewport();

	baseUserWidget->InGameHUD = InGameHUD;
	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);

	BW_PartyHorizontalBox->AddChild(partyStatusHealthbar);
}

void UMainMenuView::Item()
{
}

void UMainMenuView::Skills()
{
}

void UMainMenuView::Class()
{
	BW_MainMenuPlayerStatusView->ActivateInput();
}

void UMainMenuView::Status()
{
	//gameModeBase->InGameHUD->PushView(EViews::OptionView,    EUiType::ActiveUi);
}

void UMainMenuView::Option()
{
	gameModeBase->InGameHUD->PushView(EViews::OptionView,    EUiType::ActiveUi);
}


