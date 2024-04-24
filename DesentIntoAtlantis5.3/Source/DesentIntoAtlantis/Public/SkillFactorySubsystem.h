// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SkillsData.h"
#include "SkillFactorySubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	
	
	UPROPERTY()
	TMap<FString,USkillBase*> skillMap;
public:
	void InitializeDatabase(TMap<ESkillType,UDataTable*>  aSkillDataTable);
	USkillBase* GetSkill(FString aSkillName);

	
};
