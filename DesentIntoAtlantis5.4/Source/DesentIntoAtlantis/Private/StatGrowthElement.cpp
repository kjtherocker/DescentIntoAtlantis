// Fill out your copyright notice in the Description page of Project Settings.


#include "StatGrowthElement.h"

void UStatGrowthElement::SetStatGrowthElement(FString aLetterGrade, FString aStatName, FString aStatNumber, float aPercentage)
{

	BW_LetterGrade->SetText(FText::FromString("<TitleStyling>"+aLetterGrade+"</>"));
	BW_StatName->SetText(FText::FromString(aStatName));
	BW_StatNumber->SetText(FText::FromString(aStatNumber));
	BW_ProgressBar->SetPercent(aPercentage);
}
