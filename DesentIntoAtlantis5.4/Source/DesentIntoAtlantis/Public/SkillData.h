// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base_Data.h"
#include "Engine/DataTable.h"
#include "SkillData.generated.h"

enum class ESkillResourceUsed : uint8;
enum class EStatTypes : uint8;
enum class EElementalType : uint8;
enum class ESkillRange : uint8;
enum class ESkillUsage : uint8;
enum class ESkillType : uint8;
enum class ESkillDamageType : uint8;
enum class ESkillIDS : uint8;

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatTokenStackData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	ECombatTokenID combatTokenID;

	UPROPERTY(EditAnywhere)
	int stackAmount = 1;
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


	UPROPERTY( EditAnywhere , Category = "DefaultInfo")    
	ESkillResourceUsed SkillResourceUsed;
	UPROPERTY( EditAnywhere , Category = "DefaultInfo")
	int costToUse;
	
	UPROPERTY( EditAnywhere, Category = "DefaultInfo" )
	int damage;

	UPROPERTY(EditAnywhere, Category = "DefaultInfo")
	int SkillHit;
	
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
};

