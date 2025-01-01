// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatTokenRowElement.h"

#include "AtlantisGameModeBase.h"
#include "PersistentGameinstance.h"

void UCombatTokenRowElement::InitializeCombatTokenRow(UCombatTokenHandler* aCombatTokenHandler,AInGameHUD* aInGameHUD)
{
	InGameHUD2 = aInGameHUD;
	combatTokenHandler = aCombatTokenHandler;
	combatTokenHandler->onCombatTokenAdded.AddDynamic(this,&UCombatTokenRowElement::SpawnNewCombatToken);
}

void UCombatTokenRowElement::SpawnNewCombatToken(UCombatToken_Base* aCombatToken)
{
	if(persistentGameinstance->currentGameMode->InGameHUD == nullptr)
	{
		return;
	}

	UUserWidget* baseUserWidget = CreateWidget(this, 	persistentGameinstance->currentGameMode->InGameHUD->GetElement(EViewElements::CombatTokenElement));

	UCombatToken_UiElement* CombatLogElement = (UCombatToken_UiElement*)baseUserWidget;
	CombatLogElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();
	CombatLogElement->SetCombatTokenUiElement(aCombatToken,nullptr);

	aCombatToken->CombatTokenEndEffect.AddDynamic(this,&UCombatTokenRowElement::RemoveCombatToken);
	CombatTokenUiElements.Add(CombatLogElement);
	BW_HorizontalBox->AddChild(baseUserWidget);
}

void UCombatTokenRowElement::RemoveCombatToken(UCombatToken_Base* aCombatToken)
{
	for(int i = 0 ; i < CombatTokenUiElements.Num();i++)
	{
		if(CombatTokenUiElements[i]->CombatTokenID == aCombatToken->GetCombatTokenID())
		{
			CombatTokenUiElements[i]->RemoveFromParent();
			CombatTokenUiElements.RemoveAt(i);
			return;
		}
	}
}
