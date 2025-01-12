// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDialoguebox.h"

void UBaseDialoguebox::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UBaseDialoguebox::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UBaseDialoguebox::MoveDown  );
	InputComponent->BindAction("Left"    ,IE_Pressed ,this, &UBaseDialoguebox::ReturnToPreviousScreen  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UBaseDialoguebox::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UBaseDialoguebox::PopMostActiveView  );

	SetDefaultMenuState();
}

void UBaseDialoguebox::ActivateHighLightSelection()
{
	Super::ActivateHighLightSelection();
	PopMostActiveView();
}
