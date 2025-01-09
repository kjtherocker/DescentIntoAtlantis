// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentPassive.h"

void UEquipmentPassive::InitializeEquipmentPassive(UPassiveSkills* aPassiveSkill)
{
	passiveSkill = aPassiveSkill; 
}

void UEquipmentPassive::RequestEquipment(FEquipmentRequestInfo aEquipmentStateInfo)
{
	EquipmentPassiveData.Amount += aEquipmentStateInfo.amount;
}
