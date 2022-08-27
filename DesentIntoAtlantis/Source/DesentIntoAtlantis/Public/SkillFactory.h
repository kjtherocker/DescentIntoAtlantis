// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkillFactory.generated.h"

struct FSkills_Base;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillFactory : public UObject
{
	GENERATED_BODY()

	USkillFactory();

	TArray<FSkills_Base*> allSkills;
	TMap<FString,FSkills_Base*> skillMap;
public:
	FSkills_Base* GetSkill(FString aSkillName);
};
