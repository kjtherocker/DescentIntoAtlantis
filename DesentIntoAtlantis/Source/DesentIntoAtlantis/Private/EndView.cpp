// Fill out your copyright notice in the Description page of Project Settings.


#include "EndView.h"

void UEndView::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Q"       ,IE_Pressed ,this, &UEndView::Quit  );
}

void UEndView::Quit()
{
	FPlatformMisc::RequestExit(false);
}
