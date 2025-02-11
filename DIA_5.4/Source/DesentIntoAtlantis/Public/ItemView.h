// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PlayerCombatEntity.h"
#include "ItemView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()


public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void SetItemView(UPlayerCombatEntity* aPlayerCombatEntity);
	void SelectSkill();
};
