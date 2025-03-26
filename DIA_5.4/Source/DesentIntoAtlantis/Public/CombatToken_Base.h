// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatTokenCurrentStatInfo.h"
#include "CombatToken_Base_Data.h"
#include "PassiveSkills.h"
#include "UObject/NoExportTypes.h"
#include "CombatToken_Base.generated.h"

struct FCombatToken_Base_Data;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatTokenEndEffect,UCombatToken_Base*,combatToken);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatTokenChange,FCombatTokenCurrentStatInfo,combatTokenInfo);
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_Base : public UPassiveSkills
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FCombatToken_Base_Data CombatToken_Base_Data;
	UPROPERTY()
	FCombatTokenCurrentStatInfo CombatTokenStateInfo;

public:

	UPROPERTY()
	FOnCombatTokenChange onCombatTokenChange;
	UPROPERTY()
	FCombatTokenEndEffect CombatTokenEndEffect;
	
	virtual FCombatToken_Base_Data GetCombatTokenData(){ return CombatToken_Base_Data;}
	virtual ECombatTokenType GetCombatTokenType(){ return GetCombatTokenData().CombatTokenType;}
	virtual ECombatTokenID GetCombatTokenID() { return GetCombatTokenData().CombatTokenID;}
	virtual FCombatTokenCurrentStatInfo  GetCombatTokenStateInfo(){ return CombatTokenStateInfo;}
	virtual void InitializeCombatToken(FCombatToken_Base_Data combatToken,FCombatTokenStackData aCombatTokenStackData,UCombatEntity* aCombatEntity);
	virtual void SetTurnsRemaining(FCombatTokenStackData aCombatTokenStateInfo);
	virtual void InvertCombatToken(FCombatToken_Base_Data combatToken);

	virtual void SetCombatTokenSlotPosition(int aSlotPosition);
	virtual int GetTurnResetValue();
	
	virtual void ValidateStackState();
	virtual void AddNewTokenStack(int aAddedTokens);
	virtual void RemoveTokenFromStack(int aRemovedToken);
	virtual bool CanConsumeStack();

	UFUNCTION()
	virtual void TeamTurnEnded();

	virtual void RemovePassive() override;
	virtual void ActivatePassive() override;

	virtual void SameCombatTokenWasAdded(FCombatTokenStackData aCombatTokenStackData);
	virtual void BroadCastCombatTokenChange();
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_GenericStat : public UCombatToken_Base, public IStatPassive
{
	GENERATED_BODY()

public:

	virtual int GetStatIncrease_Implementation(EStatTypes aStatType) override;

	virtual void ApplyEffect(UCombatEntity* aCombatEntity) override;
	virtual void RemoveEffect(UCombatEntity* aCombatEntity) override;
	
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_RoundEnd : public UCombatToken_Base
{
	GENERATED_BODY()

public:

	
	virtual void TeamTurnEnded() override;
	
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_RoundEnd_Health : public UCombatToken_Base
{
	GENERATED_BODY()

public:

	
	virtual void TeamTurnEnded() override;
	
};
