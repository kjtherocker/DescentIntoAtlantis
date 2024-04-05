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
	
	UPROPERTY()
	TMap<ECharactertype,UImage*> turnIcons;

	const int MAX_OPACITY = 100;
	const int MIN_OPACITY = 0;
public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void SwitchTurnIcons(ECharactertype aCharacterType);
	void EmpowerTurn(bool aIsEmpowered);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TurnIconAlly;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_TurnIconEnemy;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_EmpoweredIcon;
};
