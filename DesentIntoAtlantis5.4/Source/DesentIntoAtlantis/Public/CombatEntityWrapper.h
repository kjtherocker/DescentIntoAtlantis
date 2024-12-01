// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntityWrapper.generated.h"

class UHealth;
/**
 * 
 */
struct FSkillsData;

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
	virtual void Initialize(UHealth* aAttachedHealth,ECombatEntityWrapperType aWrapperType);
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual void SetAilmentTurnLength(int aActiveTurnLength);
	virtual void TurnEnd();
};


UCLASS()
class  DESENTINTOATLANTIS_API UCalculateDamage_Base : public UWrapperTakeOver
{
	GENERATED_BODY()
public:
	int ailmentLength = 0;
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
	virtual void TurnEnd() override;

};

UCLASS()
class DESENTINTOATLANTIS_API UCalculateDamage_Fear :public  UCalculateDamage_Base
{
	GENERATED_BODY()
public:
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
	UHealth*  AttachedHealth;
	UPROPERTY()
	FCompleteEntityWrapperInfo completeEntityWrapperInfo;


	//TMap<EStatusAilments,UAilmentShellTakeOver*> allPossibleAilments;

	virtual void Initialize();
	UFUNCTION()
	virtual void RemoveAilment(ECombatEntityWrapperType aCombatEntityWrapperType);

	virtual void SetAilment(UWrapperTakeOver* aAilment,ECombatEntityWrapperType aCombatEntityWrapperType);
	virtual void SetAttachedCombatEntity(UHealth* aCombatEntity);
	virtual void SetCalculateDamageDefault(UWrapperTakeOver* aCalculateDamageWrapper);
	virtual void SetCalculateDamageWrapper(UWrapperTakeOver* aCalculateDamageWrapper);
	virtual int ExecuteCalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual UWrapperTakeOver* GetCalculateDamageWrapper();
	virtual void TurnEnd();
	//virtual PressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	//virtual PressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);
	//virtual void DecrementMana(int aDecrementBy);
};



