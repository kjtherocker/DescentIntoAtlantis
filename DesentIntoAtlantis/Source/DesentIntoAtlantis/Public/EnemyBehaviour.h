// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skills_Base.h"
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
	UEnemyCombatEntity* enemyCombatEntity;
	

public:
	
	
	virtual void Initialize(UEnemyCombatEntity* aEnemyCombatEntity);
	virtual int PlayerToAttack(TArray<UPlayerCombatEntity*>  aCombatEntity);
	
	FSkills_Base GetSkill();
	
};
