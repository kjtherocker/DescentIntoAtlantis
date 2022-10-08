// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/Image.h"
#include "EnemyPortraits.generated.h"

class UEnemyPortraitElement;
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
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemyPortraitElement* BW_Portrait1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemyPortraitElement* BW_Portrait2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEnemyPortraitElement* BW_Portrait3;
	
	TArray<FEnemyCombatEntity*> enemysInCombat;
	
	TArray<UEnemyPortraitElement*> Portraits;
	void SetEnemyPortraits(UEnemyPortraitElement* aImage , FEnemyCombatEntity* AEnemyCombatEntity);
	
	
	
};
