// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBarElement.h"

void USkillBarElement::SetSkill(FSkillsData aSkill)
{
	SkillIcon->SetBrushFromTexture(aSkill.skillIcon);
	SetMainText(aSkill.skillName);

	SkillCost->SetText(FText(FText::FromString(FString::FromInt(aSkill.costToUse))));
	BW_BackgroundHighlight->SetOpacity(0);
}
