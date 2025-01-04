// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base.h"
#include "UObject/NoExportTypes.h"
#include "CombatTokenHandler.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatTokenAdded,UCombatToken_Base*,combatToken);
UCLASS()
class DESENTINTOATLANTIS_API UCombatTokenHandler : public UObject
{
	GENERATED_BODY()

protected:
	void NewCombatTokenWasAdded(UCombatToken_Base* combatToken,FCombatToken_Base_Data aCombatTokenBaseData,int aStack = 1);

	UPROPERTY()
	UPassiveSkillFactorySubsystem* passiveSkillFactorySubsystem;

	UPROPERTY()
	TArray< FCombatLog_PassiveSkilData> passiveSkillsUsed;

	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;
public:
	UPROPERTY()
	TArray<UCombatToken_Base*> activeCombatTokens;
	
	FCombatTokenAdded onCombatTokenAdded;
	
	UFUNCTION()
	void CombatEnd();
	
	UFUNCTION()
	void RemoveCombatToken(UCombatToken_Base* combatToken);
	void RemoveAllCombatTokens();
	virtual void RemoveAllCombatTokens(ECombatTokenType aCombatTokenType);

	virtual TArray<UCombatToken_Base*> GetAllCombatTokens(ECombatTokenType aCombatTokenType);
	virtual  TArray<UCombatToken_Base*> GetAllCombatTokens(){return activeCombatTokens;};

	virtual void AddAStackOfAllCombatTokens(int aStacks = 1);
	virtual void AddAStackOfAllCombatTokens(ECombatTokenType aCombatTokenType,int aStacks = 1);
	
	virtual void InitializeCombatTokenHandler(UCombatEntity* aOwnedCombatEntity,UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem);

	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefenceTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	
	FCombatToken_Base_Data AddCombatToken(ECombatTokenID aCombatTokenID, int aStackAmount = 1 );

	void InvertCombatToken(ECombatTokenID aCurrentTokenID);
	void InvertAllCombatToken();
	
	UCombatToken_Base* CreateNewCombatTokenClass(ECombatTokenID aCombatTokenID );


};


