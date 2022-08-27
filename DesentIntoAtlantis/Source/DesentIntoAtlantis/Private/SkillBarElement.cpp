// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillBarElement.h"

void USkillBarElement::SetSkill(FSkills_Base* aSkill)
{
	SkillIcon->SetBrushFromTexture(aSkill->SkillIcon);
	SkillName->Text = FText(FText::FromString(aSkill->SkillName));
	SkillCost->Text = FText(FText::FromString(FString::FromInt(aSkill->CostToUse)));
}
