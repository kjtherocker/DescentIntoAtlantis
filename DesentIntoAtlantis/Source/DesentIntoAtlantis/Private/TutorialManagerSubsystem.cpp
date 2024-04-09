// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialManagerSubsystem.h"

void UTutorialManagerSubsystem::InitializeDatabase(UDataTable* aTutorialDatabase)
{
	UDataTable* datatable = aTutorialDatabase;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		tutorialData.Add(*datatable->FindRow<FTutorialData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
		tutorialMap.Add(tutorialData[i].tutorialTrigger,tutorialData[i]);
	}
}
