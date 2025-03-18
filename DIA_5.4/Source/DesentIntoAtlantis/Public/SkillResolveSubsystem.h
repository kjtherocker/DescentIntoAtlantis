// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UObject/NoExportTypes.h"
#include "SkillResolveSubsystem.generated.h"

class ACombatGameModeBase;
struct FCombatLog_Full_Data;
class USkillBase;
class UCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillResolveSubsystem  : public UGameInstanceSubsystem
{
	GENERATED_BODY()


private:


	UPROPERTY()
	ACombatGameModeBase* combatGameModeBase;

	UPROPERTY()
	TArray<FCombatLog_Full_Data> mostRecentCombatLogs;

	UPROPERTY()
	TArray<FCombatLog_Full_Data> last50CombatLogs;

public:
	
	void SetGameModeBase(ACombatGameModeBase* aCombatGameModeBase);
	void ActivateSkill(UCombatEntity* aAttacker, USkillBase* aSkill, int aCursor);
	void ActivateSkill(UCombatEntity* aAttacker, TArray<UCombatEntity*> aVictim, USkillBase* aSkill);

	void AddCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas);
	
};
