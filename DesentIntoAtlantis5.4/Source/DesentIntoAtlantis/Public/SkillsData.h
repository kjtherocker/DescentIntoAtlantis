// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "SkillsData.generated.h"

enum class EStatusAilments;
enum class EStatTypes;
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
enum class ESkillUsage
{
	None      = 0,
	Opponents = 1,
	Comrades  = 2,
};


UENUM()
enum class ESkillDamageType
{
	None     = 0,
	Strength = 1,
	Magic    = 2,
};


UENUM()
enum class ESkillRange
{
	None    = 0,
	Single  = 1,
	Multi   = 2,
};

UENUM(BlueprintType)
enum class ESkillIDS : uint8
{
	None                   UMETA(DisplayName = "None"),
	DefaultAttack          UMETA(DisplayName = "Default Attack"),
	//Banshee
	Bonk                   UMETA(DisplayName = "Bonk"),
	Boo                    UMETA(DisplayName = "Boo"),
	RejuvenatingLink       UMETA(DisplayName = "RejuvenatingLink"),
	WailingScream          UMETA(DisplayName = "WailingScream"),
	//Gem Thief
	Lunge                  UMETA(DisplayName = "Lunge"),
	SpreadInfection        UMETA(DisplayName = "SpreadInfection"),
	RustyBlade             UMETA(DisplayName = "RustyBlade"),
	CoupDeGrace            UMETA(DisplayName = "Coup De Grace"),
	//Atlantian Warden
	OceansBalm             UMETA(DisplayName = "Oceans Balm"),
	BoilInsides            UMETA(DisplayName = "Boil Insides"),
	WavesSweetRelease      UMETA(DisplayName = "WavesSweetRelease"),
	EmboldingSpeech        UMETA(DisplayName = "EmboldingSpeech"),
	//Laid Off Executioner
	MarkForDeath           UMETA(DisplayName = "MarkForDeath"),
	MockingTaunt           UMETA(DisplayName = "MockingTaunt"),
	AbsoluteGuard          UMETA(DisplayName = "AbsoluteGuard"),
	SelfIndulgentRevenge   UMETA(DisplayName = "SelfIndulgentRevenge"),
	
	
	
};


USTRUCT()
struct DESENTINTOATLANTIS_API FSkillsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	ESkillIDS skillID                    = ESkillIDS::None;
	
	UPROPERTY( EditAnywhere )
	int costToUse;
	
	UPROPERTY( EditAnywhere )
	int damage;
	
	UPROPERTY( EditAnywhere )    
	EElementalType elementalType         = EElementalType::None;
	UPROPERTY( EditAnywhere )    
	ESkillDamageType skillDamageType     = ESkillDamageType::None;
	UPROPERTY( EditAnywhere )    
	ESkillType      skillType            = ESkillType::None;
	UPROPERTY( EditAnywhere )    
	ESkillUsage     skillUsage           = ESkillUsage::None;
	UPROPERTY( EditAnywhere )    
	ESkillRange skillRange               = ESkillRange::None;
	UPROPERTY( EditAnywhere )
	EStatTypes ablityScoreToBuffOrDebuff = EStatTypes::None;
	
	UPROPERTY( EditAnywhere )
	FString skillName;
	
	UPROPERTY( EditAnywhere )
	FString skillDescription;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* skillIcon;

	UPROPERTY( EditAnywhere )
	int abilityScoreChangeDuration;
};

UCLASS()
class UAilment: public UObject
{
	GENERATED_BODY()
public:
	
	EStatusAilments  currentAilment;
	
	virtual void Initialize(FSkillsData aSkillData);
	virtual void ActivateAilment(UCombatEntity* aCombatEntity);
};


UCLASS()
class UAilment_Fear: public UAilment
{
	GENERATED_BODY()
public:
	
	EStatusAilments  currentAilment;
	
	virtual void Initialize(FSkillsData aSkillData);
};


UCLASS()
class USkillBase : public UObject
{
	GENERATED_BODY()
public:

	FSkillsData skillData;
	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim);
	
	virtual void Initialize(FSkillsData aSkillData);
};

// All the different variations of Skills

UCLASS()
class USkillAttack : public USkillBase
{
	GENERATED_BODY()

	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USyncSkill : public USkillAttack
{
	GENERATED_BODY()

	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};


UCLASS()
class USkillAlimentAttack : public USkillAttack
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UAilment* ailment;
	UPROPERTY(EditAnywhere)
	EStatusAilments statusAilments;
	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillAlimentAttackFear: public USkillAttack
{
	GENERATED_BODY()
	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillHeal : public USkillBase
{
	GENERATED_BODY()

	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillBuff : public USkillBase
{
	GENERATED_BODY()
	
	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillDebuff: public USkillBase
{
	GENERATED_BODY()
	
	virtual EPressTurnReactions UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};
