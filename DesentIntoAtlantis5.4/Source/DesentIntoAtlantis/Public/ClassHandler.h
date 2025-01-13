// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillFactorySubsystem.h"
#include "UObject/NoExportTypes.h"
#include "CompleteClassHandlerData.h"
#include "ClassHandler.generated.h"


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
	UCombatClass* mainClass;

	UPROPERTY()
	UCombatClass* subClass;

	UPROPERTY()
	USkillFactorySubsystem* skillfactorySubsystem;
	
	UPROPERTY()
	TMap<EClassID,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FCompleteClassHandlerData CompleteClassHandlerData;
	
	UPROPERTY()
	UPlayerCombatEntity* playerCombatEntity;
	virtual void LoadSavedClassHandler(	FCompleteClassHandlerData aCompleteClassHandlerData);
	virtual void InitializeClassHandler(UPlayerCombatEntity* aPlayerCombatEntity, USkillFactorySubsystem* SkillFactorySubsystem);
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData);
	virtual void SetClass(EClassID aClass, EClassSlot ClassSlot);
	virtual TArray<USkillBase*> GetClassSkills(EClassSlot ClassSlot);

	virtual TMap<EPassiveSkillID,FPassiveSkillClassData> GetUnlockedPassives(){return  CompleteClassHandlerData.unlockedPassives;}
	
	virtual FString GetClassName(EClassSlot aClass);
	void UnlockSkill(EClassID aClassID,ESkillIDS aSkillID);
	void UnlockPassiveSkill(EClassID aClassID,EPassiveSkillID aSkillID);
	
	virtual void GiveClassPoints(int aClassPoints);
	virtual void RemoveClassPoints(int aClassPoints);
	virtual int  GetClassPoints();
	
	
};
