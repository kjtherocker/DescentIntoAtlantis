// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuView.h"

#include "AtlantisGameModeBase.h"
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
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UMainMenuView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UMainMenuView::PopMostActiveView  );

	CreateAndBindDelegateOption(EMainMenuStates::Item      ,&UMainMenuView::Item        ,TEXT("Item"));
	CreateAndBindDelegateOption(EMainMenuStates::Skills    ,&UMainMenuView::Skills       ,TEXT("Skills"));
	CreateAndBindDelegateOption(EMainMenuStates::Class     ,&UMainMenuView::Class        ,TEXT("Class"));
	CreateAndBindDelegateOption(EMainMenuStates::Status    ,&UMainMenuView::Status       ,TEXT("Status"));
	CreateAndBindDelegateOption(EMainMenuStates::Option    ,&UMainMenuView::Option       ,TEXT("Option"));

	menuSelections.Add(BW_Item);
	menuSelections.Add(BW_Skills);
	menuSelections.Add(BW_Classes);
	menuSelections.Add(BW_Status);
	menuSelections.Add(BW_Option);

	for(int i = 0 ; i < menuSelections.Num();i++)
	{
		menuSelections[i]->SetBrushColor(unhightlighedColor);
	}

	SetCursorPositionInfo();
	menuSelections[0]->SetBrushColor(highlightedColor);

	UPartyManagerSubsystem* partyManagerSubsystem = persistentGameinstance->partyManagerSubsystem;

	TArray<UPlayerCombatEntity*> activePartyCombatEntityData = partyManagerSubsystem->activePartyEntityData;

	for(int i = 0 ; i < activePartyCombatEntityData.Num();i++)
	{
		SpawnMainMenuStatusElement(activePartyCombatEntityData[i]);
	}
}

void UMainMenuView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = menuSelections.Num()-1;
}

void UMainMenuView::CreateAndBindDelegateOption(EMainMenuStates aTitleState,typename TMemFunPtrType<false, UMainMenuView, void()>::Type InFunc, const FName& FuncName)
{
	FViewSelection newViewSelection;
	newViewSelection.__Internal_AddDynamic(this,InFunc,FuncName);
	MainMenuSelection.Add(aTitleState,newViewSelection );
}

void UMainMenuView::SpawnMainMenuStatusElement(UPlayerCombatEntity* aCombatEntity)
{
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::MainMenuStatusElement));

	UStatusMainMenuElement* baseUserWidget = (UStatusMainMenuElement*)partyStatusHealthbar;
	baseUserWidget->UiInitialize(gameModeBase);
	partyStatusHealthbar->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);
	statusMainMenuElements.Add(baseUserWidget);
	BW_PartyHorizontalBox->AddChild(partyStatusHealthbar);
}


void UMainMenuView::MoveUp()
{
	menuSelections[cursorPosition]->SetBrushColor(unhightlighedColorNoAlpha);
	Super::MoveUp();
	menuSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UMainMenuView::MoveDown()
{
	menuSelections[cursorPosition]->SetBrushColor(unhightlighedColorNoAlpha);
	Super::MoveDown();
	menuSelections[cursorPosition]->SetBrushColor(highlightedColor);
}

void UMainMenuView::ActivateMenuSelection()
{
}

void UMainMenuView::Item()
{
}

void UMainMenuView::Skills()
{
}

void UMainMenuView::Class()
{
}

void UMainMenuView::Status()
{
}

void UMainMenuView::Option()
{
}


