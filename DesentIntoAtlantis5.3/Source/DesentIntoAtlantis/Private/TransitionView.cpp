// Fill out your copyright notice in the Description page of Project Settings.


#include "TransitionView.h"

#include "Animation/WidgetAnimation.h"

void UTransitionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

}

void UTransitionView::TransitionAtHalfWay()
{
}

void UTransitionView::StartEnterTransition()
{
	if (EnterTransition)
	{
		// Play the animation
		PlayAnimation(EnterTransition);

		// Get the duration of the animation
	//	float Duration = EnterTransition->GetEndTime() - EnterTransition->GetStartTime();
	
		FWidgetAnimationDynamicEvent dynamicEvent;
		dynamicEvent.BindDynamic(this,&UTransitionView::OnEnterFinished);
		// Set a timer to call OnAnimationFinished after the animation is done
		BindToAnimationFinished(EnterTransition,dynamicEvent);
	}
}

void UTransitionView::StartExitTransition()
{
	if (ExitTransition)
	{
		PlayAnimation(ExitTransition);
	}
}

void UTransitionView::OnEnterFinished()
{
	transitionTo.Broadcast();
}
