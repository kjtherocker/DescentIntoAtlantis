// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusMainMenuElement.h"

#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UStatusMainMenuElement::SetCombatEntity(UPlayerCombatEntity* aCombatEntity)
{
	Super::SetCombatEntity(aCombatEntity);


	if(aCombatEntity->playerIdentityData.halfBodyCharacterPortrait)
	{
		BW_CharacterPortrait->SetBrushFromTexture(aCombatEntity->playerIdentityData.halfBodyCharacterPortrait);
	}
	
	TMap<EElementalType, UTexture2D*> elementalicons = persistentGameinstance->elementalIcons;
	
	//UTexture2D* strongElemental = elementalicons[aCombatEntity->mainClass->completeClassData.ElementalStrength];
	//UTexture2D* strongWeak = elementalicons[aCombatEntity->mainClass->completeClassData.ElementalWeakness];
	//
	//BW_ElementalStrength->SetBrushFromTexture(strongElemental);
	//BW_ElementalWeakness->SetBrushFromTexture(strongWeak);
	
	BW_CharacterName->SetText(FText::FromString(characterName));

	BW_MainClassText->SetText(FText::FromString(aCombatEntity->classHandler->mainClass->completeClassData.className));

	
	float expPercentage = aCombatEntity->GetMainClassEXPPercentage();
	BW_Sync->SetPercent(expPercentage);

	
}
