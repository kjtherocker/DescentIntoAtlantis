// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NiagaraComponent.h"
#include "PassiveSkillData.h"
#include "SkillType.h"
#include "SkillData.generated.h"


class UCombatEntity;

UENUM()
enum class EItemID : uint8
{
	None                       = 0,
	ItemNotFound               = 1,
	FlatHealPotion             = 2,
	PercentageHealPotion       = 3,
	FlatManaPotion             = 4,
	PercentageManaPotion       = 5,
	CancelNegativeCombatTokens = 6,
	InvertCombatTokens         = 7,
	FireBomb                   = 8,
	IceBomb                    = 9,
	ShadowBomb                 = 10,
	WindBomb                   = 11,
	LightningBomb              = 12,
	LightBomb                  = 13,
	
};



enum class EResource : uint8;
enum class EStatTypes : uint8;
enum class EElementalType : uint8;
enum class ESkillRange : uint8;
enum class ESkillUsage : uint8;
enum class ESkillType : uint8;
enum class ESkillDamageType : uint8;
enum class ESkillIDS : uint8;


struct FCombatTokenStackData;

USTRUCT()
struct DESENTINTOATLANTIS_API FSkillChargeData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	UCombatEntity* skillOwner; 
	
	UPROPERTY()
	TArray<UCombatEntity*> EntityToAttackOnChargeEnd; 
	
	UPROPERTY(EditAnywhere)
	bool canCharge = false;
	
	UPROPERTY()
	bool isCharging = false;

	UPROPERTY()
	bool ChargeFinished = false;

	UPROPERTY()
	int currentChargeStage = 0;
	
	UPROPERTY(EditAnywhere)
	int chargeStageToReach = 0;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FSkillsData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	ESkillIDS skillID;

	UPROPERTY( EditAnywhere , Category = "Identity")
	FString skillName;
	
	UPROPERTY( EditAnywhere , Category = "Identity")
	FString skillDescription;
	
	UPROPERTY( EditAnywhere , Category = "Identity")
	UTexture2D* skillIcon;
	
	UPROPERTY( EditAnywhere , Category = "Identity")
	UNiagaraSystem* SkillInWorldParticle;
	
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	EResource SkillResourceUsed;

	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	EResource ResourceUsedOn = EResource::Damage;

	UPROPERTY( EditAnywhere , Category = "DefaultInfo")
	int costToUse;
	
	UPROPERTY( EditAnywhere, Category = "DefaultInfo" )
	int damage;

	UPROPERTY(EditAnywhere, Category = "DefaultInfo")
	int SkillHit = 90;
	
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	EElementalType elementalType;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	ESkillDamageType skillDamageType;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	EStatTypes skillScaleStat;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	ESkillType skillType;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	ESkillUsage skillUsage;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	ESkillRange skillRange;

	UPROPERTY( EditAnywhere , Category = "CombatToken")
	TArray<FCombatTokenStackData> combatTokensUsedOnSkill;
	UPROPERTY(EditAnywhere, Category = "CombatToken")
	int CombatTokenHit;

	UPROPERTY(EditAnywhere, Category = "Charge")
	FSkillChargeData skillChargeData;
};



USTRUCT()
struct DESENTINTOATLANTIS_API FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EItemID itemID;
	
	UPROPERTY(EditAnywhere)
	TMap<int,FSkillsData> itemTierSkillData;

	UPROPERTY()
	int baseItemTier = 0;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FKeyItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EKeyItemsID KeyItemsID;

	UPROPERTY(EditAnywhere)
	FString itemName;
	
	UPROPERTY(EditAnywhere)
	FString descriptionText;
};


