// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogSimplifiedView.h"

#include "CombatEntity.h"
#include "CombatLogDetailedView.h"
#include "CombatLogElement.h"
#include "Components/VerticalBox.h"

class UCombatLogDetailedView;
class UCombatLogElement;

void UCombatLogSimplifiedView::EnableInput()
{
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this,  &UCombatLogSimplifiedView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this,  &UCombatLogSimplifiedView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this,  &UCombatLogSimplifiedView::ActivateMenuSelection );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UCombatLogSimplifiedView::DisableInput  );
	
	InputComponent->Activate();
	
	SetHighLightElements(TArray<UBaseHighlightElement*>(commandLogTabs));
	SetDefaultMenuState();
}

void UCombatLogSimplifiedView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	if(commandLogTabs.Num() == 0)
	{
		return;
	}
}

void UCombatLogSimplifiedView::CreateCombatLog(FCombatLog_Full_Data CombatLog_Base_Data)
{

	if(CombatLog_Base_Data.CombatLog_Hit_Data.wasHitInitializedOnSkill)
	{
		CreateCombatTab( CombatLog_Base_Data,ECombatLogType::Hit);	
	}
	if(CombatLog_Base_Data.CombatLog_AttackDefense_Data.wasInitializedOnSkill)
	{
		CreateCombatTab( CombatLog_Base_Data,ECombatLogType::AttackDefence);
	}
}

void UCombatLogSimplifiedView::CreateCombatTab(FCombatLog_Full_Data CombatLog_Base_Data,ECombatLogType aCombatLogType)
{
	if(commandLogTabs.Num() > 7)
	{
		RemoveCombatTab();
	}
	
	UUserWidget* commandLogelement = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatLogElement));

	UCombatLogElement* baseUserWidget = (UCombatLogElement*)commandLogelement;
	baseUserWidget->UiInitialize(gameModeBase);
	commandLogelement->AddToViewport();
	baseUserWidget->UnHightlight();
	
	switch (aCombatLogType)
	{
	case ECombatLogType::None:
		break;
	case ECombatLogType::Hit:
		baseUserWidget->SetCommandLogHit(CombatLog_Base_Data);
		break;
	case ECombatLogType::AttackDefence:
		baseUserWidget->SetCommandLogAttackDefence(CombatLog_Base_Data);
		break;
	case ECombatLogType::Full:
		baseUserWidget->SetCommandLogFull(CombatLog_Base_Data);
		break;
	}

	
	commandLogTabs.Add(baseUserWidget);
	
	BW_VerticalBox->AddChild(commandLogelement);
}

void UCombatLogSimplifiedView::RemoveCombatTab()
{
	commandLogTabs[0]->RemoveFromParent();
	commandLogTabs.RemoveAt(0);
}

void UCombatLogSimplifiedView::SetCursorPositionInfo()
{
	cursorPosition    =  highlightElements.Num()-1;
	minCursorPosition =  0;
	maxCursorPosition = highlightElements.Num()-1;
}



void UCombatLogSimplifiedView::ActivateMenuSelection()
{
	if(commandLogTabs[cursorPosition] == nullptr)
	{
		return;
	}
	
	UCombatLogDetailedView* detailedCombatLog = (UCombatLogDetailedView*)InGameHUD->PushAndGetView(EViews::CombatLogDetailed,  EUiType::ActiveUi);
	detailedCombatLog->SetDetailedLog(
		commandLogTabs[cursorPosition]->FullCombatLog,
		commandLogTabs[cursorPosition]->combatlogConfiguration,
		commandLogTabs[cursorPosition]->logText);
}
