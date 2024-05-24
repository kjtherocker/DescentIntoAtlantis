// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "SaveSlotElement.generated.h"

class UTextBlock;
class UHorizontalBox;
class USaveSlotPortraitElement;
class USaveGameData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveSlotElement : public UBaseUserWidget
{
	GENERATED_BODY()

	const int SAVESLOT_NUMBER_OFFSET = 1;
public:
	void SetupSaveSlot(USaveGameData* aSaveGameData, int aSaveSlotNumber);

	void SpawnPlayerPortraits(FPlayerCompleteDataSet aCompleteDataSet);

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
