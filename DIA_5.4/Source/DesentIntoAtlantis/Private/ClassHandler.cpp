// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassHandler.h"

#include "CombatEntityHub.h"
#include "ElementalHandler.h"
#include "PartyManagerSubsystem.h"
#include "PlayerCombatEntity.h"
#include "SkillHandler.h"

void UClassHandler::LoadSavedClassHandler(FCompleteClassHandlerData aCompleteClassHandlerData,	TMap<EClassID,FCompleteClassData> aClassDataTables)
{
	
	TMap<EClassID, FCompleteClassData> SavedClassData = aCompleteClassHandlerData.unlockedPlayerClasses;

	//Validates the saved data to what the datatables currently have
	for (TTuple<EClassID, FCompleteClassData> playerClass : SavedClassData)
	{
		EClassID classIdentifier = playerClass.Key;

		if(classIdentifier == EClassID::None)
		{
			continue;
		}
		
			
		if(!aClassDataTables.Contains(classIdentifier))
		{
			continue;
		}
			
		FCompleteClassData CompleteClassData = ValidateSavedClassAndDataClass(playerClass.Value,aClassDataTables[classIdentifier]);
		InitializeAndUnlockCombatClassFromDataTable(CompleteClassData);
	}

	CompleteClassHandlerData.ClassPoints = aCompleteClassHandlerData.ClassPoints;
	
	EClassID mainClassIdentifier = aCompleteClassHandlerData.mainClassData.classIdentifer;
	EClassID subclassIdentifier  = aCompleteClassHandlerData.subClassData.classIdentifer;
		
	SetClass(mainClassIdentifier,EClassSlot::Main);
	SetClass(subclassIdentifier,EClassSlot::Sub);
}

void UClassHandler::InitializeClassHandler(UPlayerCombatEntity* aPlayerCombatEntity,
	USkillFactorySubsystem* SkillFactorySubsystem,UPartyManagerSubsystem* aPlayerManager)
{
	partyManager          = aPlayerManager;
	skillfactorySubsystem = SkillFactorySubsystem;
	playerCombatEntity    = aPlayerCombatEntity;
	skillHandler          = playerCombatEntity->combatEntityHub->skillHandler;
}

void UClassHandler::InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData)
{
	if(CompleteClassHandlerData.unlockedPlayerClasses.Contains(aCompleteClassData.classIdentifer))
	{
		return;
	}
	
	UCombatClass* newClass = NewObject<UCombatClass>();
	newClass->InitializeDependencys(skillfactorySubsystem, playerCombatEntity,skillHandler);
	newClass->SetClass(aCompleteClassData);
	CompleteClassHandlerData.unlockedPlayerClasses.Add(aCompleteClassData.classIdentifer,newClass->completeClassData);
	unlockedClasses.Add(aCompleteClassData.classIdentifer,newClass);
	
	UnlockAllOwnedPassives(aCompleteClassData.classIdentifer,aCompleteClassData.classPassives);
}

void UClassHandler::SetClass(EClassID aClass, EClassSlot ClassSlot)
{
	if(aClass == EClassID::None)
	{
		return;
	}

	switch (ClassSlot)
	{
	    case EClassSlot::None:
	    	break;
	    case EClassSlot::Main:
	    	if(subClass != nullptr)
	    	{
	    		
	    		if(subClass->GetClassID() == aClass)
	    		{
	    			return;   
	    		}
	    	}
	    	
	    	mainClass = unlockedClasses[aClass];
	    	playerCombatEntity->combatEntityHub->elementalHandler->ResetAllElements();
	    	playerCombatEntity->combatEntityHub->elementalHandler->LoadSavedInfo(mainClass->completeClassData.CompleteElementalHandlerData);
	    	CompleteClassHandlerData.mainClassData = mainClass->completeClassData;
	    	playerCombatEntity->combatEntityHub->passiveHandler->AddMainClassPassives(mainClass);
			playerCombatEntity->SetAbilityScores();
	    	break;
	    case EClassSlot::Sub:

	    	if(mainClass != nullptr)
	    	{
	    		if(mainClass->GetClassID() == aClass)
	    		{
				    	return;   
	    		}
	    	}
		
	    	subClass = unlockedClasses[aClass];
			CompleteClassHandlerData.subClassData = subClass->completeClassData;
	    	break;
	}

	playerCombatEntity->GatherAndSavePlayerCompleteDataSet();
	
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
	    		TArray<USkillBase*> mainclassSkills = mainClass->classSkills;
	    		TArray<ESkillIDS> SkillIds;
			    for (auto Skill : mainclassSkills)
			    {
			    	SkillIds.Add(Skill->GetSkillID());
			    }

	    		Skills = skillHandler->GetSkillsByID(SkillIds);
	    	}
	    	break;
	    case EClassSlot::Sub:
	    	if(subClass != nullptr)
	    	{
	    		TArray<USkillBase*> subclassSkills = subClass->classSkills;
	    		TArray<ESkillIDS> SkillIds;
	    		for (auto Skill : subclassSkills)
	    		{
	    			SkillIds.Add(Skill->GetSkillID());
	    		}

	    		Skills = skillHandler->GetSkillsByID(SkillIds);
	    	}
	    	break;
	}

	return Skills;
}

