// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameHUD.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FViewSelection);
UCLASS()
class DESENTINTOATLANTIS_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	int cursorPosition;
	int maxCursorPosition;
	int minCursorPosition;
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	FLinearColor unhightlighedColor = FLinearColor(0.0,0.0,0.0,1.0);
	FLinearColor highlightedColor   = FLinearColor(1.0,1.0,1.0,1.0);
	const int MAX_OPACITY = 100;
	const int NO_OPACITY  = 0;
public:
	virtual void UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	virtual void SetCursorPositionInfo();
	virtual void MoveUp();
	virtual void MoveDown();
	
	UPROPERTY()
	AInGameHUD* InGameHUD;
	EViews viewName;
};
