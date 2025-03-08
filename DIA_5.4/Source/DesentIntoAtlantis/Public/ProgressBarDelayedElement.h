// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ProgressBarDelayedElement.generated.h"

/**
 * 
 */


class UProgressBar;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelayedProgressBarValue, int, currentValue);

UCLASS()
class DESENTINTOATLANTIS_API UProgressBarDelayedElement : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY();
	float previousPercentage = 0;
	UPROPERTY();
	float currentPercentage  = 0;

	virtual void SetProgressBar(float aCurrentValue);
	virtual void SetPercentageMain(float aPercentage);
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Main_ProgressBar;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Slow_ProgressBar;
};
