// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "PartyStatusHealthbar.generated.h"

struct FCombatEntity;
class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyStatusHealthbar : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	virtual void UiInitialize() override;

	void SetCombatEntity(FCombatEntity* aCombatEntity);
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Mana;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ManaText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_HealthText;
};
