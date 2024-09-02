// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotElement.h"

#include "AtlantisGameModeBase.h"
#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "SaveSlotPortraitElement.h"
#include "Components/HorizontalBox.h"

class USaveSlotPortraitElement;

void USaveSlotElement::SetupSaveSlot(USaveGameData* aSaveGameData,FString aSlotName)
{
	saveSlotName = aSlotName;
	BW_SaveSlotNumber->SetText(FText::FromString(saveSlotName));
	if(aSaveGameData == nullptr)
	{
		BW_Location->SetText(FText::FromString(""));
		BW_Time->SetText(FText::FromString(""));
	}
	else
	{
		BW_Time->SetText(FText::FromString(""));
		TMap<EPartyMembers, FPlayerCompleteDataSet> playerCompleteDataSet = aSaveGameData->playerCompleteDataSet;
		for (TTuple<EPartyMembers, FPlayerCompleteDataSet> partyMember : playerCompleteDataSet)
		{
			SpawnPlayerPortraits(partyMember.Value);
		};		
	}

}

void USaveSlotElement::SpawnPlayerPortraits(FPlayerCompleteDataSet aCompleteDataSet)
{
	UPartyManagerSubsystem* PartyManagerSubsystem = persistentGameinstance->partyManagerSubsystem;

	InGameHUD = gameModeBase->InGameHUD;
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::SavePortraitElement));

	USaveSlotPortraitElement* baseUserWidget = (USaveSlotPortraitElement*)partyStatusHealthbar;
	baseUserWidget->UiInitialize(gameModeBase);
	partyStatusHealthbar->AddToViewport();
	EPartyMembers currentPartyMember = aCompleteDataSet.playerIdentityData.characterIdentifier;
	UTexture2D* texture = PartyManagerSubsystem->playerIdenityMap[currentPartyMember].halfBodyCharacterPortrait;
	
	baseUserWidget->SetPortrait(texture);
	BW_HorizontalBox->AddChild(baseUserWidget);
	portraitElements.Add(baseUserWidget);

}

void USaveSlotElement::MoveSlotRight()
{
	SetRenderTranslation(FVector2d(MOVE_SLOT_RIGHT_OFFSET,0));
}

void USaveSlotElement::ResetTranslation()
{
	SetRenderTranslation(FVector2d(0,0));
}
