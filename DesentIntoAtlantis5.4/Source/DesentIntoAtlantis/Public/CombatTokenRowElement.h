// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatTokenHandler.h"
#include "CombatToken_UiElement.h"
#include "Components/HorizontalBox.h"
#include "CombatTokenRowElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatTokenRowElement : public UBaseUserWidget
{
	GENERATED_BODY()

protected:
	
	UPROPERTY()
	UCombatTokenHandler* combatTokenHandler;

	UPROPERTY()
	TArray<UCombatToken_UiElement*> CombatTokenUiElements;
	
public :
	void InitializeCombatTokenRow(UCombatTokenHandler* aCombatTokenHandler,AInGameHUD* aInGameHUD);
	UFUNCTION()
	void SpawnNewCombatToken(UCombatToken_Base* aCombatToken);
	UFUNCTION()
	void RemoveCombatToken(UCombatToken_Base* aCombatToken);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox* BW_HorizontalBox;

	UPROPERTY()
	AInGameHUD* InGameHUD2;
};
