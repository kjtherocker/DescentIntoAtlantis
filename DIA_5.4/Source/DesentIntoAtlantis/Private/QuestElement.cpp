// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestElement.h"

void UQuestElement::Initialze(FQuestData aQuestData)
{
	QuestData = aQuestData;

	SetMainText(QuestData.QuestName);
}
