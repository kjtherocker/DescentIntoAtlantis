// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CompleteElementalHandlerData.h"
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

	UPROPERTY( EditAnywhere , Category = "Identity")
	EClasses classIdentifer = EClasses::None;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	FString className;

	UPROPERTY(EditAnywhere, Category = "Identity")
	EClassArchetype Archetype;

	UPROPERTY(EditAnywhere, Category = "Identity")
	EClassSubArchetype subArchetype;

	UPROPERTY( EditAnywhere, Category = "Identity" )
	FCompleteElementalHandlerData CompleteElementalHandlerData;

	UPROPERTY( EditAnywhere , Category = "Stat")
	FClassData classBaseStat;
	
	UPROPERTY(EditAnywhere , Category = "Cost")
	int ClassPointCostToUnlock = 0;
	
	UPROPERTY( EditAnywhere , Category = "SkillDefinition")
	TMap<int,ESkillIDS> unlockableSkillByLevel;

	UPROPERTY(EditAnywhere , Category = "SkillDefinition")
	EPassiveSkillID classLockedPassive;
	UPROPERTY(EditAnywhere, Category = "SkillDefinition")
	TArray<FPassiveSkillClassData> classPassives;
	
	UPROPERTY()
	EPartyMembers attachedEntityIdentifier = EPartyMembers::None;

	UPROPERTY()
	TArray<FSkillsData> syncSkills;
	
	UPROPERTY()
	FClassData classStatBase;
};



UCLASS()
class UCombatClass : public UObject
{
	GENERATED_BODY()
	
private:
	bool isReadyToLevelup = false;

public:

	void InitializeDependencys(USkillFactorySubsystem* aSkillFactory, UPlayerCombatEntity* aCombatEntity);


	void CreateClass(FCompleteClassData aLoadedClass);
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
	
	void CreateAllClassSkillsForLevel(FCompleteClassData aCompleteClassData);

	int experience;
};



