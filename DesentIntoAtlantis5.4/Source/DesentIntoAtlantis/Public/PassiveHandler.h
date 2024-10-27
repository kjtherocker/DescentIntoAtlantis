// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PassiveHandler.generated.h"

struct FPassiveSkillsData;
struct FSkillsData;
class UPassiveSkills;
class UCombatEntity;
/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveHandlerData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TArray<FPassiveSkillsData> PassiveSkillsDatas;

};

UCLASS()
class DESENTINTOATLANTIS_API UPassiveHandler : public UObject
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere )
	TArray<UPassiveSkills*> passiveSkills;

	UPROPERTY()
	UCombatEntity* ownedCombatEntity;

	FPassiveHandlerData PassiveHandlerData;

public:
	virtual void InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity);
	
	virtual void CheckAttackDefencePassives(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);

	//virtual void GetDamagePassive();
	//virtual void GetHitPassive();
	//virtual void GetHealPassive();
	//virtual void GetAilmentPassive();
	
	virtual bool TryActivatePassive(UPassiveSkills* aPassiveSkills);
	virtual void AddPassive(UPassiveSkills* aPassiveSkills);
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills);

	virtual FPassiveHandlerData GetPassiveHandlerData();
};
