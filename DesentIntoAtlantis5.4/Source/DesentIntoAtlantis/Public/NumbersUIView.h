// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "NumberElement.h"
#include "NumbersUIView.generated.h"

class UEnemyCombatEntity;
class UPlayerCombatEntity;
class UCombatEntity;
struct FCombatLog_AttackDefense_Data;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UNumbersUIView : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY()
	APlayerController* PlayerController;
	
public:


	
	void InitializePlayerController(APlayerController* aPlayerController){PlayerController = aPlayerController;}
	void SubscribeAllCombatEntitysToView(TArray<UPlayerCombatEntity*> aPartyMembersInCombat,TArray<UEnemyCombatEntity*> aEnemyCombatEntitys );
	UNumberElement* CreateNumberElement();
	UFUNCTION()
	void OnDecrement(FCombatLog_AttackDefense_Data aAttackDefenceLog,UCombatEntity* CombatEntity);

	UFUNCTION()
	void SpawnPartyMemberNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog,UCombatEntity* CombatEntity);

	UFUNCTION()
	void SpawnEnemyNumbers(FCombatLog_AttackDefense_Data aAttackDefenceLog,UCombatEntity* CombatEntity);
	
};
