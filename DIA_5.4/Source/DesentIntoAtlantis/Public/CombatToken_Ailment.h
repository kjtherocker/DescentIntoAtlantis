// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base.h"
#include "CombatToken_Ailment.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_Ailment : public UCombatToken_Base
{
	GENERATED_BODY()

protected:
	bool hasAilmentActivated;

	int ailmentTimer;
	
public:
	
	virtual void ValidateStackState() override;
	virtual void ActivateAilment();

	virtual void AddNewTokenStack(int aAddedTokens) override;
	virtual void SameCombatTokenWasAdded(FCombatTokenStackData aCombatTokenStackData) override;
	virtual void RemoveTokenFromStack(int aRemovedToken) override;

	virtual void ApplyAilmentEffect(UCombatEntity* aCombatEntity) ;

	virtual void RemoveAilmentEffect(UCombatEntity* aCombatEntity);


	virtual void TeamTurnEnded() override;

};
