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

UENUM()
enum class ECombatLogConfiguration  : uint8
{
	None               = 0,
	Full               = 1,
	AttackDefense      = 2,
	HitEvasion         = 3,
};


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
	virtual void SetDetailedLog(FCombatLog_Full_Data aFullCombatLog,
		ECombatLogConfiguration aCombatLogConfiguration,FString logText);

	virtual void MoveUp() override;
	virtual void MoveDown() override;

	virtual void RemoveFromScrollBox(UUserWidget* aUserWidget);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UScrollBox* BW_ScrollBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_LogText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedHitElement* BW_HitElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedEvasionElement* BW_EvasionElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedDamageElement* BW_DamageElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatLogDetailedDefenceElement* BW_DefenceElement;
	
};
