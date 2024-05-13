// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPortraitElement.h"
#include "EnemyCombatEntity.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"

AEnemyPortraitElement::AEnemyPortraitElement()
{
	
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyPortraitElement::SetCombatEntity(UEnemyCombatEntity* aCombatEntity)
{
	//BW_Portrait->SetBrushFromTexture(aCombatEntity->enemyEntityData.fullBodyCharacterPortrait);
	aCombatEntity->wasDamaged.AddDynamic(this,&AEnemyPortraitElement::TriggerHitEffect);
	aCombatEntity->wasKilled.AddDynamic(this,&AEnemyPortraitElement::TriggerDisappear);

	
	currentEnemyMaterialInterface = aCombatEntity->enemyEntityData.fullBodyCharacterPortrait;;
	TArray<AActor*> ChildActorArray;
	GetAllChildActors(ChildActorArray);
	
	PlaneMeshComponent = nullptr ;
	
	TArray<UStaticMeshComponent*> Components;
	GetComponents<UStaticMeshComponent>(Components);
	

	for(UStaticMeshComponent* MeshComponent : Components)
	{
		UMaterialInterface* CurrentMaterial = currentEnemyMaterialInterface;
		materialInstanceDynamic = UMaterialInstanceDynamic::Create(CurrentMaterial, this);

		if (materialInstanceDynamic != nullptr) 
		{
			//materialInstanceDynamic->SetScalarParameterValue(FName("Red"), 1);
			
			MeshComponent->SetMaterial(0, materialInstanceDynamic);
		}
	}
	
}

void AEnemyPortraitElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(!isTriggeringDisappear)
	{
		if(isTriggeringHitEffect)
		{
			HitEffect(DeltaTime);
		}
	}
	else
	{
		isTriggeringHitEffect = false;
		Disappear(DeltaTime);
	}
}



void AEnemyPortraitElement::HitEffect(float DeltaTime)
{
	if(hitEffectTimer >= 0.5f)
	{
		hitEffectTimer = 0;
		materialInstanceDynamic->SetScalarParameterValue(FName("Red"), hitEffectTimer);
		isTriggeringHitEffect = false;
		return;
	}
	
	hitEffectTimer += DeltaTime;
	materialInstanceDynamic->SetScalarParameterValue(FName("Red"), hitEffectTimer);
}


void AEnemyPortraitElement::Disappear(float DeltaTime)
{
	if(disappearTimer <= 0)
	{
		disappearTimer = 1;
		materialInstanceDynamic->SetScalarParameterValue(FName("Opacity"), 0);
		isTriggeringDisappear = false;
		return;
	}
	
	disappearTimer -= DeltaTime * 3;	

	materialInstanceDynamic->SetScalarParameterValue(FName("Opacity"), disappearTimer);
	//BW_Portrait->SetOpacity(0);
}

void AEnemyPortraitElement::TriggerHitEffect()
{
	isTriggeringHitEffect = true;
}

void AEnemyPortraitElement::TriggerDisappear()
{
	isTriggeringDisappear = true;
}
