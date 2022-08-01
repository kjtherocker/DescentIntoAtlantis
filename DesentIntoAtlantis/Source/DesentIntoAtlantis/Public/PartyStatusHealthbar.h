// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "PartyStatusHealthbar.generated.h"

class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyStatusHealthbar : public UBaseUserWidget
{
	GENERATED_BODY()
	
	virtual void UiInitialize() override;
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Mana;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ManaText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_HealthText;
};
