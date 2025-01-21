// Fill out your copyright notice in the Description page of Project Settings.


#include "NumbersUIView.h"
#include "NiagaraFunctionLibrary.h"
#include "CombatLog_AttackDefense_Data.h"
#include "EnemyCombatEntity.h"
#include "EnemyPortraitElement.h"
#include "Health.h"
#include "PartyHealthbarElement.h"
#include "PlayerCombatEntity.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void UNumbersUIView::SubscribeAllCombatEntitysToView(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,TArray<UEnemyCombatEntity*> aEnemyCombatEntitys)
{
	for (auto Element : aPartyMembersInCombat)
	{
		Element->health->OnDecrementHealth.AddDynamic(this,&UNumbersUIView::OnDecrement);
		Element->combatEntityHub->EvadedAttack.AddDynamic(this,&UNumbersUIView::OnEvadedAttack );
		Element->combatEntityHub->SpawnSkillParticles.AddDynamic(this,&UNumbersUIView::OnParticleEffectSpawn );
	}

	for (auto Element : aEnemyCombatEntitys)
	{
		Element->health->OnDecrementHealth.AddDynamic(this,&UNumbersUIView::OnDecrement);
		Element->combatEntityHub->EvadedAttack.AddDynamic(this,&UNumbersUIView::OnEvadedAttack );
		Element->combatEntityHub->SpawnSkillParticles.AddDynamic(this,&UNumbersUIView::OnParticleEffectSpawn );
	}
	
}

UMissedElement* UNumbersUIView::CreateMissedElementForNumberView()
{
	return CreateMissedElement(this);
}

UMissedElement* UNumbersUIView::CreateMissedElement(UBaseUserWidget* aBaseUserWidget)
{
	UUserWidget* baseUserWidget = InGameHUD->CreateElement(aBaseUserWidget,EViewElements::MissedElement);
	UMissedElement* MissedElement = (UMissedElement*)baseUserWidget;
	MissedElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();

	return MissedElement;
}

UNumberElement* UNumbersUIView::CreateNumberElementForNumberView()
{
	return CreateNumberElement(this);
}

UNumberElement* UNumbersUIView::CreateNumberElement(UBaseUserWidget* aBaseUserWidget)
{
	UUserWidget* baseUserWidget = InGameHUD->CreateElement(aBaseUserWidget,EViewElements::NumberElement);
	UNumberElement* NumberElement = (UNumberElement*)baseUserWidget;
	NumberElement->UiInitialize(gameModeBase);
	baseUserWidget->AddToViewport();

	return NumberElement;
}

void UNumbersUIView::OnParticleEffectSpawn(UNiagaraSystem* aNiagaraSystem, UCombatEntity* CombatEntity)
{
	switch (CombatEntity->characterType)
	{
	case ECharactertype::Undefined:
		break;
	case ECharactertype::Ally:
	
		break;
	case ECharactertype::Enemy:
		UEnemyCombatEntity* EnemyCombatEntity = (UEnemyCombatEntity*)CombatEntity;
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		EnemyCombatEntity->enemyPortrait->GetWorld(),
		aNiagaraSystem,
		EnemyCombatEntity->enemyPortrait->GetCenterOfPortraitPosition() + FVector(-100,0,100),
		FRotator()
	);
		break;
	}
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

void UNumbersUIView::OnEvadedAttack(FCombatLog_Hit_Data aEvasionLog,UCombatEntity* CombatEntity)
{
	switch (CombatEntity->characterType)
	{
	case ECharactertype::Undefined:
		break;
	case ECharactertype::Ally:
		SpawnPartyMemberEvadedAttack( aEvasionLog, CombatEntity);
		break;
	case ECharactertype::Enemy:
		SpawnEnemyEvadedAttack( aEvasionLog, CombatEntity);
		break;
	}
}

void UNumbersUIView::SpawnPartyMemberEvadedAttack(FCombatLog_Hit_Data aEvasionLog,
	UCombatEntity* CombatEntity)
{
	UPlayerCombatEntity* playerCombatEntity = (UPlayerCombatEntity*)CombatEntity;
	UPartyHealthbarElement* playerHealthbar = playerCombatEntity->partyHealthbarElement;
	
	UMissedElement* newlySpawnedNumber = CreateMissedElementForNumberView();


	playerHealthbar->BW_DamageSpawnPoint->AddChildToCanvas(newlySpawnedNumber);
}

void UNumbersUIView::SpawnEnemyEvadedAttack(FCombatLog_Hit_Data aEvasionLog,
	UCombatEntity* CombatEntity)
{
	UMissedElement* newlySpawnedNumber = CreateMissedElementForNumberView();

	UEnemyCombatEntity* EnemyCombatEntity = (UEnemyCombatEntity*)CombatEntity;

	FVector2D ScreenPosition;
	if (PlayerController->ProjectWorldLocationToScreen(EnemyCombatEntity->enemyPortrait->GetActorLocation() + FVector(0,-140,450), ScreenPosition))
	{
		// Adjust for DPI scaling
		const float Scale = UWidgetLayoutLibrary::GetViewportScale(PlayerController);

		// Set the position in the viewport
		newlySpawnedNumber->SetPositionInViewport(ScreenPosition / Scale, true); // true to maintain anchor position
	}
}

void UNumbersUIView::SpawnPartyMemberNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog,
                                             UCombatEntity* CombatEntity)
{
	UPlayerCombatEntity* playerCombatEntity = (UPlayerCombatEntity*)CombatEntity;
	UPartyHealthbarElement* playerHealthbar = playerCombatEntity->partyHealthbarElement;
	
	UNumberElement* newlySpawnedNumber = CreateNumberElement(playerHealthbar);

	newlySpawnedNumber->SetNumbersText(aAttackDefenceLog);
	playerHealthbar->BW_DamageSpawnPoint->AddChildToCanvas(newlySpawnedNumber);
}

void UNumbersUIView::SpawnEnemyNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog, UCombatEntity* CombatEntity)
{
	UNumberElement* newlySpawnedNumber = CreateNumberElementForNumberView();
	newlySpawnedNumber->SetNumbersText(aAttackDefenceLog);

	UEnemyCombatEntity* EnemyCombatEntity = (UEnemyCombatEntity*)CombatEntity;

	FVector2D ScreenPosition;
	if (PlayerController->ProjectWorldLocationToScreen(EnemyCombatEntity->enemyPortrait->GetActorLocation() + FVector(0,-150,450), ScreenPosition))
	{
		// Adjust for DPI scaling
		const float Scale = UWidgetLayoutLibrary::GetViewportScale(PlayerController);

		// Set the position in the viewport
		newlySpawnedNumber->SetPositionInViewport(ScreenPosition / Scale, true); // true to maintain anchor position
	}
}
