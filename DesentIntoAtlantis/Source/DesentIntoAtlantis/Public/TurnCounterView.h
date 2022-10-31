// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatEntity.h"
#include "TurnCounterView.generated.h"

class UTurnCounterElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UTurnCounterView : public UBaseUserWidget
{
	GENERATED_BODY()

	virtual void UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase) override;
	
	TArray<UTurnCounterElement*> TurnCounter;

	void AddTurnCounterToUi(TSubclassOf<UUserWidget> aTurnCounter);
	
public:
	void SetEmpowerTurnIcon(int aTurnIndex);
	void SetTurnOrder(int turn, ECharactertype aCharacterType);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UHorizontalBox* BW_HorizontalBox;
};
