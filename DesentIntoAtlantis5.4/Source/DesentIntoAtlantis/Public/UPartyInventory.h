// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentPassive.h"
#include "UObject/NoExportTypes.h"
#include "UPartyInventory.generated.h"

enum class EEquipmentID : uint8;
class UEquipmentPassive;
struct FEquipmentPassiveData;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPartyInventoryCompleteData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	TArray<FEquipmentPassiveData> equipmentPassiveSkillData;
};


UCLASS()
class DESENTINTOATLANTIS_API UPartyInventory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;

	UPROPERTY()
	TMap<EEquipmentID,UEquipmentPassive*> AllEquipment;

	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	UPROPERTY()
	TArray<FEquipmentPassiveData> equipmentPassiveSkillData;


	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem );

	FPartyInventoryCompleteData GetPartyInventoryCompleteData(){return partyInventoryCompleteData;}

	virtual UEquipmentPassive*  GetEquipment(EEquipmentID aEquipmentID);

	virtual TMap<EEquipmentID,UEquipmentPassive*> GetAllEquipment(){ return AllEquipment;}
	
	void AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest);


};
