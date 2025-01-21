// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "CombatLog_Full_Data.h"
#include "CombatLogElement.generated.h"

class UImage;
struct FCombatLog_Full_Data;
class URichTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogElement : public UBaseHighlightElement
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FCombatLog_Full_Data FullCombatLog;
	
	void SetCommandLogHit(FCombatLog_Full_Data CombatLog_Base_Data);
	void SetCommandLogAttackDefence(FCombatLog_Full_Data CombatLog_Base_Data);
	void SetCommandLogFull(FCombatLog_Full_Data CombatLog_Base_Data);
	
};
