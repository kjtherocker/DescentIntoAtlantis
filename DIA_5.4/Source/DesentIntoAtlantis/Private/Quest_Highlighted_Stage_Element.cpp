// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Highlighted_Stage_Element.h"

#include "Quest_Goal_Element.h"
#include "Components/VerticalBox.h"

void UQuest_Highlighted_Stage_Element::Initialize(AInGameHUD* aInGameHud)
{
	InGameHUD = aInGameHud;
}

void UQuest_Highlighted_Stage_Element::SetQuest(FQuestData aQuestData)
{
	questData = aQuestData;

	SetText(BW_QuestName,questData.QuestName);

	if(questData.QuestStageDatas.Num() == questData.currentQuestStage
		||  questData.currentQuestStage > questData.QuestStageDatas.Num() )
	{
		RemoveFromParent();
		return;
	}
	else
	{
		SetQuestStage(questData.QuestStageDatas[questData.currentQuestStage]);		
	}

}

void UQuest_Highlighted_Stage_Element::SetQuestStage(FQuestStageData aQuestStageData)
{
	if(aQuestStageData.QuestGoals.Num() == 0)
	{
		return;
	}

	for (auto Element : questGoalElements)
	{
		Element->RemoveFromParent();
	}

	questGoalElements.Empty();
	questStageData = aQuestStageData;
	
	for (auto Element : questStageData.QuestGoals)
	{
		CreateQuestbar(Element);
	}
	
}


void UQuest_Highlighted_Stage_Element::CreateQuestbar(FQuestGoalData AQuestGoalData)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::QuestGoalElement));

	UQuest_Goal_Element* baseUserWidget = (UQuest_Goal_Element*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->SetQuestGoalElement(AQuestGoalData);
	BW_GoalVerticalBox->AddChild(skillBarElement);

	questGoalElements.Add(baseUserWidget);
	
}

void UQuest_Highlighted_Stage_Element::UpdateAllQuestGoals()
{
	for(int i =0 ; i < questGoalElements.Num();i++)
	{
		questGoalElements[i]->SetQuestGoalElement(questStageData.QuestGoals[i]);
	}
}

