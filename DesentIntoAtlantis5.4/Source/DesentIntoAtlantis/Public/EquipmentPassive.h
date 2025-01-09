// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "EquipmentPassive.generated.h"

/**
 * 
 */


USTRUCT()
struct DESENTINTOATLANTIS_API FEquipmentRequestInfo:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	EEquipmentID equipmentID;
	
	UPROPERTY(EditAnywhere)
	int amount;
};


UCLASS()
class DESENTINTOATLANTIS_API UEquipmentPassive : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FEquipmentPassiveData EquipmentPassiveData;
	UPROPERTY()
	UPassiveSkills* passiveSkill;
public:

	
	
	void InitializeEquipmentPassive(UPassiveSkills* aPassiveSkill);
	UPassiveSkills* GetPassiveSkill(){ return passiveSkill;}
	EEquipmentID GetEquipmentID() {return GetEquipmentData().EquipmentID;}
	FEquipmentPassiveData GetEquipmentData(){ return EquipmentPassiveData; }
	void RequestEquipment(FEquipmentRequestInfo aEquipmentStateInfo);
};
