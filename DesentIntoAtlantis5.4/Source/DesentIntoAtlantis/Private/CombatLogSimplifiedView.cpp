// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogSimplifiedView.h"

#include "CombatEntity.h"
#include "CombatLogElement.h"
#include "Components/VerticalBox.h"

class UCombatLogElement;

void UCombatLogSimplifiedView::CreateCombatLog(FCombatLog_Full_Data CombatLog_Base_Data)
{
	CreateCombatTab( CombatLog_Base_Data,ECombatLogType::Hit);
}

void UCombatLogSimplifiedView::CreateCombatTab(FCombatLog_Full_Data CombatLog_Base_Data,ECombatLogType aCombatLogType)
{
	UUserWidget* commandLogelement = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatLogElement));

	UCombatLogElement* baseUserWidget = (UCombatLogElement*)commandLogelement;
	baseUserWidget->UiInitialize(gameModeBase);
	commandLogelement->AddToViewport();

	switch (aCombatLogType) {
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
