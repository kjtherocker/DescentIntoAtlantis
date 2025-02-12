// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatInterruptData.h"
#include "CompleteElementalHandlerData.h"
#include "EnemyBeastiaryData.h"
#include "EquipmentHandler.h"
#include "InterruptHandler.h"
#include "SkillBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

class UEnemyBestiaryData;
class UEnemyBehaviour;
class AEnemyPortraitElement;
class ACombatGameModeBase;
struct FEnemyEntityData;

UENUM()
enum class  EEnemyCombatPositions
{
	Left   = 0,
	Middle = 1,
	Right  = 2
};

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyEntityData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	UMaterialInterface* fullBodyCharacterPortrait;
	

	UPROPERTY( EditAnywhere )
	int experience;

	UPROPERTY( EditAnywhere )
	int ClassPoints;
	
	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString Behaviour;
	
	UPROPERTY( EditAnywhere )
	FEquipmentHandlerData EquipmentHandlerData;
	UPROPERTY( EditAnywhere )
	FCompleteElementalHandlerData CompleteElementalHandlerData;

	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillIDS;

	UPROPERTY(EditAnywhere)
	FInterruptData EnemyInterruptData;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UEnemyCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	
public:
	void SetAbilityScores();
	void SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition);
	virtual void Death() override;
	virtual FCombatLog_AttackDefense_Data DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill) override;

	EEnemyCombatPositions portraitPosition;

	virtual FString GetEntityName() override;
	UPROPERTY()
	AEnemyPortraitElement* enemyPortrait;
	UPROPERTY()
	TArray<USkillBase*> enemySkills;
	
	UPROPERTY()
	UEnemyBehaviour* enemyBehaviour; 
	FEnemyBestiary* beastiaryData;
	
	FEnemyEntityData enemyEntityData;
};

