// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "SaveView.generated.h"

class USaveManagerSubsystem;
class USaveSlotElement;
class UVerticalBox;
class USaveGameData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveView : public UBaseUserWidgetMovingButtons
{
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	GENERATED_BODY()
	void SpawnSaveSlots(USaveGameData* aSaveGameData);
	UFUNCTION()
	void SaveGame();
	
	UFUNCTION()
	virtual void ActivateMenuSelection() override;

	UPROPERTY()
	USaveManagerSubsystem* SaveManagerSubsystem;
	UPROPERTY()
	TArray<USaveSlotElement*> SaveSlots;
public:
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox* BW_VerticalBox;
};
