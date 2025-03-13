// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillFactorySubsystem.h"
#include "UObject/NoExportTypes.h"
#include "CompleteClassHandlerData.h"
#include "ClassHandler.generated.h"


class UPartyManagerSubsystem;
enum class EClassID : uint8;
class UCombatClass;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassHandler : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	USkillHandler* skillHandler;
	
	UPROPERTY()
	UCombatClass* mainClass;

	UPROPERTY()
	UCombatClass* subClass;

	UPROPERTY()
	USkillFactorySubsystem* skillfactorySubsystem;

	UPROPERTY()
	UPartyManagerSubsystem* partyManager;
	
	UPROPERTY()
	TMap<EClassID,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FCompleteClassHandlerData CompleteClassHandlerData;
	
	UPROPERTY()
	UPlayerCombatEntity* playerCombatEntity;
	virtual void LoadSavedClassHandler(	FCompleteClassHandlerData aCompleteClassHandlerData,TMap<EClassID,FCompleteClassData> aClassDataTables);
	virtual void InitializeClassHandler(UPlayerCombatEntity* aPlayerCombatEntity, USkillFactorySubsystem* SkillFactorySubsystem,UPartyManagerSubsystem* aPlayerManager);
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData);
	virtual void SetClass(EClassID aClass, EClassSlot ClassSlot);
	virtual TArray<USkillBase*> GetClassSkills(EClassSlot ClassSlot);

	virtual void UnlockAllOwnedPassives(EClassID aClassID,TArray<FPassiveSkillClassData> aPassiveSkillData);

	virtual TMap<EPassiveSkillID,FPassiveSkillClassData> GetUnlockedPassives(){return  CompleteClassHandlerData.unlockedPassives;}

	virtual void UnlockClass(EClassID aClass);
	virtual void UpdateMainClassAndSubclassData();
	virtual FCompleteClassData ValidateSavedClassAndDataClass(FCompleteClassData aSavedClass,FCompleteClassData aDatatableClass);
	virtual TArray<FSkillClassData> ValidateSkills(FCompleteClassData aSavedClass,FCompleteClassData aDatatableClass);
	virtual TArray<FPassiveSkillClassData> ValidatePassives(FCompleteClassData aSavedClass,FCompleteClassData aDatatableClass);
	virtual FString GetClassName(EClassSlot aClass);

	void SpendClassPointsAndUnlockSkill(int aClassPoints,EClassID aClassID,ESkillIDS aSkillID);
	void UnlockSkill(EClassID aClassID,ESkillIDS aSkillID);

	void SpendClassPointsAndUnlockPassiveSkill(int aClassPoints,EClassID aClassID,EPassiveSkillID aSkillID);
	void UnlockPassiveSkill(EClassID aClassID,EPassiveSkillID aSkillID);

	void UnlockAllSkills();
	
	void UnlockAllMainClassPassives();

	virtual bool HasEnoughClassPoints(int aClassPoints);
	virtual void GiveClassPoints(int aClassPoints);
	virtual void RemoveClassPoints(int aClassPoints);
	virtual int  GetClassPoints();
	
	
};
