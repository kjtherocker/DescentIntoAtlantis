// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ESkillIDS : uint8
{
	None                   UMETA(DisplayName = "None"),
	Uninitialized          UMETA(DisplayName = "Uninitialized"),
	DefaultAttack          UMETA(DisplayName = "Default Attack"),
	//Banshee
	Bonk                   UMETA(DisplayName = "Bonk"),
	Boo                    UMETA(DisplayName = "Boo"),
	RejuvenatingLink       UMETA(DisplayName = "RejuvenatingLink"),
	WailingScream          UMETA(DisplayName = "WailingScream"),
	//Gem Thief
	Lunge                  UMETA(DisplayName = "Lunge"),
	SpreadInfection        UMETA(DisplayName = "SpreadInfection"),
	RustyBlade             UMETA(DisplayName = "RustyBlade"),
	CoupDeGrace            UMETA(DisplayName = "Coup De Grace"),
	//Atlantian Warden
	OceansBalm             UMETA(DisplayName = "Oceans Balm"),
	BoilInsides            UMETA(DisplayName = "Boil Insides"),
	WavesSweetRelease      UMETA(DisplayName = "WavesSweetRelease"),
	EmboldingSpeech        UMETA(DisplayName = "EmboldingSpeech"),
	//Laid Off Executioner
	MarkForDeath           UMETA(DisplayName = "MarkForDeath"),
	MockingTaunt           UMETA(DisplayName = "MockingTaunt"),
	AbsoluteGuard          UMETA(DisplayName = "AbsoluteGuard"),
	FeyDuality             UMETA(DisplayName = "FeyDuality"),


	//SharkFiend
	WaterBlast             UMETA(DisplayName = "WaterBlast"),

};
