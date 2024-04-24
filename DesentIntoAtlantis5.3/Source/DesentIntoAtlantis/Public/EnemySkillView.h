// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "EnemyCombatEntity.h"
#include "EnemySkillView.generated.h"

class UImage;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemySkillView : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	void SetSkill(FSkillsData aSkill, UEnemyCombatEntity* aEnemyCombatEntity);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_SkillIcon;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SkillName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_EnemyName;
};
