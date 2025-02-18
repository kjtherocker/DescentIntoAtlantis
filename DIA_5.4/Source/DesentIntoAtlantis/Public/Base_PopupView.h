// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PopupSubsystem.h"
#include "Base_PopupView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBase_PopupView : public UBaseUserWidget
{
	GENERATED_BODY()


	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
};
