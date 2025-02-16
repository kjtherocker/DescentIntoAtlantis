// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "ItemChargeHandler.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FItemChargesInfo : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	bool isItemChargeFull = false;
	
	UPROPERTY(EditAnywhere)
	float itemChargesMax = 1;
	
	UPROPERTY(EditAnywhere)
	float itemChargesPercentage = 0;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FItemChargesCompleteData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float ItemChargeMultiplier = 1;
	
	UPROPERTY(EditAnywhere)
	TArray<FItemChargesInfo> ItemChargesInfos;
	
	UPROPERTY(EditAnywhere)
	int itemChargesMax;

	UPROPERTY(EditAnywhere)
	TArray<int> ItemChargeBonuses;
};

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemChargeHandler : public UObject
{
	GENERATED_BODY()

private:

	int baseItemChargesAmount = 1;
	UPROPERTY()
	FItemChargesCompleteData itemCharges;

public:

	virtual void Initialize();
	virtual void SetBaseItemCharges();
	virtual void ValidateItemCharges();
	virtual void DecrementItemCharges(float aPercentage);
	virtual void IncrementItemChargesPercentage(float aPercentage);
	virtual void FillItemCharge(int aAmount);
	virtual void ConsumeItemCharge(int aAmount);

	virtual void ShiftItemChargesToEmptyCharges();
	virtual bool isItemChargeAvaliable();
	virtual void SetItemCharges(FItemChargesCompleteData ItemCharges);
	virtual void CreateNewItemCharge();
};