void UClassHandler::UnlockAllOwnedPassives(EClassID aClassID,TArray<FPassiveSkillClassData> aPassiveSkillData)
{
	TArray<FPassiveSkillClassData> classPassives  = aPassiveSkillData;
	for (auto ClassPassive : classPassives)
	{
		if(ClassPassive.isPassiveOwned == false)
		{
			continue;
		}
		
		UnlockPassiveSkill(aClassID,ClassPassive.passiveSkillID);		
	}
}

void UClassHandler::UnlockClass(EClassID aClass)
{
	if(aClass == EClassID::None)
	{
		return;
	}
	
	UCombatClass* newClass = NewObject<UCombatClass>();
	newClass->InitializeDependencys(skillfactorySubsystem, playerCombatEntity,skillHandler);
	newClass->SetClass(partyManager->GetClassData(aClass));
	CompleteClassHandlerData.unlockedPlayerClasses.Add(aClass,newClass->completeClassData);
	unlockedClasses.Add(aClass,newClass);
}

void UClassHandler::UpdateMainClassAndSubclassData()
{

	if(CompleteClassHandlerData.unlockedPlayerClasses.Contains(CompleteClassHandlerData.mainClassData.classIdentifer))
	{
		CompleteClassHandlerData.mainClassData = CompleteClassHandlerData.unlockedPlayerClasses[CompleteClassHandlerData.mainClassData.classIdentifer];	
	}

	if(CompleteClassHandlerData.unlockedPlayerClasses.Contains(CompleteClassHandlerData.subClassData.classIdentifer))
	{
		CompleteClassHandlerData.subClassData = CompleteClassHandlerData.unlockedPlayerClasses[CompleteClassHandlerData.subClassData.classIdentifer];
	}
	
}

FCompleteClassData UClassHandler::ValidateSavedClassAndDataClass(FCompleteClassData aSavedClass, FCompleteClassData aDatatableClass)
{
	FCompleteClassData SavedClass     = aSavedClass;
	FCompleteClassData DatatableClass = aDatatableClass;

	if(SavedClass.classIdentifer != DatatableClass.classIdentifer)
	{
		return DatatableClass;
	}

	DatatableClass.ClassPointCostToUnlock = SavedClass.ClassPointCostToUnlock;
	DatatableClass.skillClassData = ValidateSkills( aSavedClass,  aDatatableClass);
	DatatableClass.classPassives = ValidatePassives( aSavedClass,aDatatableClass);


	return DatatableClass;
}

TArray<FSkillClassData> UClassHandler::ValidateSkills(FCompleteClassData aSavedClass, FCompleteClassData aDatatableClass)
{
	FCompleteClassData SavedClass     = aSavedClass;
	FCompleteClassData DatatableClass = aDatatableClass;
	
	TMap<ESkillIDS,FSkillClassData> datatableSkills;
	TMap<ESkillIDS,FSkillClassData> saveSkillData;

	for(int i = 0 ; i <DatatableClass.skillClassData.Num();i++ )
	{
		datatableSkills.Add(DatatableClass.skillClassData[i].SkillIds,DatatableClass.skillClassData[i]);
	}

	for(int i = 0 ; i <SavedClass.skillClassData.Num();i++ )
	{
		saveSkillData.Add(SavedClass.skillClassData[i].SkillIds,SavedClass.skillClassData[i]);
	}

	for (auto savedSkill : saveSkillData)
	{
		if(datatableSkills.Contains(savedSkill.Key))
		{
			if(datatableSkills[savedSkill.Key].isSkillOwned )
			{
				continue;
			}
			datatableSkills[savedSkill.Key].isSkillOwned = saveSkillData[savedSkill.Key].isSkillOwned;
		}
		else
		{
			GiveClassPoints(savedSkill.Value.CPCost);
		}
	}

	TArray<FSkillClassData> skillClassData;
	for (auto DatatableSkill : datatableSkills)
	{
		skillClassData.Add(DatatableSkill.Value);
	}

	return skillClassData;
	
}

