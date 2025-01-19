// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatGameModeBase.h"
#include "EnemyPortraitElement.generated.h"

enum class EStatusAilments  : uint8;
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
	UPROPERTY()
	float hitEffectTimer           = 0;
	UPROPERTY()
	float disappearTimer           = 1;
	UPROPERTY()
	bool  isTriggeringDisappear    = false;
	UPROPERTY()
	bool isTriggeringHitEffect;
	void HitEffect(float DeltaTime);
	void Disappear(float DeltaTime);
	UPROPERTY()
	UMaterialInstanceDynamic* materialInstanceDynamic;
	const FRotator DEFAULT_ROTATION         = UCombatSettings::ENEMY_ROTATION;
	const FVector3d INITIAL_CAMERA_POSITION = UCombatSettings::INITIAL_CAMERA_POSITION;

	FVector CenterOfPortraitPosition;
public:

	AEnemyPortraitElement();
	FVector GetCenterOfPortraitPosition(){return CenterOfPortraitPosition;}
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
