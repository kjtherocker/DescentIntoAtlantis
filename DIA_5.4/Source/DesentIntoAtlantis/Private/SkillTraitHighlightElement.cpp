// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillTraitHighlightElement.h"

#include "Components/Image.h"

void USkillTraitHighlightElement::InitializeSkillTrait(USkillHandler* aSkillHandler, ESkillTraitType aSkillTraitType, FSkillsData aSkillData)
{
	switch (aSkillTraitType) {
	case ESkillTraitType::None:
		break;
	case ESkillTraitType::Damage:
		break;
	case ESkillTraitType::Element:
		break;
	case ESkillTraitType::DamageType:
		{
			FSlateColor SlateColor(FLinearColor::Yellow); // Example color (Red)
			BW_Background->SetBrushTintColor(SlateColor);
			SetText(BW_TraitTitle,"Damage Type");
			SetMainText(aSkillHandler->skillDamageTypeString[aSkillData.skillDamageType]);
		}
		break;
	case ESkillTraitType::ScaleStat:
		{
			FSlateColor SlateColor(FLinearColor::Gray); // Example color (Red)
			BW_Background->SetBrushTintColor(SlateColor);
			SetText(BW_TraitTitle,"Scale Stat");
			SetMainText(aSkillHandler->skillScaleStatString[aSkillData.skillScaleStat]);
		}
		break;
	case ESkillTraitType::SkillHit:
		{
			FSlateColor SlateColor(FLinearColor::Green); // Example color (Red)
			BW_Background->SetBrushTintColor(SlateColor);
			SetText(BW_TraitTitle,"Skill Hit");
			SetMainText(FString::FromInt(aSkillData.SkillHit)+"%");
		}
		break;
	case ESkillTraitType::skillType:
		{
			FSlateColor SlateColor(FLinearColor::Red); 
			BW_Background->SetBrushTintColor(SlateColor);
			SetText(BW_TraitTitle,"Skill Type");
			SetMainText(aSkillHandler->skillTypeString[aSkillData.skillType]);
		}
		break;
	}
}
