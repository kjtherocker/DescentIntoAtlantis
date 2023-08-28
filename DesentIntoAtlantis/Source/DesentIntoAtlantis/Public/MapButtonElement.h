// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "MapButtonElement.generated.h"

class UImage;
/**
 * 
 */



UCLASS()
class DESENTINTOATLANTIS_API UMapButtonElement : public UUserWidget
{
	GENERATED_BODY()
	

	
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapButtonClicked, UMapButtonElement*, mapButtonElement);

	UPROPERTY()
	ECardinalNodeDirections CurrentNodeDirection;
	UPROPERTY()
	FOnMapButtonClicked OnMapButtonClicked;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_GenerateButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*  BW_MapIcon;

	UPROPERTY(EditAnywhere,meta=(BindWidget))
	TMap<ECardinalNodeDirections,UTexture2D*> MapIcons;
	
	void SetMapIcon(ECardinalNodeDirections aCardinalNodeDirection);
	UFUNCTION(BlueprintCallable)
	void ActivateMapNodeEditor();
	void InitializeMapButton();
};
