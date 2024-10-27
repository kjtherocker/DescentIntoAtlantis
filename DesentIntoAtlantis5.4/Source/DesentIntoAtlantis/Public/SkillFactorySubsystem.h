// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SkillBase.h"
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
	TMap<ESkillIDS,USkillBase*> allSkillsMap;

	UPROPERTY()
	TMap<EStatusAilments,UAilment*> allAliments;
public:
	void InitializeDatabase(UDataTable*  aSkillDataTable);
	USkillBase* GetSkill(ESkillIDS aSkillID);
	UAilment* GetAilment(EStatusAilments aAilment);

	
};
