// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "UiElement.h"
#include "SaveSlotElement.generated.h"

struct FPlayerCompleteDataSet;
class UTextBlock;
class UHorizontalBox;
class USaveSlotPortraitElement;
class USaveGameData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveSlotElement : public UUiElement
{
	GENERATED_BODY()

	const int SAVESLOT_NUMBER_OFFSET = 1;
	const int MOVE_SLOT_RIGHT_OFFSET = 50;


public:
	FString saveSlotName;
	bool isSaveSlotFilled;
	void SetupSaveSlot(USaveGameData* aSaveGameData, FString aSlotName);

	void SpawnPlayerPortraits(FPlayerCompleteDataSet aCompleteDataSet);

	void MoveSlotRight();
	void ResetTranslation();
	UPROPERTY()
	TArray<USaveSlotPortraitElement*> portraitElements;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox* BW_HorizontalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_Time;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_Location;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SaveSlotNumber;
	
};
