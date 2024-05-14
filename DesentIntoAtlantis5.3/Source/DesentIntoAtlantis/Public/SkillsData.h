// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "SkillsData.generated.h"

enum class EAbilityScoreTypes;
class UCombatEntity;
/**
 * 
 */
UENUM()
enum class ESkillType
{
	None,
	Attack,
	Heal,
	Buff,
	Debuff,
	HealBuff,
	AttackDebuff

};

UENUM()
enum class EStatusAilments
{
	None,
	Poison,
	Blind,
	Bleed,
	Freeze,
	Charm,
	Doom,
	Necrotic
};

UENUM()
enum class ESkillUsage
{
	Comrades,
	Opponents
};


UENUM()
enum class ESkillDamageType
{
	None     = 0,
	Strength = 1,
	Magic    = 2,
};


UENUM(BlueprintType)
enum EAilment
{
	None,
	Poison,
	Daze,
	Sleep,
	Rage,
};

UENUM()
enum class ESkillRange
{
	Single,
	Multi,
};

USTRUCT()
struct DESENTINTOATLANTIS_API FSkillsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	EElementalType elementalType;

	UPROPERTY( EditAnywhere )
	ESkillDamageType skillDamageType;

	UPROPERTY( EditAnywhere )
	ESkillType      skillType;
	
	UPROPERTY( EditAnywhere )
	ESkillUsage     skillUsage;
	
	UPROPERTY( EditAnywhere )
	FString skillName;
	
	UPROPERTY( EditAnywhere )
	FString skillDescription;

	UPROPERTY( EditAnywhere )
	int costToUse;
	
	UPROPERTY( EditAnywhere )
	int damage;
	
	UPROPERTY( EditAnywhere )
	ESkillRange skillRange;

	UPROPERTY( EditAnywhere )
	UTexture2D* skillIcon;
	
	UPROPERTY( EditAnywhere )
	EAbilityScoreTypes ablityScoreToBuffOrDebuff;

	UPROPERTY( EditAnywhere )
	int abilityScoreChangeDuration;
};


UCLASS()
class USkillBase : public UObject
{
	GENERATED_BODY()
public:

	FSkillsData skillData;
	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim);
	
	virtual void Initialize(FSkillsData aSkillData);
};

// All the different variations of Skills

UCLASS()
class USkillAttack : public USkillBase
{
	GENERATED_BODY()

	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USyncSkill : public USkillAttack
{
	GENERATED_BODY()

	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};


UCLASS()
class USkillAliment : public USkillBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	EStatusAilments statusAilments;
	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillHeal : public USkillBase
{
	GENERATED_BODY()

	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillBuff : public USkillBase
{
	GENERATED_BODY()
	
	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillDebuff: public USkillBase
{
	GENERATED_BODY()
	
	virtual PressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};
