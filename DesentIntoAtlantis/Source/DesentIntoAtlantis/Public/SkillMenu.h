// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "SkillMenu.generated.h"

struct FCombatEntity;
struct FSkills_Base;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillMenu : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize() override;

	void CreateSkillbar(FSkills_Base* aSkill);

public:
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
};
