// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChallengeSubsystem.h"
#include "EAtlantisEvents.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventDispatcherSubsystem.generated.h"

class UChallengeSubsystem;
class USkillBase;

UCLASS()
class DESENTINTOATLANTIS_API UEventDispatcherSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	UChallengeSubsystem* challengeSubsystem;
public:
	
	void InitializeEventDispatcherSubsystem(UChallengeSubsystem* aChallengeSubsystem);

	void DispatchEvent(FEventBase* aEvent);
};
