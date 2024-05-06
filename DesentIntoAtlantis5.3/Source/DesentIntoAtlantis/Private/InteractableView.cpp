// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableView.h"

#include "Gimmick_Base.h"

void UInteractableView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &UInteractableView::ActivateGimmick  );
}

void UInteractableView::ActivateGimmick()
{
	currentInteractableGimmick->ActivateGimmick();
}

void UInteractableView::SetGimmick(UGimmick_Interactable*  aInteractableGimmick)
{
	currentInteractableGimmick = aInteractableGimmick;
}
