// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotElement.h"

#include "AtlantisGameModeBase.h"
#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "SaveSlotPortraitElement.h"
#include "Components/HorizontalBox.h"

class USaveSlotPortraitElement;

void USaveSlotElement::SetupSaveSlot(USaveGameData* aSaveGameData, int aSaveSlotNumber)
{
	int saveSlotNumber = SAVESLOT_NUMBER_OFFSET + aSaveSlotNumber;
	BW_SaveSlotNumber->SetText(FText::FromString(FString::FromInt(saveSlotNumber)));
	if(aSaveGameData == nullptr)
	{
		BW_Location->SetText(FText::FromString(""));
		BW_Time->SetText(FText::FromString("00:00:00"));
	}
	else
	{
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