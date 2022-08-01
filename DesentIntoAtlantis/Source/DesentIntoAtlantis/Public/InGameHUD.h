// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Views.h"
#include "InGameHUD.generated.h"


class UBaseUserWidget;
class UCommandBoard;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AInGameHUD : public AHUD
{
	GENERATED_BODY()


public:

    void BeginPlay() override;
    void Tick(float DeltaSeconds) override;

    UPROPERTY(EditDefaultsOnly, Category = "Widgets")
    TSubclassOf<UUserWidget> commandBoardPrefab;

    UPROPERTY(EditDefaultsOnly, Category = "Widgets")
    TMap<EViews,TSubclassOf<UUserWidget>> userWidgets;
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TMap<EViewElements,TSubclassOf<UUserWidget>> viewElements;

	void DisplayCommandboard();
	void PushView(EViews aView);    

    TArray<UBaseUserWidget*> viewStack;
	TSubclassOf<UUserWidget> GetElement(EViewElements aViewElement);
private:
    UCommandBoard* commandBoard;
};
