// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatSelectionView.h"

#include "CombatManager.h"
#include "Components/TextBlock.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void UCombatSelectionView::UiInitialize()
{
	Super::UiInitialize();
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCombatSelectionView::ActivateSkill  );
	InputComponent->BindAction("Left"   ,IE_Pressed , this, &UCombatSelectionView::MoveCursorLeft  );
	InputComponent->BindAction("Right"   ,IE_Pressed ,this, &UCombatSelectionView::MoveCursorRight  );
	
	enemySelectionElements.Add(EEnemyCombatPositions::Left,BW_EnemySelectionBar);
	enemySelectionElements.Add(EEnemyCombatPositions::Middle,BW_EnemySelectionBar_1);
	enemySelectionElements.Add(EEnemyCombatPositions::Right,BW_EnemySelectionBar_2);

	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	combatManager =  GameModeBase->combatManager;
	enemysInCombat = combatManager->GetEnemysInCombat();
	
}

void UCombatSelectionView::ActivateSkill()
{
	combatManager->pressTurnManager->ActivateSkill(combatManager->currentActivePartyMember,cursorPosition,currentSkill);
}

void UCombatSelectionView::MoveCursorLeft()
{
	if(!hasCursor)
	{
		return;
	}

	SetCursorHud(false);

	cursorPosition--;

	if(-1 == cursorPosition)
	{
		cursorPosition = cursorMaxRange;
	}
	
	SetCursorHud(true);
}

void UCombatSelectionView::MoveCursorRight()
{
	if(!hasCursor)
	{
		return;
	}

	SetCursorHud(false);

	cursorPosition++;

	if(cursorPosition > cursorMaxRange)
	{
		cursorPosition = 0;
	}
	SetCursorHud(true);

}

void UCombatSelectionView::SetCursorHud(bool aisActive)
{
	switch(currentSkill.SkillType)
	{
		case Attack:
		{
			float opacity = aisActive ? 100 : 0;
	

			if(hasCursor)
			{
				float potentialDamage = enemysInCombat[cursorPosition]->
					GetPotentialHealthPercentage(enemysInCombat[cursorPosition]->CalculateDamage(combatManager->currentActivePartyMember,currentSkill));
				enemySelectionElements[enemysInCombat[cursorPosition]->enemyCombatPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
			}
			else
			{
				for(int i = 0 ; i < enemysInCombat.Num();i++)
				{
					float potentialDamage = enemysInCombat[i]->
						GetPotentialHealthPercentage(enemysInCombat[i]->CalculateDamage(combatManager->currentActivePartyMember,currentSkill));
					enemySelectionElements[enemysInCombat[i]->enemyCombatPosition]->SetHighlightSelectionElement(potentialDamage,opacity);
				}
			}

			break;
		}
		case Heal:
		{
			TArray<UPlayerCombatEntity*> playersInCombat = combatManager->GetPlayersInCombat();
			cursorMaxRange = playersInCombat.Num() -1;
			break;
		}
		case Defence:
		{
			break;
		}
		case Domain:
		{
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
		if(enemySelectionElements.Contains(aEnemysInCombat[i]->enemyCombatPosition))
		{
			enemySelectionElements[aEnemysInCombat[i]->enemyCombatPosition]->SetColorAndOpacity(FLinearColor(1,1,1,1));
			enemySelectionElements[aEnemysInCombat[i]->enemyCombatPosition]->SetEnemySelectionElement(aEnemysInCombat[i]);
		}
	}

}

void UCombatSelectionView::SetSkill(FSkills_Base aSkill)
{
	currentSkill = aSkill;


	if(aSkill.skillRange == ESkillRange::Single)
	{
		hasCursor = true;
	}
	
	switch(aSkill.SkillType)
	{
		case Attack:
		{
			InitializeEnemySelectionElements(enemysInCombat);
			cursorMaxRange = enemysInCombat.Num() -1;
			break;
		}
		case Heal:
		{
			TArray<UPlayerCombatEntity*> playersInCombat = combatManager->GetPlayersInCombat();
			cursorMaxRange = playersInCombat.Num() -1;
			break;
		}
		case Defence:
		{
			break;
		}
		case Domain:
		{
			break;
		}
		default:
		{
			
		};
	}


	SetCursorHud(true);
}
