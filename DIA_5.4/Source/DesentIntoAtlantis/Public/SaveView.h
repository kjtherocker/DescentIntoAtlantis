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
	const int MIN_SAVES = 0;
	const int MAX_SAVES = 10;

	const int AMOUNT_OF_SAVE_SLOTS = 2;
	int minshownSaves = 0;
	int maxshownSaves = 0;
	
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	GENERATED_BODY()
	void SpawnSaveSlots(USaveGameData* aSaveGameData, FString aSlotName);
	UFUNCTION()
	void SaveGame();

	void ReSetupSaveFilesInRange(int aMin, int aMax);

	virtual void MoveUp() override;
	virtual void MoveDown() override;
	
	UFUNCTION()
	virtual void ActivateMenuSelection() override;
	virtual void SetDefaultMenuState() override;
	virtual void SetCursorPositionInfo() override;

	UPROPERTY()
	TArray<USaveGameData*> SaveGameDatas;
	UPROPERTY()
	USaveManagerSubsystem* SaveManagerSubsystem;
	UPROPERTY()
	TArray<USaveSlotElement*> SaveSlots;
public:
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox* BW_VerticalBox;
};
