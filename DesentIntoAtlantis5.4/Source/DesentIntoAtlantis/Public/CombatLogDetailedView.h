// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLogDetailedDamageElement.h"
#include "CombatLogDetailedEvasionElement.h"
#include "CombatLogDetailedHitElement.h"
#include "CombatLogDetailedDefenceElement.h"
#include "Components/ScrollBoxSlot.h"
#include "CombatLogDetailedView.generated.h"

class UScrollBox;
struct FCombatLog_Full_Data;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogDetailedView : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void SetDetailedLog(FCombatLog_Full_Data aFullCombatLog);

	virtual void MoveUp() override;
	virtual void MoveDown() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UScrollBox* BW_ScrollBox;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedHitElement* BW_HitElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedEvasionElement* BW_EvasionElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedDamageElement* BW_DamageElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedDefenceElement* BW_DefenceElement;
	
};
