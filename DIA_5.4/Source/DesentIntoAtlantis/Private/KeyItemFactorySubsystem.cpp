// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyItemFactorySubsystem.h"

void UKeyItemFactorySubsystem::InitializeDatabase(UDataTable* aSkillDataTable)
{

	UDataTable*  datatable = aSkillDataTable;

	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			FKeyItemData KeyItemData = *datatable->FindRow<FKeyItemData>(FName(Element),FString("Searching for Skills"),true);
			
			allKeyItems.Add(KeyItemData.KeyItemsID,KeyItemData);
		}
	}
}

FKeyItemData UKeyItemFactorySubsystem::GetKeyItemData(EKeyItemsID aKeyItemsID)
{
	if(!allKeyItems.Contains(aKeyItemsID))
	{
		FKeyItemData fakeItemData;
		fakeItemData.KeyItemsID = EKeyItemsID::KeyItemDoesNotExist;
		fakeItemData.descriptionText = "Key Item Does Not Exist";
		return fakeItemData;
	}
	
	return allKeyItems[aKeyItemsID];
}

