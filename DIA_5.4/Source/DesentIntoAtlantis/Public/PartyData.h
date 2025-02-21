// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EDataTableTypes.h"
#include "ItemChargeHandler.h"
#include "PartyEnum.h"
#include "PlayerCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "PartyData.generated.h"

USTRUCT(Atomic)
struct DESENTINTOATLANTIS_API FPartyExperienceTable :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	TMap<int,int> LevelExpValue;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPartyInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ESlot,EPartyMembersID> activePartyMembers;

	UPROPERTY()
	TArray<EPartyMembersID> partyMemberDump;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPartyGroupCompleteData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<EPartyType,FPartyInfo> partyInfos;
	
};





USTRUCT()
struct DESENTINTOATLANTIS_API FCompletePartyManagerSubsystemData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	int partyLevel = 0;
	UPROPERTY(EditAnywhere)
	int totalExperience = 0;
	UPROPERTY(EditAnywhere)
	int totalClassPoints = 0;

	UPROPERTY()
	TArray<EClassID> partyWideUnlockedClasses;
	

	UPROPERTY()
	FItemChargesCompleteData partyWideItemChargeBase;
	
	UPROPERTY()
	FPartyInventoryCompleteData PartyInventoryCompleteData;

	UPROPERTY()
	FPartyGroupCompleteData partyData;
	
	UPROPERTY()
	TMap<EPartyMembersID, FPlayerCompleteDataSet> playerCompleteDataSet;
};