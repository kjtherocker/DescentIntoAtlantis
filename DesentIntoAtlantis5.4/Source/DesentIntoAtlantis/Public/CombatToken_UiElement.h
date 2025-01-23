// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base.h"
#include "UiElement.h"
#include "Components/Image.h"
#include "Components/RichTextBlock.h"
#include "CombatToken_UiElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_UiElement : public UUiElement
{
	GENERATED_BODY()
	UPROPERTY()
	UCombatToken_Base* CombatToken_Base;
	
public:
	void SetCombatTokenUiElement(UCombatToken_Base* aCombatToken, UTexture2D* aTokenImage);

	
	UPROPERTY()
	ECombatTokenID CombatTokenID;
	UFUNCTION()
	void UpdateCombatToken(FCombatTokenCurrentStatInfo aStateInfo);

	void UpdateTokenBackground(ECombatTokenType aCombatTokenType);
	int GetCombatTokenSlotNumber();

	UPROPERTY(EditAnywhere)
	TMap<ECombatTokenType,UTexture2D*> combatTokenTextures;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatTokenStack;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_CombatTokenTurnsLeft;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TokenBackground;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TokenIcon;
};
