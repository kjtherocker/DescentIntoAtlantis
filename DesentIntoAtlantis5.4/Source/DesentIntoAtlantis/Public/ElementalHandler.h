// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CompleteElementalHandlerData.h"
#include "UObject/NoExportTypes.h"
#include "ElementalHandler.generated.h"

enum class EElementalReaction : uint8;
enum class EElementalType : uint8;
/**
 * 
 */

UCLASS()
class DESENTINTOATLANTIS_API UElementalInfo : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	UPassiveSkills* passiveSkills;
	UPROPERTY()
	FCompleteElementalInfo CompleteElementalInfo;


	void Initialize(EElementalType aElementalType,EElementalReaction aElementalEffect);
	void SetElementalReaction(EElementalReaction aElementalEffect){ CompleteElementalInfo.elementalReaction = aElementalEffect;}
	FCompleteElementalInfo GetCompleteElementalInfo() {return CompleteElementalInfo;}
	
};


UCLASS()
class DESENTINTOATLANTIS_API UElementalHandler : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FCompleteElementalHandlerData CompleteElementalHandlerData;
	
	UPROPERTY()
	TMap<EElementalType,UElementalInfo*> elementalInfo;
	void LoadSavedInfo(FCompleteElementalHandlerData aCompleteElementalHandlerData);
	void Initialize(UCombatEntity* aCombatEntity);
	void AddNewElementalInfo(EElementalType elementalType);
	EElementalReaction GetElementalReaction(EElementalType elementalType);
	
	void SetElementalReaction(EElementalType elementalType,EElementalReaction elementalEffect);
	void ResetAllElements();
};

