// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "EnemySelectionElement.generated.h"

struct FEnemyCombatEntity;
struct FEnemyEntityData;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemySelectionElement : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	FEnemyCombatEntity* enemyCombatEntity;
	
public:
	void SetEnemySelectionElement(FEnemyCombatEntity* aEnemyCombatEntity);
	
	void SetElementalText(UTextBlock* aElementalText, FEnemyEntityData* aEnemyEntityData );

	void SetHighlightSelectionElement(float aDamageValue,int Opacity);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_EnemyName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_NullText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_FireText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_IceText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_WindText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_EarthText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_LightningText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_LightText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ShadowText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Healthbar_MainBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Healthbar_Temporary;
	
	
};
