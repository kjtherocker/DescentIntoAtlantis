// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatGameModeBase.h"
#include "EnemyPortraitElement.generated.h"

enum class EStatusAilments;
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
	UPROPERTY()
	UMaterialInstanceDynamic* materialInstanceDynamic;
	const FRotator DEFAULT_ROTATION  = FRotator(0,180,0);
	const FVector3d INITIAL_CAMERA_POSITION = UCombatSettings::INITIAL_CAMERA_POSITION;
public:

	AEnemyPortraitElement();	
	void SetCombatEntity(UEnemyCombatEntity* aCombatEntity);
	virtual void Tick(float DeltaTime) override;
	void RotateTowardsCamera();

	void ResetPortraitRotationToDefault();
	//AEnemyPortraitElement* GetMaterialCollection(UMaterialInterface* Material);
	
	UFUNCTION()
	void TriggerAilmentEffect(EStatusAilments aStatusAilment);

	UFUNCTION()
	void TurnOffAilmentEffect(EStatusAilments aStatusAilment);

	
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
