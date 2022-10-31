// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "SkillsData.h"
#include "CombatClass.generated.h"

class UPlayerCombatEntity;
class USkillFactory;
class UCombatEntity;

/**
 * 
 */
//A combat class is filled with the bases of all stats
USTRUCT(Atomic)
struct DESENTINTOATLANTIS_API FClassData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()

	
	UPROPERTY( EditAnywhere )
	FString className;

	UPROPERTY( EditAnywhere )
	FString classLevelID;
	
	UPROPERTY( EditAnywhere )
	int expToNextClassLevel;

	UPROPERTY( EditAnywhere )
	FString newlyObtainedSkill;
};



UCLASS()
class UCombatClass : public UObject
{
	GENERATED_BODY()
	
private:
	bool isReadyToLevelup = false;

public:

	void InitializeDataTable(UDataTable* aClassDataTable,USkillFactory* aSkillFactory, UPlayerCombatEntity * combatEntity,int aInitialLevel);
	ConstructorHelpers::FObjectFinder<UObject> ReturnFoundClass(FString aClassExcelSheet);

	UPROPERTY()
	UPlayerCombatEntity* attachedCombatEntity;

	UPROPERTY()
	FClassData currentClassLevel;

	UPROPERTY()
	TArray<FClassData> classLevels;
	UPROPERTY()
	TArray<USkillBase*> classSkills;
	UPROPERTY()
	USkillFactory* skillFactory;
	
	bool AddExperience(int aExperience);
	FClassData Levelup();
	int experience;
};



