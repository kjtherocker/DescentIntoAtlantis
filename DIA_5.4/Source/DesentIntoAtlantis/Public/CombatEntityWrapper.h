// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CombatEntityWrapper.generated.h"

class UResourceHandler;
class UHealth;
/**
 * 
 */
struct FSkillsData;
struct FCombatLog_Damage_Data;
struct FCombatLog_Defense_Data;
struct FCombatLog_AttackDefense_Data;
class UCombatEntity;

UENUM()
enum class EStatusAilments : uint8
{
	None   = 0,
	Fear   = 1,
	Poison = 2,
	Daze   = 3,
	Sleep  = 4,
	Rage   = 5,
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusAilmentStart,EStatusAilments,statusAilemnt);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusAilmentEnd,EStatusAilments,statusAilemnt);

UENUM()
enum class ECombatEntityWrapperType
{
	None            = 0,
	CalculateDamage = 1,

};

//UENUM()
//class enum ECreaturesAilment
//{
//	None,
//	Poison,
//	Daze,
//	Sleep,
//	Rage,
//};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResetOneWrapperToDefault,ECombatEntityWrapperType,shelltype);
USTRUCT()
struct DESENTINTOATLANTIS_API FAilmentInfo
{
	GENERATED_BODY()
	UPROPERTY()
	EStatusAilments statusAilment = EStatusAilments::Fear;
	UPROPERTY()
	FResetOneWrapperToDefault resetShellToDefault;
	UPROPERTY()
	ECombatEntityWrapperType  combatEntityWrapperType;
	UPROPERTY()
	int ailmentLength = 0;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteEntityWrapperInfo
{
	GENERATED_BODY()

	TMap<ECombatEntityWrapperType,FAilmentInfo*> ailments;

};

UCLASS()
class  DESENTINTOATLANTIS_API UWrapperTakeOver : public UObject
{
	GENERATED_BODY()
public:
	FAilmentInfo ailmentInfo;
	virtual void Initialize(UResourceHandler* aResourceHandler,ECombatEntityWrapperType aWrapperType);
	virtual FCombatLog_AttackDefense_Data CalculateDamage(FCombatLog_Damage_Data DamageLog,FCombatLog_Defense_Data DefenseLog);
	
	virtual FCombatLog_Damage_Data DamageLog(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual FCombatLog_Defense_Data DefenseLog(FCombatLog_Damage_Data DamageLog,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill);
	
	virtual void SetAilmentTurnLength(int aActiveTurnLength);
	virtual void TurnEnd();
};


UCLASS()
class  DESENTINTOATLANTIS_API UCalculateDamage_Base : public UWrapperTakeOver
{
	GENERATED_BODY()
public:
	int ailmentLength = 0;
	virtual FCombatLog_Damage_Data DamageLog(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
	virtual FCombatLog_Defense_Data DefenseLog(FCombatLog_Damage_Data DamageLog,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
	virtual FCombatLog_AttackDefense_Data CalculateDamage(FCombatLog_Damage_Data DamageLog,FCombatLog_Defense_Data DefenseLog) override;
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual void TurnEnd() override;

};

UCLASS()
class DESENTINTOATLANTIS_API UCalculateDamage_Fear :public  UCalculateDamage_Base
{
	GENERATED_BODY()
public:
	virtual FCombatLog_AttackDefense_Data CalculateDamage(FCombatLog_Damage_Data DamageLog,FCombatLog_Defense_Data DefenseLog) override;
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
	virtual void TurnEnd() override;
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatEntityWrapper : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UWrapperTakeOver* calculateDamage;
	FResetOneWrapperToDefault resetOneWrapperToDefault;
public:
	UPROPERTY()
	UCombatEntity*  attachedCombatEntity;
	UPROPERTY()
	UResourceHandler* resourceHandler; 
	
	UPROPERTY()
	FCompleteEntityWrapperInfo completeEntityWrapperInfo;


	//TMap<EStatusAilments,UAilmentShellTakeOver*> allPossibleAilments;

	virtual void Initialize();
	UFUNCTION()
	virtual void RemoveAilment(ECombatEntityWrapperType aCombatEntityWrapperType);

	virtual void SetAilment(UWrapperTakeOver* aAilment,ECombatEntityWrapperType aCombatEntityWrapperType);
	virtual void SetAttachedCombatEntity(UResourceHandler* ResourceHandler, UCombatEntity*  aCombatEntity);
	virtual void SetCalculateDamageDefault(UWrapperTakeOver* aCalculateDamageWrapper);
	virtual void SetCalculateDamageWrapper(UWrapperTakeOver* aCalculateDamageWrapper);
	virtual FCombatLog_AttackDefense_Data ExecuteCalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual UWrapperTakeOver* GetCalculateDamageWrapper();
	virtual void TurnEnd();
	//virtual PressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	//virtual PressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);
	//virtual void DecrementMana(int aDecrementBy);
};



