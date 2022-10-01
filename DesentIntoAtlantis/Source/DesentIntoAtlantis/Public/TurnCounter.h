// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "TurnCounter.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UTurnCounter : public UBaseUserWidget
{
	GENERATED_BODY()

	virtual void UiInitialize() override;
	
	TArray<UBaseUserWidget*> TurnCounter;

	void AddTurnCounterToUi(TSubclassOf<UUserWidget> aTurnCounter);
	
public:

	void SetTurnOrder(int turn);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UHorizontalBox* BW_HorizontalBox;
};
