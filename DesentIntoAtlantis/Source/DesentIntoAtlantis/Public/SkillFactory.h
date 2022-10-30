// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillsData.h"
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
private:
	
	
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
