// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveHandler.h"
#include "UObject/NoExportTypes.h"
#include "SkillHandler.generated.h"

enum class EClassSlot : uint8;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<ESkillIDS,USkillBase*> currentSkills;
	
public:

	UPROPERTY()
	USkillBase* chargingSkill;

UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	TMap<EPassiveSkillID,FSkillModification> skillModification;
	
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;

	UPROPERTY()
	UPassiveHandler* attachedPassiveHandler;
	
	void Initialize(UCombatEntity* aAttachedCombatEntity,USkillFactorySubsystem* aSkillFactorySubsystem,UPassiveHandler* aPassiveHandler);

	void AddSkill(ESkillIDS aSkillID);
	void RemoveSkill(ESkillIDS aSkillID);

	USkillBase* GetActiveSkill(ESkillIDS aSkillID);

	UFUNCTION()
	void OnTurnStart();
	
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
