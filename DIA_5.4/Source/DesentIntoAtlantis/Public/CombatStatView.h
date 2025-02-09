// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "StatGrowthElement.h"
#include "CombatStatView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatStatView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

public:

	TMap<int,FString> letterGrade;

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	
	void SetCombatStatView(UCombatEntity* CombatEntity);

	void SetPlayerStatView(UPlayerCombatEntity* aPlayerCombatEntity,UCombatClass* aCombatClass);

	void SetGrowthElement(FString aStatName ,EStatTypes aStatType, UStatGrowthElement* aStatGrowthElement, UPlayerCombatEntity* aPlayerCombatEntity, UCombatClass* aCombatClass);

	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_STR_StatGrowthElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_MAG_StatGrowthElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_Hit_StatGrowthElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_EVA_StatGrowthElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_DEF_StatGrowthElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatGrowthElement * BW_RES_StatGrowthElement;
};
