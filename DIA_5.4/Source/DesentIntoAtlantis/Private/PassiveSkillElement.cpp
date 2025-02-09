// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSkillElement.h"

void UPassiveSkillElement::SetPassiveSkill(FPassiveSkillData aSkill)
{
	BW_PassiveSkillIcon->SetBrushFromTexture(aSkill.passiveIcon);

	SetMainText(aSkill.passiveName);

	BW_BackgroundHighlight->SetOpacity(0);
}

