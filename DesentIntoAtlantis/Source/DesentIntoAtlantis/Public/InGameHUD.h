// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Views.h"
#include "InGameHUD.generated.h"


class AAtlantisGameModeBase;
class AFloorGameMode;
class UBaseUserWidget;
class UCommandBoardView;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AInGameHUD : public AHUD
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<UBaseUserWidget*> persistentViewStack;
	UPROPERTY()
	TArray<UBaseUserWidget*> activeViewStack;
	UPROPERTY()
	TArray<UBaseUserWidget*>inactiveViewStack;
public:

	UPROPERTY()
	AAtlantisGameModeBase* gameModeBase;
	
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(EditDefaultsOnly, Category = "Widgets")
    TMap<EViews,TSubclassOf<UUserWidget>> userWidgets;
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TMap<EViewElements,TSubclassOf<UUserWidget>> viewElements;
	
	void PushView(EViews aView, EUiType aUiType);
	UUserWidget* PushAndGetView(EViews aView, EUiType aUiType);
	UUserWidget* GetActiveHUDView(EViews aView, EUiType aUiType);
	void PopMostRecentActiveView();
	void PopAllPersistantViews();
	void PopAllActiveViews();
	void PushMostRecentInActiveView();
	void ReturnToPreviousActiveView();
	
	TSubclassOf<UUserWidget> GetElement(EViewElements aViewElement);
};
