// Fill out your copyright notice in the Description page of Project Settings.


#include "EventDispatcherSubsystem.h"

void UEventDispatcherSubsystem::InitializeEventDispatcherSubsystem(UChallengeSubsystem* aChallengeSubsystem)
{
	challengeSubsystem = aChallengeSubsystem;
}

void UEventDispatcherSubsystem::DispatchEvent(FEventBase* aEvent)
{
}
