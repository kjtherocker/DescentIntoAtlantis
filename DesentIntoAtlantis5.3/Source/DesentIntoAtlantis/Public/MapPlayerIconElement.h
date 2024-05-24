// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "MapPlayerIconElement.generated.h"

enum class ECardinalNodeDirections;
class UImage;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UMapPlayerIconElement : public UBaseUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	TMap<ECardinalNodeDirections,UTexture2D*> playerIcons;

	public:
	void SetPlayedIconBasedOnDirection(ECardinalNodeDirections aDirection);

		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*  BW_PlayerIcon;
};
