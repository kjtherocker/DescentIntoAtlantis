// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectionView.h"

#include "Components/VerticalBox.h"

void UClassSelectionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
}

void UClassSelectionView::ActivateClassSelectionView(UPlayerCombatEntity* aPlayerCombatEntity,
                                                     UPartyManagerSubsystem* aPartyManagerSubsystem, EClassSlot aClassSlot)
{

	UPersistentGameinstance* test = persistentGameinstance;
	playerCombatEntity = aPlayerCombatEntity;
	partyManagerSubsystem = aPartyManagerSubsystem;
	classSlot = aClassSlot;

	BW_ClassDetailedView->UiInitialize(gameModeBase);
	BW_ClassDetailedView->SetInGameHud(InGameHUD);
	BW_ClassDetailedView->ReturnToPreviousMenu.AddDynamic(this,&UClassSelectionView::ActivateInput);

	ActivateInput();
	
	classHandler = aPlayerCombatEntity->classHandler;

	for (auto Element : classHandler->unlockedClasses)
	{
		CreateClassHighlightElement(Element.Value->completeClassData);
	}
	
	SetHighLightElements((TArray<UBaseHighlightElement*>)ClassSelectionElements);
	SetDefaultMenuState();
}

void UClassSelectionView::ActivateInput()
{
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UClassSelectionView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UClassSelectionView::MoveDown  );
	InputComponent->BindAction("Right"      ,IE_Pressed ,this, &UClassSelectionView::MoveRight  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UClassSelectionView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UClassSelectionView::PopMostActiveView  );
}

void UClassSelectionView::SetClassDetailedView(UClassSelectionElement* aClassSelectionElement)
{
	BW_ClassDetailedView->SetDetailedClassView(classHandler->unlockedClasses[aClassSelectionElement->GetClassID()]->completeClassData,
	playerCombatEntity,persistentGameinstance,classSlot);
}

void UClassSelectionView::CreateClassHighlightElement(FCompleteClassData aClassData)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::ClassSelectionElement));

	UClassSelectionElement* baseUserWidget = (UClassSelectionElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	ClassSelectionElements.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	BW_VerticalEquipBox->AddChild(skillBarElement);
	
	baseUserWidget->SetClassSelectionElement(aClassData);
	baseUserWidget->ViewSelection.AddDynamic(this,&UClassSelectionView::ClassSelected );
	
}

void UClassSelectionView::MoveRight()
{
	BW_ClassDetailedView->ActivateInput();
}

void UClassSelectionView::MoveUp()
{
	Super::MoveUp();
	SetClassDetailedView(ClassSelectionElements[cursorPosition]);
}

void UClassSelectionView::MoveDown()
{
	Super::MoveDown();
	SetClassDetailedView(ClassSelectionElements[cursorPosition]);

}

void UClassSelectionView::SetDefaultMenuState()
{
	Super::SetDefaultMenuState();

	SetClassDetailedView(ClassSelectionElements[0]);
}

void UClassSelectionView::ClassSelected()
{
	classHandler->SetClass(ClassSelectionElements[cursorPosition]->GetClassID(),classSlot);
	characterChange.Broadcast();
	
	PopMostActiveView();
}
	

