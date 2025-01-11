// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentPassive.h"

void UEquipmentPassive::InitializeEquipmentPassive(EEquipmentID aEquipmentID,UPassiveSkills* aPassiveSkill)
{
	EquipmentPassiveData.EquipmentID = aEquipmentID;
	passiveSkill = aPassiveSkill; 
}

void UEquipmentPassive::SetEquipment(FEquipmentPassiveData aEquipmentPassiveData)
{
	EquipmentPassiveData = aEquipmentPassiveData;
}

