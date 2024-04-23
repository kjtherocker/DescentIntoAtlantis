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
class DESENTINTOATLANTIS_API AEnemyPortraitElement : public AActor
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

	void SetCombatEntity(UEnemyCombatEntity* aCombatEntity);
	virtual void Tick(float DeltaTime) override;

	AEnemyPortraitElement* GetMaterialCollection(UMaterialInterface* Material);
	UFUNCTION()
	void TriggerHitEffect();
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlaneMeshComponent;

	UPROPERTY()
	UMaterialInterface* currentEnemyMaterialInterface;
	
	UFUNCTION()
	void TriggerDisappear();
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait;
	
};
