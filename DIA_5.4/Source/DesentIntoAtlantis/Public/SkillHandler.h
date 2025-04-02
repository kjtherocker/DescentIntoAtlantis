// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatGameModeBase.h"

#include "UObject/NoExportTypes.h"
#include "SkillHandler.generated.h"

class UCombatInterruptManager;
enum class EClassSlot : uint8;
/**
 * 
 */


UENUM()
enum class ESkillStringParseType : uint8
{
	None       = 0,
	Damage     = 1,
	Element    = 2,
	DamageType = 3,
};


UCLASS()
class DESENTINTOATLANTIS_API USkillHandler : public UObject
{
	GENERATED_BODY()

private:

	void InitializeSkillStrings();
public:

	UPROPERTY()
	TMap<ESkillIDS,USkillBase*> currentSkills;

	UPROPERTY()
	TMap<EElementalType, FString> elementalTypeString;

	UPROPERTY()
	TMap<ESkillDamageType, FString> skillDamageTypeString;

	UPROPERTY()
	TMap<EStatTypes, FString> skillScaleStatString;

	UPROPERTY()
	TMap<ESkillType, FString> skillTypeString;
	
	UPROPERTY()
	TMap<FString,ESkillStringParseType> skillDescriptionParse;

	UPROPERTY()
	USkillResolveSubsystem* skillResolveSubsystem;
	
	UPROPERTY()
	USkillBase* chargingSkill;
	
	UPROPERTY()
	ACombatGameModeBase* CombatGameModeBase;
UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	TMap<EPassiveSkillID,FSkillModification> skillModification;
	
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;

	UPROPERTY()
	UPassiveHandler* attachedPassiveHandler;
	
	void Initialize(UCombatEntity* aAttachedCombatEntity,USkillFactorySubsystem* aSkillFactorySubsystem,UPassiveHandler* aPassiveHandler);

	void InitializeCombat(USkillResolveSubsystem* aSkillResolveSubsystem,ACombatGameModeBase* aCombatGameModeBase);
	
	void AddSkill(ESkillIDS aSkillID);
	void RemoveSkill(ESkillIDS aSkillID);

	USkillBase* GetActiveSkill(ESkillIDS aSkillID);

	TArray<USkillBase*> GetSkillsByID(TArray<ESkillIDS> aSkillIds);
	TArray<USkillBase*> GetAllCurrentSkills();

	UFUNCTION()
	void PassiveAdded(UPassiveSkills* PassiveSkills);
	UFUNCTION()
	void PassiveRemoved(UPassiveSkills* PassiveSkills);

	void RemoveSkillModification(EPassiveSkillID aPassiveSkillID);
	void AddSkillModification(EPassiveSkillID aPassiveSkillID,FSkillModification aSkillModification);
	void ValidateAllSkillModifications();

	void SetChargingSkill(USkillBase* aSkillData);
	bool isSkillCharging();

	FString ParseSkillDescription(FSkillsData aSkillData);

	FString GetSkillValuesStrings(FSkillsData aSkillData, ESkillStringParseType aSkillStringParseType);
	
	UFUNCTION()
	void OnTurnStart();
	
	

	FSkillsData ModifySkill(FSkillsData aSkillData,TArray<FSkillModification>  aSkillModification);

	FSkillsData ModifyDamage(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	
	FSkillsData ModifyCostToUse(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);

	FSkillsData ModifySkillHit(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);

	FSkillsData ModifySkillElementalType(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillResource(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillDamageType(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillScaleStat(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillType(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillUsage(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillRange(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);
	FSkillsData ModifySkillCombatTokens(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);


	bool isSkillModifcationValidForSkill(FSkillsData aSkill, FSkillModification aSkillModification);

	
	
};
