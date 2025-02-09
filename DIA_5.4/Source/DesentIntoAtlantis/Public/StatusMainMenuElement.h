// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PartyHealthbarElement.h"
#include "StatusMainMenuElement.generated.h"


enum class EStatusAilments : uint8;
class UPlayerCombatEntity;
class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UStatusMainMenuElement : public UPartyHealthbarElement
{

	GENERATED_BODY()

public:
	virtual void SetCombatEntity(UPlayerCombatEntity* aCombatEntity) override;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CharacterName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_MainClassText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SubClassText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_ElementalStrength;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_ElementalWeakness;

	
};
