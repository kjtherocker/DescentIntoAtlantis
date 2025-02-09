// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatLog_Detailed_Base_Element.h"

#include "CombatLogDetailedElement.h"
#include "CombatLog_Full_Data.h"
#include "Components/VerticalBox.h"

class UCombatLogDetailedElement;

void UCombatLog_Detailed_Base_Element::SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud)
{
	InGameHUD = aHud;
}

void UCombatLog_Detailed_Base_Element::CreateDetailedElement(FString aName, FString aValue)
{
	UUserWidget* baseUserWidget = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatLogDetailedElement));

	UCombatLogDetailedElement* CombatLogElement = (UCombatLogDetailedElement*)baseUserWidget;
	CombatLogElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();
	CombatLogElement->SetDetailedElement(aName,aValue);
	
	BW_VerticalBox->AddChild(baseUserWidget);
}
