// Fill out your copyright notice in the Description page of Project Settings.


#include "TransitionView.h"

#include "Animation/WidgetAnimation.h"

void UTransitionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	transitionViewAnimations.Add(ETransitionAnimationTriggers::Enter, EnterTransition);
	transitionViewAnimations.Add(ETransitionAnimationTriggers::Exit, ExitTransition);

}

void UTransitionView::TransitionAtHalfWay()
{
}

void UTransitionView::StartAnimation(ETransitionAnimationTriggers aTransitionAnimationTriggers)
{
	PlayAnimation(transitionViewAnimations[aTransitionAnimationTriggers]);
}

void UTransitionView::StartEnterTransition()
{
	if (EnterTransition)
	{
	
		StartAnimation(ETransitionAnimationTriggers::Enter);
	
	
		FWidgetAnimationDynamicEvent dynamicEvent;
		dynamicEvent.BindDynamic(this,&UTransitionView::OnEnterFinished);
	
		BindToAnimationFinished(EnterTransition,dynamicEvent);
	}
}

void UTransitionView::StartExitTransition()
{
	StartAnimation(ETransitionAnimationTriggers::Exit);
}

void UTransitionView::OnEnterFinished()
{
	transitionTo.Broadcast();
}
