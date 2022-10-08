// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "PartyHealthbarElement.generated.h"

struct FPlayerCombatEntity;
struct FCombatEntity;
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
	FPlayerCombatEntity*  playerCombatEntity;
public:

	virtual void UiInitialize() override;

	void SetCombatEntity(FPlayerCombatEntity* aCombatEntity);
	
	bool isTriggeringHitEffect;
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	void HitEffect(float DeltaTime);
	void UpdateHealthBar();
	FString characterName;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Mana;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UProgressBar* BW_Health;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ManaText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_HealthText;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CharacterPortrait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_BackgroundHighlight;
};
