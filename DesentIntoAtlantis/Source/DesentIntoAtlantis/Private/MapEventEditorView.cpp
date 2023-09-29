// Fill out your copyright notice in the Description page of Project Settings.


#include "MapEventEditorView.h"

#include "FloorEnum.h"

void UMapEventEditorView::InitializeEvent()
{
	SetupComboBox(BW_TutorialOnStart);
	SetupComboBox(BW_TutorialOnEnd);
}

void UMapEventEditorView::SetupComboBox(UComboBoxString* aCombobox)
{
	UEnum* EnumType = FindObject<UEnum>(ANY_PACKAGE, *TUTORIAL_ENUM, true);
	TArray<FName> enumNames = GetAllEnumNames(EnumType);
	
	for (int32 i = 0; i < enumNames.Num(); ++i)
	{
	
    	FString EnumName = enumNames[i].ToString();
    	//FloorNames.Add(EnumPtr->enum)
    
    	//FloorNames.Add(EnumIndex,FName(EnumName));
    	aCombobox->AddOption(EnumName);
    }

	
}


void UMapEventEditorView::SaveEvent()
{
}

void UMapEventEditorView::CreateEvent()
{
}

void UMapEventEditorView::VerifyGroup()
{
}

void UMapEventEditorView::SetCombobox()
{
}

TArray<FName> UMapEventEditorView::GetAllEnumNames(UEnum* EnumType)
{
	TArray<FName> EnumNames;

	if (EnumType)
	{
		for (int32 i = 0; i < EnumType->NumEnums(); i++)
		{
			EnumNames.Add(FName(EnumType->GetNameStringByIndex(i)));
		}
	}

	return EnumNames;
}
