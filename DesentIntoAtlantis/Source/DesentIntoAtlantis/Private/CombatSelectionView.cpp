// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSelectionView.h"

#include "CombatGameModeBase.h"
#include "PartyHealthbarElement.h"
#include "Components/TextBlock.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"

void UCombatSelectionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCombatSelectionView::ActivateSkill  );
	InputComponent->BindAction("Left"    ,IE_Pressed , this, &UCombatSelectionView::MoveCursorLeft  );
	InputComponent->BindAction("Right"   ,IE_Pressed ,this, &UCombatSelectionView::MoveCursorRight  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &UCombatSelectionView::ReturnToPreviousScreen  );
	
	enemySelectionElements.Add(EEnemyCombatPositions::Left,BW_EnemySelectionBar);
	enemySelectionElements.Add(EEnemyCombatPositions::Middle,BW_EnemySelectionBar_1);
	enemySelectionElements.Add(EEnemyCombatPositions::Right,BW_EnemySelectionBar_2);

	for (TTuple<EEnemyCombatPositions, UEnemySelectionElement*> enemyUiElement : enemySelectionElements)
	{
		enemyUiElement.Value->SetRenderOpacity(NO_OPACITY);
	}
	
}

void UCombatSelectionView::SetCombatGameMode(ACombatGameModeBase* aCombatGameMode)
{
	combatManager = aCombatGameMode;
	enemysInCombat = combatManager->GetEnemysInCombat();
}

void UCombatSelectionView::ActivateSkill()
{
	SetCursorHud(false);
	combatManager->GetCurrentActivePartyMember()->DecrementMana(currentSkill->skillData.costToUse);
	combatManager->pressTurnManager->ActivateSkill(combatManager->GetCurrentActivePartyMember(),cursorPosition,currentSkill);
}

void UCombatSelectionView::MoveCursorLeft()
{
	if(!hasCursor)
	{
		return;
	}

	SetCursorHud(false);

	Super::MoveUp();
	
	SetCursorHud(true);
}

void UCombatSelectionView::MoveCursorRight()
{
	if(!hasCursor)
	{
		return;
	}

	SetCursorHud(false);

	Super::MoveDown();
	
	SetCursorHud(true);
}

void UCombatSelectionView::SetCursorHud(bool aisActive)
{

	FSkillsData skillData = currentSkill->skillData;
	switch(skillData.skillUsage)
	{
	case ESkillUsage::Opponents:
		{
			float opacity = aisActive ? MAX_OPACITY : NO_OPACITY;
	

			if(hasCursor)
			{
				float potentialDamage = enemysInCombat[cursorPosition]->
					GetPotentialHealthPercentage(enemysInCombat[cursorPosition]->CalculateDamage(combatManager->GetCurrentActivePartyMember(),skillData));
				enemySelectionElements[enemysInCombat[cursorPosition]->portraitPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
			}
			else
			{
				for(int i = 0 ; i < enemysInCombat.Num();i++)
				{
					float potentialDamage = enemysInCombat[i]->
						GetPotentialHealthPercentage(enemysInCombat[i]->CalculateDamage(combatManager->GetCurrentActivePartyMember(),skillData));
					enemySelectionElements[enemysInCombat[i]->portraitPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
				}
			}

			break;
		}
		case ESkillUsage::Comrades:
		{

			if(hasCursor)
			{
				
				//float potentialDamage = enemysInCombat[cursorPosition]->
				//	GetPotentialHealthPercentage(enemysInCombat[cursorPosition]->CalculateDamage(combatManager->currentActivePartyMember,skillData));
				//enemySelectionElements[enemysInCombat[cursorPosition]->enemyCombatPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
				if(aisActive)
				{
					playersInCombat[cursorPosition]->partyHealthbarElement->MoveUp();
				}
				else
				{
					playersInCombat[cursorPosition]->partyHealthbarElement->ResetTranslation();
				}
			}
			else
			{
				for(int i = 0 ; i < playersInCombat.Num();i++)
				{
				//float potentialDamage = enemysInCombat[i]->
				//	GetPotentialHealthPercentage(enemysInCombat[i]->CalculateDamage(combatManager->currentActivePartyMember,skillData));
				//	enemySelectionElements[enemysInCombat[i]->enemyCombatPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
					if(aisActive)
                	{
                		playersInCombat[i]->partyHealthbarElement->MoveUp();
                	}
                	else
                	{
                		playersInCombat[i]->partyHealthbarElement->ResetTranslation();
                	}
				}
			}
			
			break;
		}
		default:
		{
			
		};
	}

}

void UCombatSelectionView::InitializeEnemySelectionElements(TArray<UEnemyCombatEntity*> aEnemysInCombat)
{
	for (TPair<EEnemyCombatPositions, UEnemySelectionElement*>& pair : enemySelectionElements)
	{
		pair.Value->SetColorAndOpacity(FLinearColor(1,1,1,0));
		pair.Value->BW_BackgroundHighlight->SetOpacity(0);
	}

	for(int i= 0; i < aEnemysInCombat.Num() ;i++)
	{
		if(enemySelectionElements.Contains(aEnemysInCombat[i]->portraitPosition))
		{
			enemySelectionElements[aEnemysInCombat[i]->portraitPosition]->SetColorAndOpacity(FLinearColor(1,1,1,1));
			enemySelectionElements[aEnemysInCombat[i]->portraitPosition]->SetEnemySelectionElement(aEnemysInCombat[i]);
		}
	}

}

void UCombatSelectionView::SetSkill(USkillBase* aSkill)
{
	currentSkill = aSkill;
	FSkillsData skillData = currentSkill->skillData;

	if(skillData.skillRange == ESkillRange::Single)
	{
		hasCursor = true;
	}
	cursorPosition = 0;
	switch(skillData.skillUsage)
	{
		case ESkillUsage::Opponents:
		{
			InitializeEnemySelectionElements(enemysInCombat);
			maxCursorPosition = enemysInCombat.Num() -1;
			minCursorPosition = 0;

			for (TTuple<EEnemyCombatPositions, UEnemySelectionElement*> enemyUiElement : enemySelectionElements)
			{
				enemyUiElement.Value->SetRenderOpacity(MAX_OPACITY);
			}
			break;
		}
		case ESkillUsage::Comrades:
		{
			playersInCombat = combatManager->GetPlayersInCombat();
			maxCursorPosition = playersInCombat.Num() -1;
			minCursorPosition = 0;
			break;
		}
		default:
		{
			
		};
	}


	SetCursorHud(true);
}

void UCombatSelectionView::ReturnToPreviousScreen()
{
	Super::ReturnToPreviousScreen();
	SetCursorHud(false);
}
