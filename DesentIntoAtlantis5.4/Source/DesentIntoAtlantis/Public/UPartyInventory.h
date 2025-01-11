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
	TMap<EEquipmentID,FEquipmentPassiveInventoryInfo> equipmentInventoryInfo;
};


UCLASS()
class DESENTINTOATLANTIS_API UPartyInventory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	

	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	UPROPERTY()
	TArray<FEquipmentPassiveData> equipmentPassiveSkillData;


	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem );

	void AddMoreStacksOfEquipment(FEquipmentRequestInfo aEquipmentRequest);

	void ReturnEquipment(EPartyMembers aOldOwner,EEquipmentID aEquipmentID);
	UEquipmentPassive* TakeOutEquipment(EPartyMembers aNewOwner,EEquipmentID aEquipmentID);
	
	
	FPartyInventoryCompleteData GetPartyInventoryCompleteData(){return partyInventoryCompleteData;}

	virtual bool isEquipmentFreeToTake(EEquipmentID aEquipmentID);

	virtual  FEquipmentPassiveInventoryInfo  GetEquipment(EEquipmentID aEquipmentID);

	virtual TMap<EEquipmentID,FEquipmentPassiveInventoryInfo> GetAllEquipment(){ return GetPartyInventoryCompleteData().equipmentInventoryInfo;}

	virtual FPassiveSkillData GetEquipmentPassiveSkillData(EEquipmentID aEquipmentID);
	void AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest);


};
