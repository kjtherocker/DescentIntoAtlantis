// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemyCombatEntity.h"
#include "EnemySelectionElement.h"
#include "Skills_Base.h"
#include "CombatSelectionView.generated.h"

class UCombatManager;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatSelectionView : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	UCombatManager* combatManager;
	UPROPERTY()
	FSkills_Base currentSkill;
	bool hasCursor;
	int cursorMaxRange;
	int cursorPosition;

	TArray<UEnemyCombatEntity*> enemysInCombat;
public:

	virtual void UiInitialize() override;

	void InitializeEnemySelectionElements(TArray<UEnemyCombatEntity*> aEnemysInCombat);
	void SetSkill(FSkills_Base aSkill);

	void ActivateSkill();

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
