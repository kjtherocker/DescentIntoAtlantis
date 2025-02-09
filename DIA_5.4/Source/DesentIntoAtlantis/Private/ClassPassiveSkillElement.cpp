// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassPassiveSkillElement.h"

void UClassPassiveSkillElement::SetClassInformation(FPassiveSkillClassData aSkillClassData)
{
	passiveSkillClassData = aSkillClassData;

	SetText(BW_CostNumber,FString::FromInt(passiveSkillClassData.CPCost));
	
	SetSkillLock(!passiveSkillClassData.isPassiveOwned);
}

void UClassPassiveSkillElement::SetSkillLock(bool aIsLocked)
{
	if(aIsLocked)
	{
		BW_Background->SetColorAndOpacity(greyColor);
	}
	else
	{
		BW_Background->SetColorAndOpacity(highlightedColor);
		SetText(BW_CostNumber,"Unlocked");
		SetText(BW_TitleText,"");

	}
}
