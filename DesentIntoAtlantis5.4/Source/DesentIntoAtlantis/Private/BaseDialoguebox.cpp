// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDialoguebox.h"

void UBaseDialoguebox::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	InitializeInputComponent();
	InputComponent->BindAction("Left"    ,IE_Pressed ,this, &UBaseDialoguebox::MoveDown  );
	InputComponent->BindAction("Right"    ,IE_Pressed ,this, &UBaseDialoguebox::MoveUp  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UBaseDialoguebox::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UBaseDialoguebox::PopMostActiveView  );
	
	highlightElements.Add(BW_YesElement);
	highlightElements.Add(BW_NoElement);
	
	SetDefaultMenuState();
}

void UBaseDialoguebox::ActivateHighLightSelection()
{
	Super::ActivateHighLightSelection();
	PopMostActiveView();
}

void UBaseDialoguebox::SetTitleText(FString aText)
{
	SetText(BW_TitleText,aText);
}

void UBaseDialoguebox::SetDescriptionText(FString aText)
{
	SetText(BW_DialogueText,aText);
}
