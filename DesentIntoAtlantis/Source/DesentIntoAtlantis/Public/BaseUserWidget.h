// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameHUD.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void UiInitialize();
	AInGameHUD* InGameHUD;
};
