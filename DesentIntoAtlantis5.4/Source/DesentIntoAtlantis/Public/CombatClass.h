// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "EDataTableTypes.h"
#include "PassiveSkillData.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "SkillBase.h"
#include "CombatClass.generated.h"

class UPlayerCombatEntity;
class USkillFactorySubsystem;
class UCombatEntity;

/**
 * 
 */
//A combat class is filled with the bases of all stats
USTRUCT(Atomic)
struct DESENTINTOATLANTIS_API FClassData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()
	
};

USTRUCT(Atomic)
struct DESENTINTOATLANTIS_API FCompleteClassData  :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	FString className;
	
	UPROPERTY( EditAnywhere )
	EClasses classIdentifer = EClasses::None;

	UPROPERTY(EditAnywhere)
	int ClassPointCostToUnlock = 0;
	UPROPERTY( EditAnywhere )
	FClassData classBaseStat;

	UPROPERTY( EditAnywhere )

	TMap<int,ESkillIDS> unlockableSkillByLevel;

	
	UPROPERTY()
	EPartyMembers attachedEntityIdentifier = EPartyMembers::None;

	UPROPERTY()
	TArray<FSkillsData> syncSkills;

	
	UPROPERTY()
	FClassData classStatBase;

	UPROPERTY(EditAnywhere)
	EPassiveSkillID classLockedPassive;
	UPROPERTY(EditAnywhere)
	TArray<FPassiveSkillClassData> classPassives;
	
	UPROPERTY()
	int currentLevel = 0;

	UPROPERTY( EditAnywhere )
	EElementalType ElementalStrength;
	
	UPROPERTY( EditAnywhere )
	EElementalType ElementalWeakness;

};



UCLASS()
class UCombatClass : public UObject
{
	GENERATED_BODY()
	
private:
	bool isReadyToLevelup = false;

public:

	void InitializeDependencys(USkillFactorySubsystem* aSkillFactory, UPlayerCombatEntity* aCombatEntity);


	void CreateClass(FCompleteClassData aLoadedClass,int aClassLevel);
	UPROPERTY()
	UPlayerCombatEntity* attachedCombatEntity;

	UPROPERTY()
	FCompleteClassData completeClassData;
	
	UPROPERTY()
	TArray<USkillBase*> classSkills;
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	UPROPERTY()
	int currentClassIndex;
	
	bool AddExperience(int aExperience);
	void CreateAllClassSkillsForLevel(FCompleteClassData aCompleteClassData);

	int experience;
};



