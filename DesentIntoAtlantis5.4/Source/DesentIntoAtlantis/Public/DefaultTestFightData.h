// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CompleteClassHandlerData.h"
#include "UObject/NoExportTypes.h"
#include "DefaultTestFightData.generated.h"


USTRUCT()
struct DESENTINTOATLANTIS_API FDefaultTestPlayerFightData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EPartyMembers characterIdentifier;
	
	UPROPERTY(EditAnywhere,Category = "Enemy")
	FCompleteClassHandlerData CompleteClassHandlerData;	

};


USTRUCT()
struct DESENTINTOATLANTIS_API FDefaultTestFightData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	
	UPROPERTY(EditAnywhere,Category = "Enemy")
	FString EnemyGroupID;

	UPROPERTY(EditAnywhere,Category = "Player")
	int PartyLevel;

	UPROPERTY(EditAnywhere,Category = "Player")
	TArray<FDefaultTestPlayerFightData> PlayerFightData;
};