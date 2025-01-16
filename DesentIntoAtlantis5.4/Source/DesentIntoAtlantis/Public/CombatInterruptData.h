// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESkillID.h"
#include "FloorEnum.h"
#include "PassiveSkillFactorySubsystem.h"
#include "UObject/NoExportTypes.h"
#include "CombatInterruptData.generated.h"

UENUM()
enum class  EInterruptType  : uint8
{
	None                  = 0,
	Dialogue              = 1,
	Skill                 = 2,
	Passive               = 3,
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCombatInterruptData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	EInterruptType interruptType = EInterruptType::None;

	UPROPERTY()
	FString whoTriggeredInterrupt = "UnSet";

	UPROPERTY( EditAnywhere, Category = "Identity" )
	EPassiveGenericTrigger GenericTrigger;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	EDialogueTriggers DialogueTriggers;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	EPartyMembers partyMembers;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	ESkillIDS SkillIds;

	UPROPERTY( EditAnywhere, Category = "Identity" )
	EPassiveSkillID PassiveSkillID;
};



UCLASS()
class UCombatInterrupt: public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
	int interruptionValue;

	FCombatInterruptData CombatInterruptData;	
public:


	int GetInterruptionValue(){return interruptionValue;}
	void SetInterruptionValue(int aInterruptionValue){interruptionValue = aInterruptionValue;}
	
	void SetCombatInterruptData(FCombatInterruptData aCombatInterruptData){ CombatInterruptData = aCombatInterruptData;}
	EInterruptType GetInterruptionType(){return GetInterruptionData().interruptType;}
	FCombatInterruptData GetInterruptionData(){return CombatInterruptData;}
	
	void ActivateInterrupt();
};


