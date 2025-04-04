// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySkillView.h"

#include "SkillBase.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UEnemySkillView::SetSkill(FSkillsData aSkill, UEnemyCombatEntity* aEnemyCombatEntity)
{
	BW_SkillIcon->SetBrushFromTexture(aSkill.skillIcon);
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_EnemyName->SetText(FText(FText::FromString(aEnemyCombatEntity->enemyEntityCompleteData.characterName)));

}

void UEnemySkillView::SetPassiveSkill(FPassiveSkillData aSkill, FString aCharacterName)
{
	BW_SkillIcon->SetBrushFromTexture(aSkill.passiveIcon);
	BW_SkillName->SetText(FText(FText::FromString(aSkill.passiveName)));
	
	BW_EnemyName->SetText(FText(FText::FromString(aCharacterName)));
}
