// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatClass.h"
#include "PlayerCombatEntity.generated.h"

enum class EClasses;
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
	
	UPROPERTY( EditAnywhere )
	FString characterName;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;

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
	FCompleteClassData mainClass;

	UPROPERTY()
	FClassData currentMainClassLevel;
	
	UPROPERTY()
	TArray<FCompleteClassData> unlockedPlayerClasses;

	UPROPERTY()
	TArray<FString> skillSlots;

	UPROPERTY()
	int currentHP;
	UPROPERTY()
	int currentMP;
};



UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

public:
	
	UPROPERTY()
	UCombatClass* mainClass;

	UPROPERTY()
	TMap<EClasses,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FPlayerCompleteDataSet playerCompleteDataSet;
	
	UPROPERTY()
	FPlayerIdentityData playerEntityData;
	UPROPERTY()
	UPartyHealthbarElement* partyHealthbarElement;

	virtual void LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet);
	virtual void SetPlayerEntity(FPlayerIdentityData aPlayerEntityData);
	virtual void SetTacticsEntity(USkillFactorySubsystem* aSkillFactory) override;
	
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData, int aClassLevel);
	virtual void SetMainClass(EClasses aClass);
	virtual void Reset() override;
	virtual void SetToDefaultState() override;

	void SetAbilityScores();
	
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
};


