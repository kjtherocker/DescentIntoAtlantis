// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "DeathView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UDeathView : public UBaseUserWidget
{
	GENERATED_BODY()
public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void TryFightAgain();
	void Quit();
};
