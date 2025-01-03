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
	void NewCombatTokenWasAdded(UCombatToken_Base* combatToken,FCombatToken_Base_Data aCombatTokenBaseData);

	UPROPERTY()
	UPassiveSkillFactorySubsystem* passiveSkillFactorySubsystem;

	UPROPERTY()
	TArray< FCombatLog_PassiveSkilData> passiveSkillsUsed;

	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;
public:

	FCombatTokenAdded onCombatTokenAdded;
	
	virtual void InitializeCombatTokenHandler(UCombatEntity* aOwnedCombatEntity,UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem);

	virtual TArray< FCombatLog_PassiveSkilData> CheckAttackDefenceTokens(int& CurrentDamage ,UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker, FSkillsData aSkill);
	
	UPROPERTY()
	TArray<UCombatToken_Base*> activeCombatTokens;
	
	UFUNCTION()
	void CombatEnd();
	
	void AddCombatToken(ECombatTokenID aCombatTokenID );

	void InvertCombatToken(ECombatTokenID aCurrentTokenID);
	
	UCombatToken_Base* CreateNewCombatTokenClass(ECombatTokenID aCombatTokenID );

	void RemoveAllCombatTokens();

	UFUNCTION()
	void RemoveCombatToken(UCombatToken_Base* combatToken);
	
};


