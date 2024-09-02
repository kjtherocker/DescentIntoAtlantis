// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "PartyHealthbarElement.generated.h"

enum class EStatusAilments;
class UPlayerCombatEntity;
class UTextBlock;
class UProgressBar;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyHealthbarElement : public UBaseUserWidget
{
	GENERATED_BODY()

protected:
	float movementTimer = 0;
	UPROPERTY()
	UPlayerCombatEntity*  playerCombatEntity;

	const int MOVEUP_TRANSLATION_OFFSET = -35;
	float previousHealthPercentage;
	float currentHealthPercentage;
public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	virtual void SetCombatEntity(UPlayerCombatEntity* aCombatEntity);
	
	bool isTriggeringHitEffect;
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	UFUNCTION()
	virtual void UpdateHealthbarElements();
	virtual void HitEffect(float DeltaTime);
	UFUNCTION()
	virtual void TriggerHitEffect();
	UFUNCTION()
	virtual void TriggerGreyScale();

	UFUNCTION()
	virtual void TriggerAilmentEffect(EStatusAilments aStatusAilment);
	
	virtual void MoveUp();
	virtual void ResetTranslation();
	FString characterName;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Mana;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Sync;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health_Slow;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ManaText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_HealthText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CharacterPortrait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
};
