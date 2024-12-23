// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "CombatLogDetailedDamageElement.h"
#include "CombatLogDetailedDefenceElement.h"
#include "CombatLogDetailedEvasionElement.h"
#include "CombatLogDetailedHitElement.h"
#include "CombatLog_Hit_Data.h"
#include "CombatLogSelectionView.generated.h"

class UCombatLogElement;
struct FCombatLog_Full_Data;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogSelectionView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
	

	
	UPROPERTY()
	TArray<UCombatLogElement*> CombatLogElements;
	
	virtual void SetCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas);
	virtual void CreateCombatLogElement(FCombatLog_Full_Data aFullCombatLog);
	
	virtual void MoveUp() override;
	virtual void MoveDown() override;

	virtual void SetCursorPositionInfo() override;
	
	virtual void SetDefaultMenuState() override;
	virtual void ActivateMenuSelection() override;
};
