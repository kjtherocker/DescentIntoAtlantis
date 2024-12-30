// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base.h"
#include "CombatToken_Base_Data.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PassiveSkillFactorySubsystem.generated.h"

class UPassiveSkills;
enum class EPassiveSkillID  : uint8;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPassiveSkillFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<EPassiveSkillID,UPassiveSkills*> allPassiveSkills;

	UPROPERTY()
	TMap<ECombatTokenID,FCombatToken_Base_Data> allCombatTokensData;


public:
	void InitializeDatabase(UDataTable*  aPassiveDataTable,UDataTable*  aCombatTokenDataTable);
	UPassiveSkills* GetPassiveSkill(EPassiveSkillID aPassiveSkillID);

	FCombatToken_Base_Data GetCombatTokenData(ECombatTokenID combatTokenID);
	bool DoesPassiveSkillExist(EPassiveSkillID aPassiveSkillID);
};
