// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatTokenRowElement.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "EnemySelectionElement.generated.h"

enum class EElementalType: uint8;
class UEnemyCombatEntity;
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
	UPROPERTY()
	UEnemyCombatEntity* enemyCombatEntity;
	float previousHealthPercentage;
	float currentHealthPercentage;
public:
	
	void SetEnemySelectionElement(UEnemyCombatEntity* aEnemyCombatEntity);
	
	void SetElementalText(UTextBlock* aElementalText, EElementalType aElementalType ,UEnemyCombatEntity* aEnemyEntityData );

	void SetHighlightSelectionElement(float aDamageValue,int Opacity);
	UFUNCTION()
	void UpdateHealthbarElements();
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

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
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCombatTokenRowElement* BW_CombatTokenRow;
	
	
};
