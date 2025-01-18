// Fill out your copyright notice in the Description page of Project Settings.


#include "NumbersUIView.h"

#include "CombatLog_AttackDefense_Data.h"
#include "EnemyCombatEntity.h"
#include "EnemyPortraitElement.h"
#include "Health.h"
#include "PlayerCombatEntity.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void UNumbersUIView::SubscribeAllCombatEntitysToView(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,TArray<UEnemyCombatEntity*> aEnemyCombatEntitys)
{
	for (auto Element : aPartyMembersInCombat)
	{
		Element->health->OnDecrementHealth.AddDynamic(this,&UNumbersUIView::OnDecrement);
	}

	for (auto Element : aEnemyCombatEntitys)
	{
		Element->health->OnDecrementHealth.AddDynamic(this,&UNumbersUIView::OnDecrement);
	}
	
}

UNumberElement* UNumbersUIView::CreateNumberElement()
{
	UUserWidget* baseUserWidget = InGameHUD->CreateElement(this,EViewElements::NumberElement);
	UNumberElement* NumberElement = (UNumberElement*)baseUserWidget;
	NumberElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();

	return NumberElement;
}



void UNumbersUIView::OnDecrement(FCombatLog_AttackDefense_Data aAttackDefenceLog, UCombatEntity* CombatEntity)
{
	switch (CombatEntity->characterType)
	{
	case ECharactertype::Undefined:
		break;
	case ECharactertype::Ally:
		SpawnPartyMemberNumbers( aAttackDefenceLog, CombatEntity);
		break;
	case ECharactertype::Enemy:
		SpawnEnemyNumbers( aAttackDefenceLog, CombatEntity);
		break;
	}
}

void UNumbersUIView::SpawnPartyMemberNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog,
	UCombatEntity* CombatEntity)
{
	//UNumberElement* newlySpawnedNumber = CreateNumberElement();

}

void UNumbersUIView::SpawnEnemyNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog, UCombatEntity* CombatEntity)
{
	UNumberElement* newlySpawnedNumber = CreateNumberElement();
	newlySpawnedNumber->SetNumbersText(aAttackDefenceLog);

	UEnemyCombatEntity* EnemyCombatEntity = (UEnemyCombatEntity*)CombatEntity;

	FVector2D ScreenPosition;
	if (PlayerController->ProjectWorldLocationToScreen(EnemyCombatEntity->enemyPortrait->GetActorLocation() + FVector(0,0,450), ScreenPosition))
	{
		// Adjust for DPI scaling
		const float Scale = UWidgetLayoutLibrary::GetViewportScale(PlayerController);

		// Set the position in the viewport
		newlySpawnedNumber->SetPositionInViewport(ScreenPosition / Scale, true); // true to maintain anchor position
	}
}
