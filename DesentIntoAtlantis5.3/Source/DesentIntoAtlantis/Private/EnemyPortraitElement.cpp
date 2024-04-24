// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPortraitElement.h"
#include "EnemyCombatEntity.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"

void AEnemyPortraitElement::SetCombatEntity(UEnemyCombatEntity* aCombatEntity)
{
	//BW_Portrait->SetBrushFromTexture(aCombatEntity->enemyEntityData.fullBodyCharacterPortrait);
	aCombatEntity->wasDamaged.AddDynamic(this,&AEnemyPortraitElement::TriggerHitEffect);
	aCombatEntity->wasKilled.AddDynamic(this,&AEnemyPortraitElement::TriggerDisappear);
	
	currentEnemyMaterialInterface = aCombatEntity->enemyEntityData.fullBodyCharacterPortrait;;
	TArray<AActor*> ChildActorArray;
	GetAllChildActors(ChildActorArray);
	
	PlaneMeshComponent = nullptr ;
	TArray<UStaticMeshComponent*> Components; GetComponents<UStaticMeshComponent>(Components);
	for( int32 i=0; i<Components.Num(); i++ )
	{
		 PlaneMeshComponent = Components[i];
	}
	if(PlaneMeshComponent != nullptr)
	{
		PlaneMeshComponent->SetMaterial(0, currentEnemyMaterialInterface);
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
	if(hitEffectTimer >= 1)
	{
		hitEffectTimer = 0;
		isTriggeringHitEffect = false;
		return;
	}
	
	hitEffectTimer += DeltaTime *2;	
//	currentEnemyMaterialInterface->
//	BW_Portrait->SetColorAndOpacity(FLinearColor(1,hitEffectTimer,hitEffectTimer,1));
}


void AEnemyPortraitElement::Disappear(float DeltaTime)
{
	if(disappearTimer <= 0)
	{
		disappearTimer = 1;
		isTriggeringDisappear = false;
		return;
	}
	
	disappearTimer -= DeltaTime * 2;	
	
	BW_Portrait->SetOpacity(0);
}

void AEnemyPortraitElement::TriggerHitEffect()
{
	isTriggeringHitEffect = true;
}

void AEnemyPortraitElement::TriggerDisappear()
{
	isTriggeringDisappear = true;
}
