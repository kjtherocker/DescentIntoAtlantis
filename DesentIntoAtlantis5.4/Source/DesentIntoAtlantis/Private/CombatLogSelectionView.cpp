// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogSelectionView.h"

#include "CombatLogDetailedView.h"
#include "CombatLogElement.h"
#include "CombatLogSimplifiedView.h"
#include "CombatLog_Full_Data.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"


void UCombatLogSelectionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCombatLogSelectionView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCombatLogSelectionView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCombatLogSelectionView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UCombatLogSelectionView::PopMostActiveView  );

}

void UCombatLogSelectionView::SetCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas)
{
	for (FCombatLog_Full_Data& combatLog : CombatLog_Base_Datas)
	{
		CreateCombatLogElement(combatLog);
	}
	
	SetCursorPositionInfo();
	SetDefaultMenuState();
}


void UCombatLogSelectionView::CreateCombatLogElement(FCombatLog_Full_Data aFullCombatLog)
{

	UUserWidget* baseUserWidget = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatLogElement));

	UCombatLogElement* CombatLogElement = (UCombatLogElement*)baseUserWidget;
	CombatLogElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();
	
	CombatLogElement->SetCommandLogHit(aFullCombatLog);
	CombatLogElements.Add(CombatLogElement);
	
	BW_VerticalBox->AddChild(baseUserWidget);

	
}

void UCombatLogSelectionView::MoveUp()
{
	CombatLogElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveUp();
	CombatLogElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UCombatLogSelectionView::MoveDown()
{
	CombatLogElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveDown();
	CombatLogElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UCombatLogSelectionView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = CombatLogElements.Num()-1;
}

void UCombatLogSelectionView::SetDefaultMenuState()
{
	for(int i = 0 ; i < CombatLogElements.Num();i++)
	{
		CombatLogElements[i]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColor);
	}

	SetCursorPositionInfo();
	CombatLogElements[0]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UCombatLogSelectionView::ActivateMenuSelection()
{
	if(CombatLogElements[cursorPosition] == nullptr)
	{
		return;
	}
	
	UCombatLogDetailedView* detailedCombatLog = (UCombatLogDetailedView*)InGameHUD->PushAndGetView(EViews::CombatLogDetailed,  EUiType::ActiveUi);
	detailedCombatLog->SetDetailedLog(CombatLogElements[cursorPosition]->FullCombatLog);
}

