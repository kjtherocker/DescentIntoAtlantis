// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatTokenRowElement.h"

#include "AtlantisGameModeBase.h"
#include "PersistentGameinstance.h"
#include "Components/HorizontalBoxSlot.h"

void UCombatTokenRowElement::InitializeCombatTokenRow(UCombatTokenHandler* aCombatTokenHandler,AInGameHUD* aInGameHUD)
{
	InGameHUD2 = aInGameHUD;
	combatTokenHandler = aCombatTokenHandler;
	combatTokenHandler->onCombatTokenAdded.AddDynamic(this,&UCombatTokenRowElement::SpawnNewCombatToken);
	combatTokenHandler->OnTokenSlotChange.AddDynamic(this,&UCombatTokenRowElement::UpdateRowPositions);

	for (auto Element : combatTokenHandler->activeCombatTokensSlots)
	{
		if(Element.Value == nullptr)
		{
			continue;
		}
		SpawnNewCombatToken(Element.Value);
	}
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
	BW_HorizontalBox->AddChild(CombatLogElement);
	UpdateRowPositions();
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
	UpdateRowPositions();
}

void UCombatTokenRowElement::UpdateRowPositions()
{
	if(CombatTokenUiElements.Num() == 0)
	{
		return;
	}
	

	TMap<int, UCombatToken_Base*> activeSlots = combatTokenHandler->activeCombatTokensSlots;

	for (auto currentSlot : activeSlots)
	{
		if(!CombatTokenUiElements.IsValidIndex(currentSlot.Key))
		{
			return;
		}

		CombatTokenUiElements[currentSlot.Key]->SetCombatTokenUiElement(currentSlot.Value,nullptr);
	}

 	if(CombatTokenUiElements.Num() > activeSlots.Num())
	{
		for(int i = activeSlots.Num(); i < CombatTokenUiElements.Num();i++)
		{
			BW_HorizontalBox->RemoveChild(CombatTokenUiElements[i]);
			CombatTokenUiElements[i]->RemoveFromParent();
		}
	}
	
}
