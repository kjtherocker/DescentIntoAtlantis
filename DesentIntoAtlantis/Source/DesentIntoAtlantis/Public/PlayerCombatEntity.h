// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatClass.h"
#include "PlayerCombatEntity.generated.h"

enum class EDataTableClasses;
class UPartyHealthbarElement;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerEntityData
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	EDataTableClasses DataTableClass;
	
	UPROPERTY( EditAnywhere )
	FString characterName;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;

	UPROPERTY()
	int initialLevel;
};

UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	UPROPERTY()
	USkillFactory* skillFactory;

public:
	
	UPROPERTY()
	UCombatClass* baseClass;
	
	UPROPERTY()
	FPlayerEntityData playerEntityData;
	UPROPERTY()
	UPartyHealthbarElement* partyHealthbarElement;


	virtual void SetPlayerEntity(FPlayerEntityData aPlayerEntityData);
	virtual void SetTacticsEntity(USkillFactory* aSkillFactory) override;
	
	virtual void SetPlayerClass(UDataTable*EDataTableClasses);
	virtual void Reset() override;
	virtual void SetToDefaultState() override;

	void SetAbilityScores();
	
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
};


