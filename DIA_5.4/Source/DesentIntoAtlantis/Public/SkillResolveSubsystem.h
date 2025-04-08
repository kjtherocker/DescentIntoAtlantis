// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityInterruptHandler.h"

#include "CombatLog_Full_Data.h"
#include "UObject/NoExportTypes.h"
#include "SkillResolveSubsystem.generated.h"

class UCombatInterruptManager;
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

	UPROPERTY()
	UPersistentGameinstance* PersistentGameinstance;

	UPROPERTY()
	UCombatInterruptManager* combatInterruptmanager;
	
public:
	void InitializePersistantGameInstance(UPersistentGameinstance* aPersistentGameinstance);
	void SetGameModeBase(ACombatGameModeBase* aCombatGameModeBase,UCombatInterruptManager* aCombatInterruptManager );

	void InitiateSkillAction(UCombatEntity* aAttacker, USkillBase* aSkill, TArray<UCombatEntity*> aVictims);
	void InitiateSkillAction(UCombatEntity* aAttacker, USkillBase* aSkill, int aCursor);

	void CreateSkillInterrupt(FSkillActionData aSkillActionData);
	void CreateEntityDiedInterrupt(UCombatEntity* aPersonToResurrect);
	void CreateResurrectInterrupt(UCombatEntity* aPersonToResurrect);
	
	void ResolveSkillAction(FSkillActionData aSkillResolve);

	void AddCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas);

	TArray<FCombatLog_Full_Data> GetLast50Logs(){return last50CombatLogs;}
	
};
