// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UPartyInventory.h"

#include "UObject/NoExportTypes.h"
#include "PartyEquipment.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyEquipment : public UObject
{
	GENERATED_BODY()
private:
	
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	
	UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	UPROPERTY()
	TArray<FEquipmentPassiveData> equipmentPassiveSkillData;

	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,USkillFactorySubsystem* aSkillFactorySubsystem );

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
