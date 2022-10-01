// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemyPortraitElement.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyPortraitElement : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	float movementTimer = 0;
public:
	bool isTriggeringHitEffect;
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	void HitEffect(float DeltaTime);
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait;
};
