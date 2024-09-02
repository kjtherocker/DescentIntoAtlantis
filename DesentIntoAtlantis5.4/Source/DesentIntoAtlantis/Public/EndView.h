// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EndView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEndView : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void Quit();
};
