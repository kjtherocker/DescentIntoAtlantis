// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/Image.h"
#include "EnemyPortraits.generated.h"

struct FEnemyCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyPortraits : public UBaseUserWidget
{
	GENERATED_BODY()
public:
	virtual void UiInitialize() override;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portrait3;
	
	TArray<FEnemyCombatEntity*> enemysInCombat;
	
	TArray<UImage*> Portraits;
	void SetEnemyPortraits(UImage* Aimage , FEnemyCombatEntity* AEnemyCombatEntity);
	
	
};
