// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSkillHighlightElement.h"


void UClassSkillHighlightElement::SetClassInformation(FSkillClassData aSkillClassData)
{
	SkillClassData = aSkillClassData;

	SetText(BW_CostNumber,FString::FromInt(SkillClassData.CPCost));
	
	SetSkillLock(!SkillClassData.isSkillOwned);
}

void UClassSkillHighlightElement::SetSkill(FSkillsData aSkill)
{
	Super::SetSkill(aSkill);
}

void UClassSkillHighlightElement::SetSkillLock(bool aIsLocked)
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
