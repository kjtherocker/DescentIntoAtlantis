// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skills_Base.h"
#include "UObject/NoExportTypes.h"
#include "SkillFactory.generated.h"

class UDataTable;


/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillFactory : public UObject
{
	GENERATED_BODY()

	USkillFactory();

	UPROPERTY()
	TArray<FSkills_Base> allSkills;
	
	UPROPERTY()
	TMap<FString,FSkills_Base> skillMap;
public:
	void InitializeDatabase(UDataTable* aSkillDataTable);
	FSkills_Base GetSkill(FString aSkillName);
};
