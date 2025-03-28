// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBarElement.h"

#include "PersistentGameinstance.h"

void USkillBarElement::SetSkill(FSkillsData aSkill)
{
	if(aSkill.skillIcon == nullptr && aSkill.elementalType != EElementalType::None)
	{
		SkillIcon->SetBrushFromTexture(persistentGameinstance->elementalIcons[aSkill.elementalType]);
	}
	else
	{
		SkillIcon->SetBrushFromTexture(aSkill.skillIcon);		
	}

	SetMainText(aSkill.skillName);

	SkillCost->SetText(FText(FText::FromString(FString::FromInt(aSkill.costToUse))));
	BW_BackgroundHighlight->SetOpacity(0);
}
