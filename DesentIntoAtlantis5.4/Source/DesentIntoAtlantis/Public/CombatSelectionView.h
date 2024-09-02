// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemyCombatEntity.h"
#include "EnemySelectionElement.h"
#include "SkillsData.h"
#include "CombatSelectionView.generated.h"

class UPlayerCombatEntity;
class ACombatGameModeBase;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatSelectionView : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY()
	ACombatGameModeBase* combatManager;
	UPROPERTY()
	USkillBase* currentSkill;

	UPROPERTY()
	TArray<UPlayerCombatEntity*> playersInCombat;
	
	bool hasCursor;

	UPROPERTY()
	TArray<UEnemyCombatEntity*> enemysInCombat;
public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void InitializeEnemySelectionElements(TArray<UEnemyCombatEntity*> aEnemysInCombat);
	void SetCombatGameMode(ACombatGameModeBase* aCombatGameMode);
	void SetSkill(USkillBase* aSkill);
	virtual void ReturnToPreviousScreen() override;
	void ActivateSkill();
	
	UPROPERTY()
	TMap<EEnemyCombatPositions,UEnemySelectionElement*> enemySelectionElements;

	void MoveCursorLeft();
	void MoveCursorRight();
	void SetCursorHud(bool aisActive);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar_2;
	
};
