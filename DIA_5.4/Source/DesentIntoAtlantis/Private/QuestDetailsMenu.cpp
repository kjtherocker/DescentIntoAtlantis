// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDetailsMenu.h"

void UQuestDetailsMenu::SetQuestDetails(FQuestData aQuestData)
{

	SetText(BW_QuestName, aQuestData.QuestName);
}
