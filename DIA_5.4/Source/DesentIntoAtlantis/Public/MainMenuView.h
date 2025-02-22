// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "MainMenuPlayerStatusView.h"
#include "MainMenuView.generated.h"

class UPlayerCombatEntity;
class UStatusMainMenuElement;
class UHorizontalBox;
class UBorder;
/**
 * 
 */
UENUM()
enum class EMainMenuStates
{
	None   = 0,
	Item   = 1,
	Skills = 2,
	Class  = 3,
	Status = 4,
	Option = 5
};

UCLASS()
class DESENTINTOATLANTIS_API UMainMenuView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void SpawnMainMenuStatusElement(UPlayerCombatEntity* aCombatEntity);

	UFUNCTION()
	void Item();
	UFUNCTION()
	void Skills();
	UFUNCTION()
	void Class();
	UFUNCTION()
	void Status();
	UFUNCTION()
	void Option();
	

	
public:

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_Item;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_Skills;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_Classes;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_Status;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBaseHighlightElement* BW_Option;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox* BW_PartyHorizontalBox;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMainMenuPlayerStatusView* BW_MainMenuPlayerStatusView;
};
