// Fill out your copyright notice in the Description page of Project Settings.


#include "MapEventEditorView.h"
#include "FloorEnum.h"
#include "MapButtonElement.h"

void UMapEventEditorView::InitializeEvent()
{
	InitializeComboBox(BW_TutorialOnStart, TUTORIAL_ENUM);
	InitializeComboBox(BW_TutorialOnEnd  , TUTORIAL_ENUM);
	InitializeComboBox(BW_AllyGained     , ALLY_ENUM);
	InitializeComboBox(BW_ViewOnEnd      , VIEW_ENUM);
	InitializeComboBox(BW_DialogueOnStart, DIALOGUE_ENUM);
	InitializeComboBox(BW_DialogueOnEnd  , DIALOGUE_ENUM);

	BW_SaveEventButton->OnClicked.AddDynamic(this,   &UMapEventEditorView::SaveEvent);
	BW_DeleteEventButton->OnClicked.AddDynamic(this, &UMapEventEditorView::DeleteEvent);
}

void UMapEventEditorView::InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName)
{
	UEnum* EnumType = FindObject<UEnum>(ANY_PACKAGE, *aEnumName, true); // Changed from GetOuter() to ANY_PACKAGE
    
	if (EnumType) // Check if EnumType is not nullptr
	{
		TArray<FName> enumNames = GetAllEnumNames(EnumType);

		if (enumNames.Num() > 0) // Check if enumNames is not empty
		{
			for (int32 i = 0; i < enumNames.Num(); ++i)
			{
				FString EnumName = enumNames[i].ToString();
				aCombobox->AddOption(EnumName);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("enumNames array is empty. Enum Type may not exist or is defined incorrectly."));
		}
	} 
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find enum type: %s"), *aEnumName);
	}
	
}

void UMapEventEditorView::SetComboxBoxIndex(UMapButtonElement* aMapButtonElement)
{
	currentMapButtonElement = aMapButtonElement;
	FFloorEventData floorEventData = aMapButtonElement->currentFloorEventData;
	
//if(floorEventData.floorIdentifier == EFloorIdentifier::None)
//{
//	return;
//}
	
//	BW_TutorialOnStart->SetSelectedIndex ((int)floorEventData.tutorialTriggerOnStart);
//	BW_TutorialOnEnd->SetSelectedIndex   ((int)floorEventData.tutorialTriggerOnEnd);
//	BW_AllyGained->SetSelectedIndex      ((int)floorEventData.partyMemberGainedOnEnd);
//	BW_ViewOnEnd->SetSelectedIndex       ((int)floorEventData.viewPushedOnEnd);
//	BW_DialogueOnStart->SetSelectedIndex ((int)floorEventData.dialogueTriggerOnStart);
//	BW_DialogueOnEnd->SetSelectedIndex   ((int)floorEventData.dialogueTriggerOnEnd);

//	FText EnemyGroupNameText = FText::FromString(floorEventData.enemyGroupName);
//	BW_EnemyGroupTextBox->SetText(EnemyGroupNameText);
}


void UMapEventEditorView::SaveEvent()
{
	FFloorEventData floorEventData;
	
//	floorEventData.enemyGroupName         = (FString)BW_EnemyGroupTextBox->GetText().ToString();
	floorEventData.positionInGrid         = currentMapButtonElement->positionInGrid;
//	floorEventData.dialogueTriggerOnStart = (EDialogueTriggers)BW_DialogueOnStart->GetSelectedIndex();
//	floorEventData.dialogueTriggerOnEnd   = (EDialogueTriggers)BW_DialogueOnEnd->GetSelectedIndex();
//	floorEventData.tutorialTriggerOnStart = (ETutorialTriggers)BW_TutorialOnStart->GetSelectedIndex();
//	floorEventData.tutorialTriggerOnEnd   = (ETutorialTriggers)BW_TutorialOnEnd->GetSelectedIndex();
//	floorEventData.viewPushedOnEnd        = (EViews)BW_ViewOnEnd->GetSelectedIndex();
//	floorEventData.partyMemberGainedOnEnd = (EPartyMembers)BW_AllyGained->GetSelectedIndex();
	
	if(currentMapButtonElement->currentFloorEventData.floorIdentifier == EFloorIdentifier::None)
	{
		onFloorEventCreation.Broadcast(floorEventData);
	}
	else
	{
		onFloorEventSave.Broadcast(currentMapButtonElement->floorEventDataTableindex ,floorEventData);
	}

}

void UMapEventEditorView::DeleteEvent()
{
	onFloorEventDeletion.Broadcast(currentMapButtonElement->floorEventDataTableindex);
}

void UMapEventEditorView::VerifyGroup()
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
