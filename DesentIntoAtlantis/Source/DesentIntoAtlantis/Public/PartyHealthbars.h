// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "PartyHealthbars.generated.h"

struct FPlayerCombatEntity;
struct FCombatEntity;
class UPartyStatusHealthbar;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyHealthbars : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	virtual void UiInitialize() override;
	void CreateHealthbar(FPlayerCombatEntity* aCombatEntity);
	void SetHighlightHealthbar(FPlayerCombatEntity* aPlayerCombatEntity, float aOpacity);
	
	TSubclassOf<UUserWidget> BP_PartyStatus;
	TArray<UPartyStatusHealthbar*> healthBars;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UHorizontalBox* BW_HorizontalBox;
};
