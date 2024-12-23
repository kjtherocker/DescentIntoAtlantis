// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLog_Detailed_Base_Element.generated.h"

struct FCombatLog_Full_Data;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLog_Detailed_Base_Element : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	virtual void SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud);

	virtual void CreateDetailedElement(FString aName, FString aValue);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
};
