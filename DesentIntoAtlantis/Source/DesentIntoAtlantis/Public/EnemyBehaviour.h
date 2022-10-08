// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skills_Base.h"
#include "UObject/NoExportTypes.h"
#include "EnemyBehaviour.generated.h"

struct FEnemyCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEnemyBehaviour : public UObject
{
	GENERATED_BODY()

private:
	FEnemyCombatEntity* enemyCombatEntity;
	

public:
	
	
	virtual void Initialize(FEnemyCombatEntity* aEnemyCombatEntity);
	virtual int PlayerToAttack(TArray<FCombatEntity*> aCombatEntity);
	
	FSkills_Base* GetSkill();
	
};
