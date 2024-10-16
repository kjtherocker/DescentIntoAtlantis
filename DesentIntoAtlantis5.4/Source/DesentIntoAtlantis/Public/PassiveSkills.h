// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PassiveSkills.generated.h"

/**
 * 
 */

enum class ESkillDamageType;
enum class ESkillRange;
enum class ESkillUsage;
enum class ESkillType;

//UENUM(BlueprintType)
//enum class EPassiveSkillIDS : uint8
//{
//	None                   UMETA(DisplayName = "None"),
//	//Banshee
//	StatusAdept            UMETA(DisplayName = "StatusAdept"),
//	DarkIncrease           UMETA(DisplayName = "Bonk"),
//	DarkResist             UMETA(DisplayName = "Boo"),
//};



USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveSkillsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

//	UPROPERTY( EditAnywhere )
//	EPassiveSkillIDS passiveSkillID                    = EPassiveSkillIDS::None;

	
	
	UPROPERTY( EditAnywhere )
	int damageIncrease;

	UPROPERTY( EditAnywhere )    
	ESkillType      trigger1SkillType;

	UPROPERTY( EditAnywhere )    
	ESkillUsage     trigger2SkillUsage;
	
	UPROPERTY( EditAnywhere )    
	ESkillRange trigger3SkillRange;
	
	UPROPERTY( EditAnywhere )    
	ESkillDamageType trigger4DamageType;
	
	UPROPERTY( EditAnywhere )    
	EElementalType trigger5ElementalType             = EElementalType::None;
	
	
	UPROPERTY( EditAnywhere )
	FString passiveName;
	
	UPROPERTY( EditAnywhere )
	FString passiveDescription;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* passiveIcon;

	UPROPERTY( EditAnywhere )
	int abilityScoreChangeDuration;
};

UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkills : public UObject
{
	GENERATED_BODY()

public:
	void InitializePassiveSkilData(FPassiveSkillsData aPassiveSkillsData);
	void AttachPassiveToOwner(UCombatEntity* aCombatEntity);
	void RemovePassive();
	void ActivatePassive();

	void ApplyEffect(UCombatEntity* aCombatEntity);
	void RemoveEffect(UCombatEntity* aCombatEntity);
	//void EventListener(EventBase* aEvent);

//	bool VerifyTriggers(DamageEvent* aDamageEvent);

private:


	FPassiveSkillsData passiveSkillData;
	bool isDisabled = false;
	UCombatEntity* attachedCombatEntity;
	
};
