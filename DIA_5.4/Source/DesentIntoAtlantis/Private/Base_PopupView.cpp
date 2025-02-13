// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_PopupView.h"

void UBase_PopupView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UBase_PopupView::PopMostActiveView  );
	
}
