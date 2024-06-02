// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "TransitionView.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FToTransitionTo);
UCLASS()
class DESENTINTOATLANTIS_API UTransitionView : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	FToTransitionTo transitionTo;
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void TransitionAtHalfWay();
	void StartEnterTransition();
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* EnterTransition;

	UFUNCTION()
	void OnEnterFinished();
};
