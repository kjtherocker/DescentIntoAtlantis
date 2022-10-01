// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPortraitElement.h"

#include "Components/Image.h"

void UEnemyPortraitElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);


	if(isTriggeringHitEffect)
	{
		HitEffect(DeltaTime);
	}
}

void UEnemyPortraitElement::HitEffect(float DeltaTime)
{
	if(movementTimer >= 1)
	{
		movementTimer = 0;
		isTriggeringHitEffect = false;
		return;
	}
	
	movementTimer += DeltaTime *2;	
	
	BW_Portrait->SetColorAndOpacity(FLinearColor(1,movementTimer,movementTimer,1));
}
