// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UENUM()
enum class  EViews
{
	None                 = 0,
	CommandBoard         = 1,
	Healthbars           = 2,
	CombatBackground     = 3,
	CombatSelection      = 4,
	Skill                = 5,
	TurnCounter          = 7,
	Dialogue             = 8,
	EnemySkill           = 9,
	Levelup              = 10,
	Tutorial             = 11,
	Title                = 12,
	Death                = 13,
	Ending               = 14,
	CameraFilter         = 15,
	MapView              = 16,
	InteractableView     = 17,
	SyncView             = 18,
	MainMenu             = 19,
	ItemView             = 20,
	MainMenuSkillView    = 21,
	MainMenuClassView    = 22,
	MainMenuStatusView   = 23,
	OptionView           = 24,
	SaveView             = 25,
	LoadView             = 26,
	SettingView          = 27,
	TransitionView       = 28,
};



UENUM()
enum class  EUiType
{
	None              = 0,
	ActiveUi          = 1,
	PersistentUi      = 2
};



UENUM()
enum class  EViewElements
{
	None                     = 0,
	PartyStatusHealthbar     = 1,
	SkillBar                 = 2,
	EnemySelectionElement    = 3,
	TurnCounterElement       = 4,
	MainMenuStatusElement    = 5,
	SaveSlotElement          = 6,
	SavePortraitElement      = 7,
	
};