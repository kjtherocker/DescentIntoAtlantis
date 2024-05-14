// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "SyncView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USyncView : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
};
