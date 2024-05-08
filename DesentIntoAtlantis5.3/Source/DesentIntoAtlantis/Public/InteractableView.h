// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/CanvasPanel.h"
#include "InteractableView.generated.h"

class UGimmick_Interactable;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UInteractableView : public UBaseUserWidget
{
	GENERATED_BODY()

	UPROPERTY()

	bool isInteractiveViewActive;
	UGimmick_Interactable* currentInteractableGimmick;
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
public:
		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCanvasPanel* BW_InteractPanel;
	virtual void ResetInteractiveView();
	virtual void ActivateGimmick();
	virtual void SetGimmick(UGimmick_Interactable*  aInteractableGimmick);
};
