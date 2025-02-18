// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameHUD.h"
#include "Blueprint/UserWidget.h"
#include "Components/RichTextBlock.h"
#include "BaseUserWidget.generated.h"


class UPersistentGameinstance;


UENUM()
enum class ETextStyle   : uint8
{
	None               = 0,
	TitleStyling       = 1,
	ClassHighlight     = 2,
};

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FViewClosed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FViewSelection);
UCLASS()
class DESENTINTOATLANTIS_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	int cursorPosition;
	int maxCursorPosition;
	int minCursorPosition;
	UPROPERTY()
	AAtlantisGameModeBase* gameModeBase;

	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
	

	
	FLinearColor unhightlighedColor        = FLinearColor(0.0,0.0,0.0,1.0);
	FLinearColor unhightlighedColorNoAlpha = FLinearColor(0.0,0.0,0.0,0.0);
	FLinearColor highlightedColor          = FLinearColor(1.0,1.0,1.0,1.0);
	FLinearColor greyColor                 = FLinearColor(0.1,0.1,0.1,1.0);
	
	const int MAX_OPACITY = 100;
	const int NO_OPACITY  = 0;
public:

	UPROPERTY()
	FViewClosed ViewClosed;
	
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase);
	virtual void SetViewInfo(EViews aView, EUiType aUiType);
	virtual void SetInGameHud(AInGameHUD* aInGameHud){InGameHUD = aInGameHud;  }
	virtual void SetCursorPositionInfo();
	virtual void MoveUp();
	virtual void MoveDown();
	virtual void ReturnToPreviousScreen();
	virtual void DisableInput();
	UFUNCTION()
	virtual void PopMostActiveView();
	virtual FString WrapTextInStyle(FString aText,ETextStyle aTextStyle);
	virtual void SetText(URichTextBlock* aTextBlock, FString aText);

	UPROPERTY()
	AInGameHUD* InGameHUD;
	EViews viewName;

	EViews view;
	EUiType UiType;
};
