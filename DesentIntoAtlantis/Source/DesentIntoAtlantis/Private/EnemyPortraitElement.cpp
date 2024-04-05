// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPortraitElement.h"
#include "EnemyCombatEntity.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"

void UEnemyPortraitElement::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
}

void UEnemyPortraitElement::SetCombatEntity(UEnemyCombatEntity* aCombatEntity)
{
	BW_Portrait->SetBrushFromTexture(aCombatEntity->enemyEntityData.fullBodyCharacterPortrait);
	aCombatEntity->wasDamaged.AddDynamic(this,&UEnemyPortraitElement::TriggerHitEffect);
	aCombatEntity->wasKilled.AddDynamic(this,&UEnemyPortraitElement::TriggerDisappear);
}

void UEnemyPortraitElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);


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

void UEnemyPortraitElement::HitEffect(float DeltaTime)
{
	if(hitEffectTimer >= 1)
	{
		hitEffectTimer = 0;
		isTriggeringHitEffect = false;
		return;
	}
	
	hitEffectTimer += DeltaTime *2;	
	
	BW_Portrait->SetColorAndOpacity(FLinearColor(1,hitEffectTimer,hitEffectTimer,1));
}

void UEnemyPortraitElement::Disappear(float DeltaTime)
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

void UEnemyPortraitElement::TriggerHitEffect()
{
	isTriggeringHitEffect = true;
}

void UEnemyPortraitElement::TriggerDisappear()
{
	isTriggeringDisappear = true;
}
