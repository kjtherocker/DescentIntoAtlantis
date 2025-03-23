// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base.h"
#include "UObject/NoExportTypes.h"
#include "CombatTokenHandler.generated.h"


struct FCombatLog_PassiveSkilData;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatTokenAdded,UCombatToken_Base*,combatToken);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTokenSlotChange);
UCLASS()
class DESENTINTOATLANTIS_API UCombatTokenHandler : public UObject
{
	GENERATED_BODY()

protected:
	void NewCombatTokenWasAdded(UCombatToken_Base* combatToken,FCombatToken_Base_Data aCombatTokenBaseData,FCombatTokenStackData combatTokenStackData);

	UPROPERTY()
	UPassiveFactorySubsystem* passiveSkillFactorySubsystem;

	UPROPERTY()
	TArray< FCombatLog_PassiveSkilData> passiveSkillsUsed;

	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;

	const int defaultCombatTokenMax = 4;
public:
	UPROPERTY()
	TArray<UCombatToken_Base*> activeCombatTokens;

	UPROPERTY()
	FCombatTokenAdded onCombatTokenAdded;
	UPROPERTY()
	FOnTokenSlotChange OnTokenSlotChange;

	UPROPERTY()
	TMap<int,UCombatToken_Base*> activeCombatTokensSlots;
	
	UFUNCTION()
	void CombatEnd();
	
	UFUNCTION()
	void RemoveCombatToken(UCombatToken_Base* combatToken);
	void RemoveAllCombatTokens();
	virtual void RemoveAllCombatTokens(ECombatTokenType aCombatTokenType);

	virtual UCombatToken_Base* GetCombatTokenByID(ECombatTokenID aCombatTokenID);
	virtual TArray<UCombatToken_Base*> GetAllCombatTokens(ECombatTokenType aCombatTokenType);
	virtual  TArray<UCombatToken_Base*> GetAllCombatTokens(){return activeCombatTokens;};

	virtual void AddAStackOfAllCombatTokens(int aStacks = 1);
	virtual void AddAStackOfAllCombatTokens(ECombatTokenType aCombatTokenType,int aStacks = 1);

	virtual void SlideCombatTokenToStart(UCombatToken_Base* aCombatToken);
	
	virtual void InitializeCombatTokenHandler(UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem);

	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefenceTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	
	FCombatToken_Base_Data AddCombatToken(FCombatTokenStackData aCombatTokenStackData );

	void InvertCombatToken(ECombatTokenID aCurrentTokenID);
	void InvertAllCombatToken();
	void InvertAllCombatToken(ECombatTokenType aTokenType);
	
	UCombatToken_Base* CreateNewCombatTokenClass(ECombatTokenID aCombatTokenID );


};


