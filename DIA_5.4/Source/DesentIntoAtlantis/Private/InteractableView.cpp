// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableView.h"

#include "Gimmick_Base.h"

void UInteractableView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &UInteractableView::ActivateGimmick  );
	ResetInteractiveView();
}

void UInteractableView::ResetInteractiveView()
{
	currentInteractableGimmick = nullptr;
	BW_InteractPanel->SetRenderOpacity(0);
}

void UInteractableView::ActivateGimmick()
{
	if(currentInteractableGimmick)
	{
		currentInteractableGimmick->ActivateGimmick();
		ResetInteractiveView();
	}
}

void UInteractableView::SetGimmick(UGimmick_Interactable*  aInteractableGimmick)
{
	currentInteractableGimmick = aInteractableGimmick;
	BW_InteractPanel->SetRenderOpacity(1);
}
