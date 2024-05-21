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
	
	float movementTimer = 0;
	UPROPERTY()
	UPlayerCombatEntity*  playerCombatEntity;

	const int MOVEUP_TRANSLATION_OFFSET = -100;
	
public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void SetCombatEntity(UPlayerCombatEntity* aCombatEntity);
	
	bool isTriggeringHitEffect;
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	UFUNCTION()
	void UpdateHealthbarElements();
	void HitEffect(float DeltaTime);
	UFUNCTION()
	void TriggerHitEffect();
	UFUNCTION()
	void TriggerGreyScale();

	UFUNCTION()
	void TriggerAilmentEffect(EStatusAilments aStatusAilment);
	
	void MoveUp();
	void ResetTranslation();
	FString characterName;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Mana;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Sync;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ManaText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_HealthText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CharacterPortrait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
};
