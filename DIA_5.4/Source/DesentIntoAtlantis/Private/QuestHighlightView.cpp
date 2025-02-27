// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestHighlightView.h"

#include "PersistentGameinstance.h"
#include "QuestSubsystem.h"
#include "Quest_Goal_Element.h"
#include "Components/VerticalBox.h"

void UQuestHighlightView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	QuestSubsystem = persistentGameinstance->questSubsystem;
	QuestSubsystem->onQuestUpdated.AddDynamic(this,&UQuestHighlightView::OnQuestUpdate);


	BW_TestQuestStageElement->Initialize(InGameHUD);
	BW_TestQuestStageElement->UiInitialize(gameModeBase);
	BW_TestQuestStageElement->SetQuest(QuestSubsystem->GetCurrentMainQuest());
	
	CreateQuestbar(	QuestSubsystem->GetCurrentMainQuest());
}

void UQuestHighlightView::CreateQuestbar(FQuestData aQuestData)
{
	if(aQuestData.QuestStageDatas.Num() == 0)
	{
		return;
	}
	
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::QuestStageElement));

	UQuest_Highlighted_Stage_Element* baseUserWidget = (UQuest_Highlighted_Stage_Element*)skillBarElement;
	baseUserWidget->Initialize(InGameHUD);
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->SetQuest(aQuestData);
	BW_StageVerticalBox->AddChild(skillBarElement);

	questStageHighlightElements.Add(baseUserWidget);
	
}

void UQuestHighlightView::OnQuestUpdate(FQuestData aQuestData)
{
	for (auto Element : questStageHighlightElements)
	{
		int questID = Element->GetCurrentQuestID();
		if(questID == aQuestData.QuestID)
		{
			Element->SetQuest(aQuestData);
			return;
		}
	}
}
