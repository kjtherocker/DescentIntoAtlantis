// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberElement.h"

#include "BaseHighlightElement.h"

void UNumberElement::SetNumbersText(FCombatLog_AttackDefense_Data aAttackDefenceLog)
{
	FString number = FString::FromInt(aAttackDefenceLog.FinalDamageResult);
	SetText(BW_NumberText,WrapTextInStyle(number,ETextStyle::ClassHighlight));
}
