// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "SaveSlotPortraitElement.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USaveSlotPortraitElement : public UBaseUserWidget
{
	GENERATED_BODY()
public:
	void SetPortrait(UTexture2D* aPortrait);


	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*  BW_CharacterPortrait;
};
