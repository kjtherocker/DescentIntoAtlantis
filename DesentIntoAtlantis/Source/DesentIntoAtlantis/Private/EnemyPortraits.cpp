// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPortraits.h"

#include "CombatManager.h"
#include "EnemyPortraitElement.h"
#include "EnemyCombatEntity.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void UEnemyPortraits::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	Portraits.Add(BW_Portrait1);
	Portraits.Add(BW_Portrait2);
	Portraits.Add(BW_Portrait3);
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	enemysInCombat = GameModeBase->combatManager->GetEnemysInCombat();

	for(int i = 0 ; i < enemysInCombat.Num();i++)
	{
		SetEnemyPortraits(Portraits[i],enemysInCombat[i]);
	}
}

void UEnemyPortraits::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);
}

void UEnemyPortraits::SetEnemyPortraits(UEnemyPortraitElement* aImage, UEnemyCombatEntity* AEnemyCombatEntity)
{
	aImage->SetCombatEntity(AEnemyCombatEntity);
}


