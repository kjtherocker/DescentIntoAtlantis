// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgressBarDelayedElement.h"
#include "Components/ProgressBar.h"


void UProgressBarDelayedElement::SetProgressBar(float aCurrentValue)
{
	currentPercentage  = aCurrentValue;
	previousPercentage = currentPercentage;
	
	BW_Main_ProgressBar->SetPercent(currentPercentage);
	BW_Slow_ProgressBar->SetPercent(previousPercentage);
}

void UProgressBarDelayedElement::SetPercentageMain(float aPercentage)
{
	BW_Main_ProgressBar->SetPercent(aPercentage);
	currentPercentage = aPercentage;

	if(currentPercentage >= previousPercentage )
	{
		previousPercentage = currentPercentage;
	}
}

void UProgressBarDelayedElement::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	Super::NativeTick(MyGeometry, DeltaTime);

	if(previousPercentage != currentPercentage &&
		previousPercentage >  currentPercentage)
	{
		previousPercentage -= DeltaTime *0.2;
	}
	//else if(previousHealthPercentage != currentHealthPercentage &&
	//	previousHealthPercentage <  currentHealthPercentage)
	//{
	//	previousHealthPercentage += DeltaTime *0.1;
	//}
	BW_Slow_ProgressBar->SetPercent(previousPercentage);
}
