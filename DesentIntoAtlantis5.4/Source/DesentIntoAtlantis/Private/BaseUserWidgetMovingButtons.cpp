// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidgetMovingButtons.h"

#include "PassiveSkillElement.h"
#include "PassiveSkillFactorySubsystem.h"
#include "Components/Border.h"


void UBaseUserWidgetMovingButtons::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
}

void UBaseUserWidgetMovingButtons::ActivateHighLightSelection()
{
	highlightElements[cursorPosition]->ActivateButton();
}

void UBaseUserWidgetMovingButtons::SetHighLightElements(TArray<UBaseHighlightElement*> aHighlightElements)
{
	highlightElements = aHighlightElements;
}

void UBaseUserWidgetMovingButtons::MoveUp()
{
	highlightElements[cursorPosition]->UnHightlight();
	Super::MoveUp();
	highlightElements[cursorPosition]->Highlight();
}

void UBaseUserWidgetMovingButtons::MoveDown()
{
	highlightElements[cursorPosition]->UnHightlight();
	Super::MoveDown();
	highlightElements[cursorPosition]->Highlight();
}

void UBaseUserWidgetMovingButtons::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = highlightElements.Num()-1;
}

void UBaseUserWidgetMovingButtons::SetDefaultMenuState()
{
	for(int i = 0 ; i < highlightElements.Num();i++)
	{
		highlightElements[i]->UnHightlight();;
	}

	SetCursorPositionInfo();
	highlightElements[cursorPosition]->Highlight();
}

void UBaseUserWidgetMovingButtons::TurnAllHighlightsOff()
{
	for (auto Element : highlightElements)
	{
		Element->UnHightlight();
	}
}

void UBaseUserWidgetMovingButtons::ActivateMenuSelection()
{
	MenuSelectionDelegates[cursorPosition].Broadcast();
}

void UBaseUserWidgetMovingButtons::DisableInput()
{
	TurnAllHighlightsOff();
	if (InputComponent)
	{
		InputComponent->ClearActionBindings(); // Clear all input bindings
		InputComponent->UnregisterComponent(); // Unregister the component
		InputComponent->DestroyComponent();    // Destroy the component
		InputComponent = nullptr;              // Nullify the reference
	}
}

void UBaseUserWidgetMovingButtons::SetPassiveSkillBar(FPassiveSkillData aSkill,
                                                      UPassiveSkillElement* PassiveSkillElement)
{
	if(aSkill.passiveSkillID == EPassiveSkillID::None)
	{
		return;
	}
	PassiveSkillElement->SetPassiveSkill(aSkill);
}

