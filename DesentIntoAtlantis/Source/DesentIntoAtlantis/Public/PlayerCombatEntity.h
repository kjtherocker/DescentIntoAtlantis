// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCombatEntity.generated.h"

/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerCombatEntity : public FCombatEntity
{
	GENERATED_USTRUCT_BODY()
	UCombatClass* currentClass;
	UPROPERTY( EditAnywhere )
	FString classDataTablePath;
	
	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;

	virtual PressTurnReactions DecrementHealth(int aDecrementby, EElementalType aElementalType) override;
	
	virtual void SetTacticsEntity(USkillFactory* aSkillFactory) override;
	void SetAbilityScores();
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
};

//A combat class is filled with the bases of all stats
USTRUCT()
struct DESENTINTOATLANTIS_API FClassData :public  FCombatEntityData
{
	GENERATED_USTRUCT_BODY()

	
	UPROPERTY( EditAnywhere )
	FString className;

	UPROPERTY( EditAnywhere )
	FString classLevelID;
	
	UPROPERTY( EditAnywhere )
	int expToNextClassLevel;

	UPROPERTY( EditAnywhere )
	FString newlyObtainedSkill;
};

