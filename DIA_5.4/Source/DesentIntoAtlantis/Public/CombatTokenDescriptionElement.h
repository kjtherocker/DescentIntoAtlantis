// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "PassiveSkillData.h"
#include "CombatLog_Full_Data.h"
#include "CombatTokenDescriptionElement.generated.h"

class UPassiveFactorySubsystem;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatTokenDescriptionElement : public UBaseHighlightElement
{
	GENERATED_BODY()



public:


	void SetCombatToken(UPassiveFactorySubsystem* aPassiveFactorySubsystem,FCombatTokenStackData aCombatToken);


	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatTokenName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatTokenStackInfo;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatTokenDescription;
    	
	
	
};
