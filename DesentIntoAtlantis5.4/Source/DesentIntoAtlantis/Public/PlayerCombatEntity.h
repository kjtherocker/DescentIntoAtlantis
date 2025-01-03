// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassHandler.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatClass.h"
#include "CompleteClassHandlerData.h"
#include "CompleteElementalHandlerData.h"
#include "PassiveSkillHandlerData.h"
#include "PlayerCombatEntity.generated.h"


enum class EClasses  : uint8;
class UPartyHealthbarElement;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerIdentityData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EPartyMembers characterIdentifier;
		
	UPROPERTY( EditAnywhere )
	EClasses initalClass;


	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatGrowths;
	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatBases;
	
	UPROPERTY( EditAnywhere )
	FString characterName;
	
	UPROPERTY( EditAnywhere )
	UMaterialInterface*  characterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* halfBodyCharacterPortrait;

	UPROPERTY(EditAnywhere)
	int initialLevel;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerCompleteDataSet
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;

	UPROPERTY()
	FCompleteClassHandlerData CompleteClassHandlerData;

	UPROPERTY(EditAnywhere)
	FPassiveHandlerData PassiveHandlerData;

	
	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillSlots;

	UPROPERTY()
	FHealthData HealthData;
	UPROPERTY()
	int currentMP;
	UPROPERTY()
	float currentSync;
	
	UPROPERTY()
	FCompleteElementalHandlerData CompleteElementalHandlerData;
};

UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	UPROPERTY()
	int currentLevel;
public:

	UPROPERTY()
	UClassHandler* classHandler;

	UPROPERTY()
	TMap<EClasses,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FPlayerCompleteDataSet playerCompleteDataSet;
	
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;
	UPROPERTY()
	UPartyHealthbarElement* partyHealthbarElement;

	UPROPERTY()
	TArray<UAilment*> activeAilments;

    virtual void InitializeStats(EStatTypes aAbilityScoreTypes) override;
	virtual void LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet);
	virtual void SetPlayerEntity(FPlayerIdentityData aPlayerEntityData);
	virtual void SetCombatEntity(USkillFactorySubsystem* aSkillFactory,UPassiveSkillFactorySubsystem* aPassiveSkillFactory) override;
	
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData, int aClassLevel);
	virtual void SetMainClass(EClasses aClass);
	virtual void Reset() override;
	virtual void SetToDefaultState() override;
	virtual FString GetEntityName() override;

	virtual void GiveClassPoints(int aClassPoints);
	virtual void RemoveClassPoints(int aClassPoints);
	virtual int  GetClassPoints();
	virtual void GatherAndSavePlayerCompleteDataSet();

	virtual void AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot) override;
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills) override;

	void SetAbilityScores();
	
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
	virtual float GetSyncPercentage() override;
	virtual float GetMainClassEXPPercentage();

	virtual int GetCurrentLevel();
	
	virtual void LevelUp(int aNewLevel);
};


