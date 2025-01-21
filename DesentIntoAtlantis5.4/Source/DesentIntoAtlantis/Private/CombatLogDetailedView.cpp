// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLogDetailedView.h"

#include "CombatLog_Full_Data.h"
#include "Components/ScrollBox.h"

void UCombatLogDetailedView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCombatLogDetailedView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCombatLogDetailedView::MoveDown  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UCombatLogDetailedView::PopMostActiveView  );
}

void UCombatLogDetailedView::SetDetailedLog(FCombatLog_Full_Data aFullCombatLog)
{
	BW_HitElement->SetElement(aFullCombatLog,InGameHUD);
	BW_EvasionElement->SetElement(aFullCombatLog,InGameHUD);
	BW_DamageElement->SetElement(aFullCombatLog,InGameHUD);
	BW_DefenceElement->SetElement(aFullCombatLog,InGameHUD);
}

void UCombatLogDetailedView::SetDetailedLog(FCombatLog_Full_Data aFullCombatLog,
	ECombatLogConfiguration aCombatLogConfiguration,FString logText)
{

	SetText(BW_LogText,logText);

	switch (aCombatLogConfiguration)
	{
	case ECombatLogConfiguration::None:
		break;
	case ECombatLogConfiguration::Full:
		SetDetailedLog(aFullCombatLog);

		break;
	case ECombatLogConfiguration::AttackDefense:
		RemoveFromScrollBox(BW_HitElement);
		RemoveFromScrollBox(BW_EvasionElement);
		
		BW_DamageElement->SetElement(aFullCombatLog,InGameHUD);
		BW_DefenceElement->SetElement(aFullCombatLog,InGameHUD);
		break;
	case ECombatLogConfiguration::HitEvasion:
		RemoveFromScrollBox(BW_DamageElement);
		RemoveFromScrollBox(BW_DefenceElement);

		BW_HitElement->SetElement(aFullCombatLog,InGameHUD);
		BW_EvasionElement->SetElement(aFullCombatLog,InGameHUD);
		break;
	}


}

void UCombatLogDetailedView::MoveUp()
{
	BW_ScrollBox->SetScrollOffset(BW_ScrollBox->GetScrollOffset() - 40);
}

void UCombatLogDetailedView::MoveDown()
{

	BW_ScrollBox->SetScrollOffset(BW_ScrollBox->GetScrollOffset() + 40);
}

void UCombatLogDetailedView::RemoveFromScrollBox(UUserWidget* aUserWidget)
{
	BW_ScrollBox->InvalidateLayoutAndVolatility();
	aUserWidget->RemoveFromParent();
	BW_ScrollBox->RemoveChild(aUserWidget);
}