TArray<FPassiveSkillClassData> UClassHandler::ValidatePassives(FCompleteClassData aSavedClass,
	FCompleteClassData aDatatableClass)
{
	FCompleteClassData SavedClass     = aSavedClass;
	FCompleteClassData DatatableClass = aDatatableClass;
	
	TMap<EPassiveSkillID,FPassiveSkillClassData> datatablePassives;
	TMap<EPassiveSkillID,FPassiveSkillClassData> savedSkills;

	for(int i = 0 ; i <DatatableClass.classPassives.Num();i++ )
	{
		datatablePassives.Add(DatatableClass.classPassives[i].passiveSkillID,DatatableClass.classPassives[i]);
	}

	for(int i = 0 ; i <SavedClass.classPassives.Num();i++ )
	{
		savedSkills.Add(SavedClass.classPassives[i].passiveSkillID,SavedClass.classPassives[i]);
	}

	for (auto savedPassive : savedSkills)
	{
		if(datatablePassives.Contains(savedPassive.Key))
		{
			if(datatablePassives[savedPassive.Key].isPassiveOwned )
			{
				continue;
			}
			datatablePassives[savedPassive.Key].isPassiveOwned = savedSkills[savedPassive.Key].isPassiveOwned;
		}
		else
		{
			GiveClassPoints(savedPassive.Value.CPCost);
		}
	}

	TArray<FPassiveSkillClassData>  passiveSkillData;
	for (auto DatatableSkill : datatablePassives)
	{
		passiveSkillData.Add(DatatableSkill.Value);
	}

	return passiveSkillData;
}

FString UClassHandler::GetClassName(EClassSlot aClass)
{
	switch (aClass)
	{
	case EClassSlot::None:
		break;
	case EClassSlot::Main:
		if(mainClass != nullptr)
		{
			return mainClass->completeClassData.className;
		}
		break;
	case EClassSlot::Sub:
		if(subClass != nullptr)
		{
			return subClass->completeClassData.className;
		}
		break;
	}

	return "";
}

void UClassHandler::SpendClassPointsAndUnlockSkill(int aClassPoints, EClassID aClassID, ESkillIDS aSkillID)
{
	RemoveClassPoints(aClassPoints);

	UnlockSkill(aClassID,aSkillID);
	
}

void UClassHandler::UnlockSkill(EClassID aClassID, ESkillIDS aSkillID)
{
	CompleteClassHandlerData.unlockedPlayerClasses[aClassID].skillClassData;

	int numberOfSkillClassData = CompleteClassHandlerData.unlockedPlayerClasses[aClassID].skillClassData.Num();
	for(int i = 0 ; i <numberOfSkillClassData;i++ )
	{
		if(CompleteClassHandlerData.unlockedPlayerClasses[aClassID].skillClassData[i].SkillIds == aSkillID)
		{
			CompleteClassHandlerData.unlockedPlayerClasses[aClassID].skillClassData[i].isSkillOwned = true;
		}
	}

	unlockedClasses[aClassID]->SetClass(CompleteClassHandlerData.unlockedPlayerClasses[aClassID]);
	UpdateMainClassAndSubclassData();
	playerCombatEntity->GatherAndSavePlayerCompleteDataSet();
}

void UClassHandler::SpendClassPointsAndUnlockPassiveSkill(int aClassPoints, EClassID aClassID, EPassiveSkillID aSkillID)
{
	RemoveClassPoints(aClassPoints);
	UnlockPassiveSkill(aClassID,aSkillID);
}

void UClassHandler::UnlockPassiveSkill(EClassID aClassID, EPassiveSkillID aSkillID)
{
	CompleteClassHandlerData.unlockedPlayerClasses[aClassID].skillClassData;

	int numberOfSkillClassData = CompleteClassHandlerData.unlockedPlayerClasses[aClassID].classPassives.Num();
	for(int i = 0 ; i <numberOfSkillClassData;i++ )
	{
		if(CompleteClassHandlerData.unlockedPlayerClasses[aClassID].classPassives[i].passiveSkillID == aSkillID)
		{
			CompleteClassHandlerData.unlockedPlayerClasses[aClassID].classPassives[i].isPassiveOwned = true;
			CompleteClassHandlerData.unlockedPassives.Add(aSkillID,CompleteClassHandlerData.unlockedPlayerClasses[aClassID].classPassives[i]);
		}
	}

	unlockedClasses[aClassID]->SetClass(CompleteClassHandlerData.unlockedPlayerClasses[aClassID]);
	if(mainClass != nullptr)
	{
		if(mainClass->GetClassID() == aClassID)
		{
			playerCombatEntity->combatEntityHub->passiveHandler->AddMainClassPassives(mainClass);	
		}
	}
	UpdateMainClassAndSubclassData();
	playerCombatEntity->GatherAndSavePlayerCompleteDataSet();
}

void UClassHandler::UnlockAllSkills()
{
	for (auto Element : unlockedClasses)
	{
		Element.Value->UnlockAllClassSkills();
		
	}
}

void UClassHandler::UnlockAllMainClassPassives()
{
	int numberOfSkillClassData = CompleteClassHandlerData.unlockedPlayerClasses[mainClass->GetClassID()].classPassives.Num();
	for(int i = 0 ; i <numberOfSkillClassData;i++ )
	{
		UnlockPassiveSkill(mainClass->GetClassID(),
			CompleteClassHandlerData.unlockedPlayerClasses[mainClass->GetClassID()].classPassives[i].passiveSkillID);
	}
}

bool UClassHandler::HasEnoughClassPoints(int aClassPoints)
{
	return CompleteClassHandlerData.ClassPoints >= aClassPoints;
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

