// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemySelectionView.generated.h"

class UEnemySelectionElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemySelectionView : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemySelectionElement* BW_EnemySelectionBar_2;
};
