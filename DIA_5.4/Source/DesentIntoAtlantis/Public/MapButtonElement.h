// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "MapButtonElement.generated.h"

struct FFloorEventData;
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
	int floorEventDataTableindex = -1;
	UPROPERTY()
	FFloorEventData currentFloorEventData;

	UPROPERTY()
	FWorldGenerationFloorNodeInfo worldGenFloorNodeInfo;
	
	UPROPERTY()
	FVector2D positionInGrid;
	
	UPROPERTY()
	ECardinalNodeDirections CurrentNodeDirection;
	UPROPERTY()
	FOnMapButtonClicked OnMapButtonClicked;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_GenerateButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*  BW_MapIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*  BW_EventIcon;

	UPROPERTY(EditAnywhere,meta=(BindWidget))
	TMap<ECardinalNodeDirections,UTexture2D*> MapIcons;

	void SetMapIcon(ECardinalNodeDirections aNodeDirection);
	void InitializeMapButton(FWorldGenerationFloorNodeInfo aFloorNodeInfo);
	void SetFloorEvent(FFloorEventData aFloorEventData,int afloorEventDataTableIndex);
	void SetEventIcon(bool aIsActive);
	UFUNCTION(BlueprintCallable)
	void ActivateMapNodeEditor();
	void InitializeMapButton();
};
