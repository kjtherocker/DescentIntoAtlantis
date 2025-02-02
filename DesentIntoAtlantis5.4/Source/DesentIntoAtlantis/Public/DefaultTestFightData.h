// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CompleteClassHandlerData.h"
#include "EquipmentHandler.h"
#include "UObject/NoExportTypes.h"
#include "DefaultTestFightData.generated.h"



UENUM()
enum class ETestCharacterState: uint8
{
	None               = 0,
	UnlockEverything   = 1,

};

USTRUCT()
struct DESENTINTOATLANTIS_API FDefaultTestPlayerFightData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	ETestCharacterState TestCharacterState = ETestCharacterState::UnlockEverything;
	
	
	UPROPERTY(EditAnywhere)
	EPartyMembers characterIdentifier;
	
	UPROPERTY(EditAnywhere)
	FCompleteClassHandlerData CompleteClassHandlerData;	

	UPROPERTY(EditAnywhere)
	FPassiveSlotHandlerData PassiveSlotHandlerData;
	
	UPROPERTY(EditAnywhere)
	FEquipmentHandlerData DefaultSpawnEquipmentHandlerData;
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