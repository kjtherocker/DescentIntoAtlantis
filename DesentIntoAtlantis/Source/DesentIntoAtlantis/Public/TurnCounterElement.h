// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatEntity.h"
#include "TurnCounterElement.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UTurnCounterElement : public UBaseUserWidget
{
	GENERATED_BODY()

	TMap<ECharactertype,UImage*> turnIcons;

	const int MAX_OPACITY = 100;
	const int MIN_OPACITY = 0;
public:
	virtual void UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase) override;

	void SwitchTurnIcons(ECharactertype aCharacterType);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TurnIconAlly;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TurnIconEnemy;

	
};
