// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementalHandler.h"

void UElementalInfo::Initialize(EElementalType aElementalType, EElementalReaction aElementalEffect)
{
	CompleteElementalInfo.elementalReaction = aElementalEffect;
	CompleteElementalInfo.elementalType   = aElementalType;
}

void UElementalHandler::LoadSavedInfo(FCompleteElementalHandlerData aCompleteElementalHandlerData)
{
	
	for (auto Element : aCompleteElementalHandlerData.elementalInfo)
	{
		SetElementalReaction(Element.Key, Element.Value.elementalReaction);
	}
}

void UElementalHandler::Initialize(UCombatEntity* aCombatEntity)
{
	AddNewElementalInfo(EElementalType::Null);
	AddNewElementalInfo(EElementalType::Shadow);
	AddNewElementalInfo(EElementalType::Light);
	AddNewElementalInfo(EElementalType::Lighting);
	AddNewElementalInfo(EElementalType::Wind);
	AddNewElementalInfo(EElementalType::Shadow);
	AddNewElementalInfo(EElementalType::Ice);
	AddNewElementalInfo(EElementalType::Fire);
	AddNewElementalInfo(EElementalType::Earth);
}

void UElementalHandler::AddNewElementalInfo(EElementalType elementalType)
{
	UElementalInfo* ElementalInfo = NewObject<UElementalInfo>();
	ElementalInfo->Initialize(elementalType,EElementalReaction::Normal);
	elementalInfo.Add(elementalType, NewObject<UElementalInfo>());
	CompleteElementalHandlerData.elementalInfo.Add(elementalType,ElementalInfo->GetCompleteElementalInfo());
}

EElementalReaction UElementalHandler::GetElementalReaction(EElementalType elementalType)
{
	return elementalInfo[elementalType]->GetCompleteElementalInfo().elementalReaction;
}

void UElementalHandler::SetElementalReaction(EElementalType elementalType, EElementalReaction elementalEffect)
{
	elementalInfo[elementalType]->SetElementalReaction(elementalEffect);
	CompleteElementalHandlerData.elementalInfo[elementalType] = elementalInfo[elementalType]->GetCompleteElementalInfo();
}

void UElementalHandler::ResetAllElements()
{
	for (auto Element : elementalInfo)
	{
		SetElementalReaction(Element.Key, EElementalReaction::None);
	}
}
