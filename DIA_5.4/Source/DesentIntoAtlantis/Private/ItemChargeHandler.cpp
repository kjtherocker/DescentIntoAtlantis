// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemChargeHandler.h"

void UItemChargeHandler::Initialize()
{
	CreateNewItemCharge();
	FillItemCharge(1);
}

void UItemChargeHandler::SetBaseItemCharges()
{
}

void UItemChargeHandler::ValidateItemCharges()
{
	if(itemCharges.ItemChargesInfos.Num() > baseItemChargesAmount)
	{
		
	}
}

void UItemChargeHandler::DecrementItemCharges(float aPercentage)
{
}

void UItemChargeHandler::IncrementItemChargesPercentage(float aPercentage)
{
	int amountAdded = aPercentage;
	int OverFlow    = 0;
	for (auto Element : itemCharges.ItemChargesInfos)
	{
		if(amountAdded <= 0)
		{
			return;
		}
		
		if(!Element.isItemChargeFull)
		{
			int maxPercentage = 1.0;
			int differenceBetweenMaxAndCurrent = maxPercentage - Element.itemChargesPercentage;
			int Difference = differenceBetweenMaxAndCurrent - amountAdded;
			
			Element.itemChargesPercentage += Difference;
			amountAdded -= Difference;
		}
	}
}

void UItemChargeHandler::FillItemCharge(int aAmount)
{
	TArray<FItemChargesInfo> ItemChargesInfos = itemCharges.ItemChargesInfos;
	int AmountToFill = aAmount;
	for(int i = 0; i  < ItemChargesInfos.Num();i++)
	{
		if(AmountToFill == 0)
		{
			return;
		}
		
		if(!ItemChargesInfos[i].isItemChargeFull)
		{
			AmountToFill--;
			ItemChargesInfos[i].itemChargesPercentage = 1.0;
			ItemChargesInfos[i].isItemChargeFull = true;
		}
	}
	
	itemCharges.ItemChargesInfos = ItemChargesInfos;
}

void UItemChargeHandler::ConsumeItemCharge(int aAmount)
{
	TArray<FItemChargesInfo> ItemChargesInfos = itemCharges.ItemChargesInfos;
	int AmountToConsume = aAmount;
	for(int i = ItemChargesInfos.Num() -1; i >= 0 ;i--)
	{
		if(AmountToConsume == 0)
		{
			break;
		}
		if(ItemChargesInfos[i].isItemChargeFull)
		{
			AmountToConsume--;

			ItemChargesInfos[i].isItemChargeFull = false;
			ItemChargesInfos[i].itemChargesPercentage = 0;
		}
	}
	
	itemCharges.ItemChargesInfos = ItemChargesInfos;
}

void UItemChargeHandler::ShiftItemChargesToEmptyCharges()
{
	TArray<FItemChargesInfo> ItemChargesInfos = itemCharges.ItemChargesInfos;

	int OverFlow = 0;
	
	for(int i = ItemChargesInfos.Num() -1; i > 0 ;i--)
	{
		if(ItemChargesInfos[i].itemChargesPercentage > 0)
		{
			OverFlow = ItemChargesInfos[i].itemChargesPercentage;

			for(int j = 0 ; j < ItemChargesInfos.Num();j++)
			{
				if(j == i)
				{
					break;
				}
				
				if(ItemChargesInfos[j].itemChargesPercentage == 0)
				{
					ItemChargesInfos[j].itemChargesPercentage = OverFlow;
					ItemChargesInfos[i].isItemChargeFull = false;
					ItemChargesInfos[i].itemChargesPercentage = 0;
				}
			}
		}
		
	}
}

bool UItemChargeHandler::isItemChargeAvaliable()
{
	for (auto Element : itemCharges.ItemChargesInfos)
	{
		if(Element.isItemChargeFull)
		{
			return true;
		}
	}


	return false;
}

void UItemChargeHandler::SetItemCharges(FItemChargesCompleteData ItemCharges)
{
}

void UItemChargeHandler::CreateNewItemCharge()
{
	FItemChargesInfo ItemChargesInfo;
	itemCharges.ItemChargesInfos.Add(ItemChargesInfo);
}
