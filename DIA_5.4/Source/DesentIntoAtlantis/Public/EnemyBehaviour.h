// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyBehaviour.generated.h"

class UPlayerCombatEntity;
class UEnemyCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyBehaviour : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UEnemyCombatEntity* enemyCombatEntity;

	UPROPERTY()
	int previousSkillIndex = -1;

public:
	
	
	virtual void Initialize(UEnemyCombatEntity* aEnemyCombatEntity);
	virtual int EnemyToHelp(TArray<UEnemyCombatEntity*>  aCombatEntity);
	virtual int PlayerToAttack(TArray<UPlayerCombatEntity*>  aCombatEntity);

	virtual int GetCombatEntitysUsedInSkill(USkillBase* aSkill,
		TArray<UEnemyCombatEntity*> aEnemyCombatEntity,TArray<UPlayerCombatEntity*> aPlayerCombatentity);
	
	USkillBase* GetSkill();
	
};
