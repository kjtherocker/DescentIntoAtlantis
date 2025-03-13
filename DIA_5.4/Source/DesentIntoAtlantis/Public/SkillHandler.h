// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveHandler.h"
#include "UObject/NoExportTypes.h"
#include "SkillHandler.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillHandler : public UObject
{
	GENERATED_BODY()


public:

	UPROPERTY()
	TArray<USkillBase*> currentSkills;

	
	UPROPERTY()
	TMap<EPassiveSkillID,FSkillModification> skillModification;
	
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;

	UPROPERTY()
	UPassiveHandler* attachedPassiveHandler;
	
	void Initialize(UCombatEntity* aAttachedCombatEntity,UPassiveHandler* aPassiveHandler);

	void AddSkillModification(EPassiveSkillID aPassiveSkillID,FSkillModification aSkillModification);
	void ValidateAllSkillModifications();

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
