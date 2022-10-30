// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemyPortraitElement.generated.h"

class UEnemyCombatEntity;
class UImage;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyPortraitElement : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	float hitEffectTimer           = 0;
	float disappearTimer           = 1;
	bool  isTriggeringDisappear    = false;
	bool isTriggeringHitEffect;
	void HitEffect(float DeltaTime);
	void Disappear(float DeltaTime);
	
public:
	virtual void UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase) override;
	void SetCombatEntity(UEnemyCombatEntity* aCombatEntity);
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

	
	UFUNCTION()
	void TriggerHitEffect();
	UFUNCTION()
	void TriggerDisappear();
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait;
	
};
