// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatLog_AttackDefense_Data.h"
#include "CombatLog_Hit_Data.h"
#include "Engine/DataTable.h" 
#include "SkillData.h"
#include "CombatLog_Full_Data.generated.h"

enum class EPressTurnReactions : uint8;
class UCombatEntity;

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Full_Data : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY()
	bool wasHitInitializedOnSkill = false;
	UPROPERTY()
	EPressTurnReactions PressTurnReaction;
	UPROPERTY()
	UCombatEntity* Attacker;
	
	UPROPERTY()
	UCombatEntity* Victim;

	UPROPERTY()
	FCombatLog_CombatToken CombatLog_CombatToken_Data;
	
	UPROPERTY()
	FSkillsData skillUsed;
	
	UPROPERTY()
	FCombatLog_Hit_Data CombatLog_Hit_Data;

	UPROPERTY()
	FCombatLog_AttackDefense_Data CombatLog_AttackDefense_Data;
};