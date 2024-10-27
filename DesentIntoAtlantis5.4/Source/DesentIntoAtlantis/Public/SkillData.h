// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillData.generated.h"

enum class EStatTypes : uint8;
enum class EElementalType : uint8;
enum class ESkillRange : uint8;
enum class ESkillUsage : uint8;
enum class ESkillType : uint8;
enum class ESkillDamageType : uint8;
enum class ESkillIDS : uint8;

USTRUCT()
struct DESENTINTOATLANTIS_API FSkillsData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY( EditAnywhere )
	ESkillIDS skillID;
	
	UPROPERTY( EditAnywhere )
	int costToUse;
	
	UPROPERTY( EditAnywhere )
	int damage;

	UPROPERTY(EditAnywhere)
	int SkillHit;
	UPROPERTY(EditAnywhere)
	int AilmentHit;
	
	UPROPERTY( EditAnywhere )    
	EElementalType elementalType;
	UPROPERTY( EditAnywhere )    
	ESkillDamageType skillDamageType;
	UPROPERTY( EditAnywhere )    
	ESkillType      skillType;
	UPROPERTY( EditAnywhere )    
	ESkillUsage     skillUsage;
	UPROPERTY( EditAnywhere )    
	ESkillRange skillRange;
	UPROPERTY( EditAnywhere )
	EStatTypes ablityScoreToBuffOrDebuff;
	
	UPROPERTY( EditAnywhere )
	FString skillName;
	
	UPROPERTY( EditAnywhere )
	FString skillDescription;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* skillIcon;

	UPROPERTY( EditAnywhere )
	int abilityScoreChangeDuration;
};