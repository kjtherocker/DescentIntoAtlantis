// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESkillID.h"
#include "FloorEnum.h"
#include "PassiveSkillFactorySubsystem.h"
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
struct DESENTINTOATLANTIS_API FHealthThresholdData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere, Category = "Percentage" )
	float TopPercent;
	UPROPERTY( EditAnywhere, Category = "Percentage" )
	float LowPercent;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatInterruptData : public FTableRowBase
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere)
	bool executeInterruptImmediately;
	
	UPROPERTY( EditAnywhere, Category = "Identity" )
	EInterruptType interruptType = EInterruptType::None;
	
	UPROPERTY(EditAnywhere, Category = "Identity" )
	bool isConsumedOnUse = false;

	UPROPERTY( EditAnywhere, Category = "Health" )
	FHealthThresholdData HealthThresholdData;

	UPROPERTY()
	FString whoTriggeredInterrupt = "UnSet";

	UPROPERTY( EditAnywhere, Category = "Generic" )
	EGenericTrigger GenericTrigger;
	
	UPROPERTY( EditAnywhere, Category = "Dialogue" )
	EDialogueTriggers DialogueTriggers;
	
	UPROPERTY( EditAnywhere, Category = "Party" )
	EPartyMembersID partyMembers;
	
	UPROPERTY( EditAnywhere, Category = "Skill" )
	ESkillIDS SkillIds;

	UPROPERTY( EditAnywhere, Category = "Skill" )
	USkillBase* InterruptionSkill;

	UPROPERTY( EditAnywhere, Category = "PassiveSkill" )
	EPassiveSkillID PassiveSkillID;

	UPROPERTY()
	bool isDisabled = false;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInterruptEnd);

UCLASS()
class UCombatInterrupt: public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY()
	int interruptionValue;

	UPROPERTY()
	FCombatInterruptData CombatInterruptData;

	UPROPERTY()
	UPersistentGameinstance* persistantGameInstance;
public:

	FOnInterruptEnd OnInterruptEnd;
	void SetInterrupt(UPersistentGameinstance* aPersistantGameInstance);

	int GetInterruptionValue(){return interruptionValue;}
	void SetInterruptionValue(int aInterruptionValue){interruptionValue = aInterruptionValue;}
	
	void SetCombatInterruptData(FCombatInterruptData aCombatInterruptData){ CombatInterruptData = aCombatInterruptData;}
	EInterruptType GetInterruptionType(){return GetInterruptionData().interruptType;}
	FCombatInterruptData GetInterruptionData(){return CombatInterruptData;}
	UFUNCTION()
	virtual void InterruptionEnd();
	virtual void ActivateInterrupt();
};


UCLASS()
class UDialogueInterrupt: public UCombatInterrupt
{
	GENERATED_BODY()

private:
	virtual void ActivateInterrupt() override;
};


UCLASS()
class USkillInterrupt: public UCombatInterrupt
{
	GENERATED_BODY()

private:
	virtual void ActivateInterrupt() override;
};

