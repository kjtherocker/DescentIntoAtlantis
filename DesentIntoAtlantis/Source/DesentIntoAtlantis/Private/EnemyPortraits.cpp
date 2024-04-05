// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPortraits.h"

#include "CombatManager.h"
#include "EnemyPortraitElement.h"
#include "EnemyCombatEntity.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"

void UEnemyPortraits::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	Portraits.Add(EEnemyCombatPositions::Left  ,BW_Portrait1);
	Portraits.Add(EEnemyCombatPositions::Middle,BW_Portrait2);
	Portraits.Add(EEnemyCombatPositions::Right ,BW_Portrait3);
	
	AFloorGameMode* GameModeBase = Cast< AFloorGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	enemysInCombat = GameModeBase->combatManager->GetEnemysInCombat();


	for (TTuple<EEnemyCombatPositions, UEnemyPortraitElement*> portrait : Portraits)
	{
		portrait.Value->SetRenderOpacity(NO_OPACITY);
	}
	
	for(int i = 0 ; i < enemysInCombat.Num();i++)
	{
		SetEnemyPortraits(Portraits[enemysInCombat[i]->portraitPosition],enemysInCombat[i]);
	}
}

void UEnemyPortraits::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);
}

void UEnemyPortraits::SetEnemyPortraits(UEnemyPortraitElement* aImage, UEnemyCombatEntity* AEnemyCombatEntity)
{
	aImage->SetRenderOpacity(MAX_OPACITY);
	aImage->SetCombatEntity(AEnemyCombatEntity);
}


