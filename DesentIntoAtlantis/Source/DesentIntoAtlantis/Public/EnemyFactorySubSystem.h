// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillsData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EnemyFactorySubSystem.generated.h"



class UDataTable;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyFactorySubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
		
	
	UPROPERTY()
	TArray<USkillBase*> allSkills;

	UPROPERTY()
	TArray<FSkillsData> attackSkillsData;

	UPROPERTY()
	TArray<FSkillsData> healSkillsData;

	UPROPERTY()
	TArray<FSkillsData> buffSkillsData;

	UPROPERTY()
	TArray<FSkillsData> debuffData;
	
	UPROPERTY()
	TMap<FString,USkillBase*> skillMap;
public:
	void InitializeDatabase(TMap<ESkillType,UDataTable*>  aSkillDataTable);
	USkillBase* GetSkill(FString aSkillName);

};
