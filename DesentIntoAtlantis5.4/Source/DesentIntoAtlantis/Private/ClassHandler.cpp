// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassHandler.h"

#include "CombatEntityHub.h"
#include "ElementalHandler.h"
#include "PlayerCombatEntity.h"

void UClassHandler::LoadSavedClassHandler(FCompleteClassHandlerData aCompleteClassHandlerData)
{
	CompleteClassHandlerData = aCompleteClassHandlerData;

	for (auto Element : CompleteClassHandlerData.unlockedPlayerClasses)
	{
		InitializeAndUnlockCombatClassFromDataTable(Element.Value);
	}
	
}

void UClassHandler::InitializeClassHandler(UPlayerCombatEntity* aPlayerCombatEntity, USkillFactorySubsystem* SkillFactorySubsystem)
{
	skillfactorySubsystem = SkillFactorySubsystem;
	playerCombatEntity    = aPlayerCombatEntity;
}

void UClassHandler::InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData)
{
	UCombatClass* newClass = NewObject<UCombatClass>();
	newClass->InitializeDependencys(skillfactorySubsystem, playerCombatEntity);
	newClass->CreateClass(aCompleteClassData);
	CompleteClassHandlerData.unlockedPlayerClasses.Add(aCompleteClassData.classIdentifer,newClass->completeClassData);
	unlockedClasses.Add(aCompleteClassData.classIdentifer,newClass);
}

void UClassHandler::SetClass(EClasses aClass, EClassSlot ClassSlot)
{
	mainClass = unlockedClasses[aClass];
	
	
	playerCombatEntity->SetAbilityScores();
	playerCombatEntity->SetToDefaultState();

	switch (ClassSlot)
	{
	    case EClassSlot::None:
	    	break;
	    case EClassSlot::Main:
	    	playerCombatEntity->combatEntityHub->elementalHandler->ResetAllElements();
	    	playerCombatEntity->combatEntityHub->elementalHandler->LoadSavedInfo(mainClass->completeClassData.CompleteElementalHandlerData);
	    	CompleteClassHandlerData.mainClassData = mainClass->completeClassData;
	    	playerCombatEntity->combatEntityHub->passiveHandler->AddMainClassPassives(mainClass);	
	    	break;
	    case EClassSlot::Sub:
	    	break;
	}
}

TArray<USkillBase*> UClassHandler::GetClassSkills(EClassSlot ClassSlot)
{
	TArray<USkillBase*> Skills;

	switch (ClassSlot)
	{
	    case EClassSlot::None:
	    	break;
	    case EClassSlot::Main:
	    	if(mainClass != nullptr)
	    	{
	    		Skills = mainClass->classSkills;			
	    	}
	    	break;
	    case EClassSlot::Sub:
	    	if(subClass != nullptr)
	    	{
	    		Skills = subClass->classSkills;	
	    	}
	    	break;
	}

	return Skills;
}

void UClassHandler::GiveClassPoints(int aClassPoints)
{
	CompleteClassHandlerData.ClassPoints += aClassPoints;

	if(CompleteClassHandlerData.ClassPoints >= 9999)
	{
		CompleteClassHandlerData.ClassPoints = 9999;
	}
}

void UClassHandler::RemoveClassPoints(int aClassPoints)
{
	CompleteClassHandlerData.ClassPoints -= aClassPoints;
	if(CompleteClassHandlerData.ClassPoints <= 0)
	{
		CompleteClassHandlerData.ClassPoints = 0;
	}
}

int UClassHandler::GetClassPoints()
{
	return CompleteClassHandlerData.ClassPoints;
}

