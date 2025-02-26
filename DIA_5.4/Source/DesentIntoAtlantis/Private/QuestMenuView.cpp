// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestMenuView.h"

#include "Base_Header_Vertical_Box.h"
#include "QuestDetailsMenu.h"
#include "QuestElement.h"
#include "QuestSubsystem.h"
#include "SkillData.h"

void UQuestMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UQuestMenuView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UQuestMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UQuestMenuView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UQuestMenuView::PopMostActiveView  );

	TMap<int32, FQuestData> activeQuestData = persistentGameinstance->questSubsystem->GetAllActiveQuestData();

	for (auto QuestData : activeQuestData)
	{
		CreateQuestbar(QuestData.Value);
	}

	TMap<int32, FQuestData> completedQuestData = persistentGameinstance->questSubsystem->GetAllCompletedQuestData();

	for (auto QuestData : completedQuestData)
	{
		BW_QuestDetailsMenu->SetQuestDetails(QuestData.Value);
		CreateQuestbar(QuestData.Value);
	}
}

void UQuestMenuView::CreateQuestbar(FQuestData aQuestData)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::QuestElement));

	UQuestElement* baseUserWidget = (UQuestElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->Initialze(aQuestData);

	if(!aQuestData.isComplete)
	{
		switch (aQuestData.questType)
		{
		case EQuestType::None:
			break;
		case EQuestType::MainQuest:
			BW_MainQuestHeader->BW_VerticalBox->AddChild(skillBarElement);	
			break;
		case EQuestType::SideQuest:
			break;
		case EQuestType::GodQuest:
			break;
		}
	}
	else
	{
		BW_CompletedQuestHeader->BW_VerticalBox->AddChild(skillBarElement);	
	}
	
}



