// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "TransitionView.generated.h"

/**
 * 
 */
UENUM()
enum class ETransitionAnimationTriggers
{
	None,
	Enter,
	Exit
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FToTransitionTo);
UCLASS()
class DESENTINTOATLANTIS_API UTransitionView : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	FToTransitionTo transitionTo;
	TMap<ETransitionAnimationTriggers, UWidgetAnimation*> transitionViewAnimations;
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void TransitionAtHalfWay();
	void StartAnimation(ETransitionAnimationTriggers aTransitionAnimationTriggers);
	void StartEnterTransition();
	void StartExitTransition();
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* EnterTransition;
	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* ExitTransition;

	UFUNCTION()
	void OnEnterFinished();
};
