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
	TArray<FSkillModification> skillModification;
	
	UPROPERTY()
	UCombatEntity* attachedCombatEntity;

	UPROPERTY()
	UPassiveHandler* attachedPassiveHandler;
	
	void Initialize(UCombatEntity* aAttachedCombatEntity,UPassiveHandler* aPassiveHandler);

	void AddSkillModification(FSkillModification aSkillModification);
	void ValidateAllSkillModifications();

	FSkillsData ModifySkill(FSkillsData aSkillData,TArray<FSkillModification>  aModifySkill);

	bool isSkillModifcationValidForSkill(FSkillsData aSkill, FSkillModification aSkillModification);

	
	
};
