// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PassiveSkillFactorySubsystem.generated.h"

class UPassiveSkills;
enum class EPassiveSkillIDS  : uint8;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkillFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<EPassiveSkillIDS,UPassiveSkills*> allPassiveSkills;


public:
	void InitializeDatabase(UDataTable*  aPassiveDataTable);
	UPassiveSkills* GetPassiveSkill(EPassiveSkillIDS aPassiveSkillID);
};
