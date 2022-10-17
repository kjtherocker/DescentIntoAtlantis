// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

class UEnemyBestiaryData;
class UEnemyBehaviour;
class UEnemyPortraitElement;
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
	UTexture2D* fullBodyCharacterPortrait;
	

	UPROPERTY( EditAnywhere )
	int experience;
	
	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString Behaviour;

	UPROPERTY( EditAnywhere )
	FString Skill1;
	UPROPERTY( EditAnywhere )
	FString Skill2;
	UPROPERTY( EditAnywhere )
	FString Skill3;
	UPROPERTY( EditAnywhere )
	FString Skill4;
	UPROPERTY( EditAnywhere )
	FString Skill5;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UEnemyCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
public:
	void SetAbilityScores();
	void SetEnemyEntityData(FEnemyEntityData AEnemyEntityData,USkillFactory * skillFactory);
	virtual void Death() override;
	virtual void ActivateDamageHitEffect() override;
	virtual float GetHealthPercentage() override;
	virtual PressTurnReactions DecrementHealth(UCombatEntity* aAttacker, FSkills_Base aSkill) override;

	UPROPERTY()
	TArray<FSkills_Base> enemySkills;

	UEnemyBehaviour* enemyBehaviour; 

	UEnemyBestiaryData* enemyBestiaryData; 
	
	FEnemyEntityData enemyEntityData;

	EEnemyCombatPositions enemyCombatPosition;
};

