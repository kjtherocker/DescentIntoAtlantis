// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLogDetailedElement.h"
#include "CombatLog_Detailed_Base_Element.h"
#include "CombatLogDetailedHitElement.generated.h"

class URichTextBlock;
struct FCombatLog_Hit_Data;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogDetailedHitElement : public UCombatLog_Detailed_Base_Element
{
	GENERATED_BODY()

public:
	virtual void SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud) override;

	
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_HitChanceText;

		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_TotalHit;

	
};
