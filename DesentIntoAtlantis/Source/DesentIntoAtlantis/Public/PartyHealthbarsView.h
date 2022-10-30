// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "PartyHealthbarsView.generated.h"

class UPlayerCombatEntity;
class UCombatEntity;
class UPartyHealthbarElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyHealthbarsView : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	virtual void UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase) override;
	void CreateHealthbar(UPlayerCombatEntity* aCombatEntity);
	void SetHighlightHealthbar(UPlayerCombatEntity* aPlayerCombatEntity, float aOpacity);
	
	TSubclassOf<UUserWidget> BP_PartyStatus;
	TArray<UPartyHealthbarElement*> healthBars;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UHorizontalBox* BW_HorizontalBox;
};
