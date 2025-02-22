// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/ProgressBar.h"
#include "StaminaBarElement.generated.h"

struct FStaminaData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UStaminaBarElement : public UBaseUserWidget
{
	GENERATED_BODY()


public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	UFUNCTION()
	virtual void UpdateStaminaBar(FStaminaData aStaminaData);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_StaminaBar;
};
